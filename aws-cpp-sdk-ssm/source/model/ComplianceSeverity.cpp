/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ComplianceSeverity.h>
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
      namespace ComplianceSeverityMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int INFORMATIONAL_HASH = HashingUtils::HashString("INFORMATIONAL");
        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");


        ComplianceSeverity GetComplianceSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return ComplianceSeverity::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return ComplianceSeverity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ComplianceSeverity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return ComplianceSeverity::LOW;
          }
          else if (hashCode == INFORMATIONAL_HASH)
          {
            return ComplianceSeverity::INFORMATIONAL;
          }
          else if (hashCode == UNSPECIFIED_HASH)
          {
            return ComplianceSeverity::UNSPECIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComplianceSeverity>(hashCode);
          }

          return ComplianceSeverity::NOT_SET;
        }

        Aws::String GetNameForComplianceSeverity(ComplianceSeverity enumValue)
        {
          switch(enumValue)
          {
          case ComplianceSeverity::CRITICAL:
            return "CRITICAL";
          case ComplianceSeverity::HIGH:
            return "HIGH";
          case ComplianceSeverity::MEDIUM:
            return "MEDIUM";
          case ComplianceSeverity::LOW:
            return "LOW";
          case ComplianceSeverity::INFORMATIONAL:
            return "INFORMATIONAL";
          case ComplianceSeverity::UNSPECIFIED:
            return "UNSPECIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComplianceSeverityMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
