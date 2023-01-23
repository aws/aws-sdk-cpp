/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PolicyTemplateName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace PolicyTemplateNameMapper
      {

        static const int BLANK_POLICY_HASH = HashingUtils::HashString("BLANK_POLICY");


        PolicyTemplateName GetPolicyTemplateNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLANK_POLICY_HASH)
          {
            return PolicyTemplateName::BLANK_POLICY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyTemplateName>(hashCode);
          }

          return PolicyTemplateName::NOT_SET;
        }

        Aws::String GetNameForPolicyTemplateName(PolicyTemplateName enumValue)
        {
          switch(enumValue)
          {
          case PolicyTemplateName::BLANK_POLICY:
            return "BLANK_POLICY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyTemplateNameMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
