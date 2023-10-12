/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UserTrustProviderType.h>
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
      namespace UserTrustProviderTypeMapper
      {

        static constexpr uint32_t iam_identity_center_HASH = ConstExprHashingUtils::HashString("iam-identity-center");
        static constexpr uint32_t oidc_HASH = ConstExprHashingUtils::HashString("oidc");


        UserTrustProviderType GetUserTrustProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == iam_identity_center_HASH)
          {
            return UserTrustProviderType::iam_identity_center;
          }
          else if (hashCode == oidc_HASH)
          {
            return UserTrustProviderType::oidc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UserTrustProviderType>(hashCode);
          }

          return UserTrustProviderType::NOT_SET;
        }

        Aws::String GetNameForUserTrustProviderType(UserTrustProviderType enumValue)
        {
          switch(enumValue)
          {
          case UserTrustProviderType::NOT_SET:
            return {};
          case UserTrustProviderType::iam_identity_center:
            return "iam-identity-center";
          case UserTrustProviderType::oidc:
            return "oidc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UserTrustProviderTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
