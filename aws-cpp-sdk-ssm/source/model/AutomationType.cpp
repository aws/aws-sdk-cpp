/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AutomationTypeMapper
      {

        static const int CrossAccount_HASH = HashingUtils::HashString("CrossAccount");
        static const int Local_HASH = HashingUtils::HashString("Local");


        AutomationType GetAutomationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CrossAccount_HASH)
          {
            return AutomationType::CrossAccount;
          }
          else if (hashCode == Local_HASH)
          {
            return AutomationType::Local;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationType>(hashCode);
          }

          return AutomationType::NOT_SET;
        }

        Aws::String GetNameForAutomationType(AutomationType enumValue)
        {
          switch(enumValue)
          {
          case AutomationType::CrossAccount:
            return "CrossAccount";
          case AutomationType::Local:
            return "Local";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
