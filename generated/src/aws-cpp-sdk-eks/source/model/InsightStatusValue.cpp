/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightStatusValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace InsightStatusValueMapper
      {

        static const int PASSING_HASH = HashingUtils::HashString("PASSING");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        InsightStatusValue GetInsightStatusValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PASSING_HASH)
          {
            return InsightStatusValue::PASSING;
          }
          else if (hashCode == WARNING_HASH)
          {
            return InsightStatusValue::WARNING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return InsightStatusValue::ERROR_;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return InsightStatusValue::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightStatusValue>(hashCode);
          }

          return InsightStatusValue::NOT_SET;
        }

        Aws::String GetNameForInsightStatusValue(InsightStatusValue enumValue)
        {
          switch(enumValue)
          {
          case InsightStatusValue::NOT_SET:
            return {};
          case InsightStatusValue::PASSING:
            return "PASSING";
          case InsightStatusValue::WARNING:
            return "WARNING";
          case InsightStatusValue::ERROR_:
            return "ERROR";
          case InsightStatusValue::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightStatusValueMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
