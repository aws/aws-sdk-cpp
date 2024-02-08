/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisRuleStatus.h>
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
      namespace CisRuleStatusMapper
      {

        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PASSED_HASH = HashingUtils::HashString("PASSED");
        static const int NOT_EVALUATED_HASH = HashingUtils::HashString("NOT_EVALUATED");
        static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");
        static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        CisRuleStatus GetCisRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return CisRuleStatus::FAILED;
          }
          else if (hashCode == PASSED_HASH)
          {
            return CisRuleStatus::PASSED;
          }
          else if (hashCode == NOT_EVALUATED_HASH)
          {
            return CisRuleStatus::NOT_EVALUATED;
          }
          else if (hashCode == INFORMATIONAL_HASH)
          {
            return CisRuleStatus::INFORMATIONAL;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return CisRuleStatus::UNKNOWN;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return CisRuleStatus::NOT_APPLICABLE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CisRuleStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CisRuleStatus>(hashCode);
          }

          return CisRuleStatus::NOT_SET;
        }

        Aws::String GetNameForCisRuleStatus(CisRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case CisRuleStatus::NOT_SET:
            return {};
          case CisRuleStatus::FAILED:
            return "FAILED";
          case CisRuleStatus::PASSED:
            return "PASSED";
          case CisRuleStatus::NOT_EVALUATED:
            return "NOT_EVALUATED";
          case CisRuleStatus::INFORMATIONAL:
            return "INFORMATIONAL";
          case CisRuleStatus::UNKNOWN:
            return "UNKNOWN";
          case CisRuleStatus::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          case CisRuleStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CisRuleStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
