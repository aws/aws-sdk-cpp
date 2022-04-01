/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/NetworkOrigin.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace NetworkOriginMapper
      {

        static const int Internet_HASH = HashingUtils::HashString("Internet");
        static const int VPC_HASH = HashingUtils::HashString("VPC");


        NetworkOrigin GetNetworkOriginForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Internet_HASH)
          {
            return NetworkOrigin::Internet;
          }
          else if (hashCode == VPC_HASH)
          {
            return NetworkOrigin::VPC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkOrigin>(hashCode);
          }

          return NetworkOrigin::NOT_SET;
        }

        Aws::String GetNameForNetworkOrigin(NetworkOrigin enumValue)
        {
          switch(enumValue)
          {
          case NetworkOrigin::Internet:
            return "Internet";
          case NetworkOrigin::VPC:
            return "VPC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkOriginMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
