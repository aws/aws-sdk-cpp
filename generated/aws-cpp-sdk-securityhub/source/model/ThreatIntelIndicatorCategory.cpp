/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ThreatIntelIndicatorCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace ThreatIntelIndicatorCategoryMapper
      {

        static const int BACKDOOR_HASH = HashingUtils::HashString("BACKDOOR");
        static const int CARD_STEALER_HASH = HashingUtils::HashString("CARD_STEALER");
        static const int COMMAND_AND_CONTROL_HASH = HashingUtils::HashString("COMMAND_AND_CONTROL");
        static const int DROP_SITE_HASH = HashingUtils::HashString("DROP_SITE");
        static const int EXPLOIT_SITE_HASH = HashingUtils::HashString("EXPLOIT_SITE");
        static const int KEYLOGGER_HASH = HashingUtils::HashString("KEYLOGGER");


        ThreatIntelIndicatorCategory GetThreatIntelIndicatorCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKDOOR_HASH)
          {
            return ThreatIntelIndicatorCategory::BACKDOOR;
          }
          else if (hashCode == CARD_STEALER_HASH)
          {
            return ThreatIntelIndicatorCategory::CARD_STEALER;
          }
          else if (hashCode == COMMAND_AND_CONTROL_HASH)
          {
            return ThreatIntelIndicatorCategory::COMMAND_AND_CONTROL;
          }
          else if (hashCode == DROP_SITE_HASH)
          {
            return ThreatIntelIndicatorCategory::DROP_SITE;
          }
          else if (hashCode == EXPLOIT_SITE_HASH)
          {
            return ThreatIntelIndicatorCategory::EXPLOIT_SITE;
          }
          else if (hashCode == KEYLOGGER_HASH)
          {
            return ThreatIntelIndicatorCategory::KEYLOGGER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThreatIntelIndicatorCategory>(hashCode);
          }

          return ThreatIntelIndicatorCategory::NOT_SET;
        }

        Aws::String GetNameForThreatIntelIndicatorCategory(ThreatIntelIndicatorCategory enumValue)
        {
          switch(enumValue)
          {
          case ThreatIntelIndicatorCategory::BACKDOOR:
            return "BACKDOOR";
          case ThreatIntelIndicatorCategory::CARD_STEALER:
            return "CARD_STEALER";
          case ThreatIntelIndicatorCategory::COMMAND_AND_CONTROL:
            return "COMMAND_AND_CONTROL";
          case ThreatIntelIndicatorCategory::DROP_SITE:
            return "DROP_SITE";
          case ThreatIntelIndicatorCategory::EXPLOIT_SITE:
            return "EXPLOIT_SITE";
          case ThreatIntelIndicatorCategory::KEYLOGGER:
            return "KEYLOGGER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThreatIntelIndicatorCategoryMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
