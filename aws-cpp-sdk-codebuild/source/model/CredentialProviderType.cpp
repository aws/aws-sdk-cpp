/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CredentialProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace CredentialProviderTypeMapper
      {

        static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");


        CredentialProviderType GetCredentialProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECRETS_MANAGER_HASH)
          {
            return CredentialProviderType::SECRETS_MANAGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CredentialProviderType>(hashCode);
          }

          return CredentialProviderType::NOT_SET;
        }

        Aws::String GetNameForCredentialProviderType(CredentialProviderType enumValue)
        {
          switch(enumValue)
          {
          case CredentialProviderType::SECRETS_MANAGER:
            return "SECRETS_MANAGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CredentialProviderTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
