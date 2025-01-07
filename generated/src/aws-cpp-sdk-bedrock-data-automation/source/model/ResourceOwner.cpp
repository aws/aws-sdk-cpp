/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/ResourceOwner.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockDataAutomation
  {
    namespace Model
    {
      namespace ResourceOwnerMapper
      {

        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");


        ResourceOwner GetResourceOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_HASH)
          {
            return ResourceOwner::SERVICE;
          }
          else if (hashCode == ACCOUNT_HASH)
          {
            return ResourceOwner::ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceOwner>(hashCode);
          }

          return ResourceOwner::NOT_SET;
        }

        Aws::String GetNameForResourceOwner(ResourceOwner enumValue)
        {
          switch(enumValue)
          {
          case ResourceOwner::NOT_SET:
            return {};
          case ResourceOwner::SERVICE:
            return "SERVICE";
          case ResourceOwner::ACCOUNT:
            return "ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceOwnerMapper
    } // namespace Model
  } // namespace BedrockDataAutomation
} // namespace Aws
