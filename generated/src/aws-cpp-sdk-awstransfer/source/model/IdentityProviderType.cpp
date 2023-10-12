/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace IdentityProviderTypeMapper
      {

        static constexpr uint32_t SERVICE_MANAGED_HASH = ConstExprHashingUtils::HashString("SERVICE_MANAGED");
        static constexpr uint32_t API_GATEWAY_HASH = ConstExprHashingUtils::HashString("API_GATEWAY");
        static constexpr uint32_t AWS_DIRECTORY_SERVICE_HASH = ConstExprHashingUtils::HashString("AWS_DIRECTORY_SERVICE");
        static constexpr uint32_t AWS_LAMBDA_HASH = ConstExprHashingUtils::HashString("AWS_LAMBDA");


        IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_MANAGED_HASH)
          {
            return IdentityProviderType::SERVICE_MANAGED;
          }
          else if (hashCode == API_GATEWAY_HASH)
          {
            return IdentityProviderType::API_GATEWAY;
          }
          else if (hashCode == AWS_DIRECTORY_SERVICE_HASH)
          {
            return IdentityProviderType::AWS_DIRECTORY_SERVICE;
          }
          else if (hashCode == AWS_LAMBDA_HASH)
          {
            return IdentityProviderType::AWS_LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityProviderType>(hashCode);
          }

          return IdentityProviderType::NOT_SET;
        }

        Aws::String GetNameForIdentityProviderType(IdentityProviderType enumValue)
        {
          switch(enumValue)
          {
          case IdentityProviderType::NOT_SET:
            return {};
          case IdentityProviderType::SERVICE_MANAGED:
            return "SERVICE_MANAGED";
          case IdentityProviderType::API_GATEWAY:
            return "API_GATEWAY";
          case IdentityProviderType::AWS_DIRECTORY_SERVICE:
            return "AWS_DIRECTORY_SERVICE";
          case IdentityProviderType::AWS_LAMBDA:
            return "AWS_LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityProviderTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
