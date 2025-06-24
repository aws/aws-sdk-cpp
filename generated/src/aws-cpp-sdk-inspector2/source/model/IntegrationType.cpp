/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/IntegrationType.h>
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
      namespace IntegrationTypeMapper
      {

        static const int GITLAB_SELF_MANAGED_HASH = HashingUtils::HashString("GITLAB_SELF_MANAGED");
        static const int GITHUB_HASH = HashingUtils::HashString("GITHUB");


        IntegrationType GetIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GITLAB_SELF_MANAGED_HASH)
          {
            return IntegrationType::GITLAB_SELF_MANAGED;
          }
          else if (hashCode == GITHUB_HASH)
          {
            return IntegrationType::GITHUB;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationType>(hashCode);
          }

          return IntegrationType::NOT_SET;
        }

        Aws::String GetNameForIntegrationType(IntegrationType enumValue)
        {
          switch(enumValue)
          {
          case IntegrationType::NOT_SET:
            return {};
          case IntegrationType::GITLAB_SELF_MANAGED:
            return "GITLAB_SELF_MANAGED";
          case IntegrationType::GITHUB:
            return "GITHUB";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
