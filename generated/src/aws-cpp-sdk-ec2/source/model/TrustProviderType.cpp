/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TrustProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace TrustProviderTypeMapper
      {

        static const int user_HASH = HashingUtils::HashString("user");
        static const int device_HASH = HashingUtils::HashString("device");


        TrustProviderType GetTrustProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == user_HASH)
          {
            return TrustProviderType::user;
          }
          else if (hashCode == device_HASH)
          {
            return TrustProviderType::device;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustProviderType>(hashCode);
          }

          return TrustProviderType::NOT_SET;
        }

        Aws::String GetNameForTrustProviderType(TrustProviderType enumValue)
        {
          switch(enumValue)
          {
          case TrustProviderType::user:
            return "user";
          case TrustProviderType::device:
            return "device";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustProviderTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
