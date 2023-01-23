/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/NetworkProfileType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace NetworkProfileTypeMapper
      {

        static const int CURATED_HASH = HashingUtils::HashString("CURATED");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        NetworkProfileType GetNetworkProfileTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURATED_HASH)
          {
            return NetworkProfileType::CURATED;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return NetworkProfileType::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NetworkProfileType>(hashCode);
          }

          return NetworkProfileType::NOT_SET;
        }

        Aws::String GetNameForNetworkProfileType(NetworkProfileType enumValue)
        {
          switch(enumValue)
          {
          case NetworkProfileType::CURATED:
            return "CURATED";
          case NetworkProfileType::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NetworkProfileTypeMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
