/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckLogicWarningType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace AutomatedReasoningCheckLogicWarningTypeMapper
      {

        static const int ALWAYS_TRUE_HASH = HashingUtils::HashString("ALWAYS_TRUE");
        static const int ALWAYS_FALSE_HASH = HashingUtils::HashString("ALWAYS_FALSE");


        AutomatedReasoningCheckLogicWarningType GetAutomatedReasoningCheckLogicWarningTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALWAYS_TRUE_HASH)
          {
            return AutomatedReasoningCheckLogicWarningType::ALWAYS_TRUE;
          }
          else if (hashCode == ALWAYS_FALSE_HASH)
          {
            return AutomatedReasoningCheckLogicWarningType::ALWAYS_FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomatedReasoningCheckLogicWarningType>(hashCode);
          }

          return AutomatedReasoningCheckLogicWarningType::NOT_SET;
        }

        Aws::String GetNameForAutomatedReasoningCheckLogicWarningType(AutomatedReasoningCheckLogicWarningType enumValue)
        {
          switch(enumValue)
          {
          case AutomatedReasoningCheckLogicWarningType::NOT_SET:
            return {};
          case AutomatedReasoningCheckLogicWarningType::ALWAYS_TRUE:
            return "ALWAYS_TRUE";
          case AutomatedReasoningCheckLogicWarningType::ALWAYS_FALSE:
            return "ALWAYS_FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomatedReasoningCheckLogicWarningTypeMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
