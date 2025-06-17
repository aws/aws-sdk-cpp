/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryProviderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace CodeRepositoryProviderTypeMapper
      {

        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");
        static const int GITLAB_SELF_MANAGED_HASH = HashingUtils::HashString("GITLAB_SELF_MANAGED");


        CodeRepositoryProviderType GetCodeRepositoryProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITHUB_HASH)
          {
            return CodeRepositoryProviderType::GITHUB;
          }
          else if (hashCode == GITLAB_SELF_MANAGED_HASH)
          {
            return CodeRepositoryProviderType::GITLAB_SELF_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CodeRepositoryProviderType>(hashCode);
          }

          return CodeRepositoryProviderType::NOT_SET;
        }

        Aws::String GetNameForCodeRepositoryProviderType(CodeRepositoryProviderType enumValue)
        {
          switch(enumValue)
          {
          case CodeRepositoryProviderType::NOT_SET:
            return {};
          case CodeRepositoryProviderType::GITHUB:
            return "GITHUB";
          case CodeRepositoryProviderType::GITLAB_SELF_MANAGED:
            return "GITLAB_SELF_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CodeRepositoryProviderTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
