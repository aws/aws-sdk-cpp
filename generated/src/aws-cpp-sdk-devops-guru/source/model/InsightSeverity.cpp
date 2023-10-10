/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace InsightSeverityMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        InsightSeverity GetInsightSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return InsightSeverity::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return InsightSeverity::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return InsightSeverity::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightSeverity>(hashCode);
          }

          return InsightSeverity::NOT_SET;
        }

        Aws::String GetNameForInsightSeverity(InsightSeverity enumValue)
        {
          switch(enumValue)
          {
          case InsightSeverity::NOT_SET:
            return {};
          case InsightSeverity::LOW:
            return "LOW";
          case InsightSeverity::MEDIUM:
            return "MEDIUM";
          case InsightSeverity::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightSeverityMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
