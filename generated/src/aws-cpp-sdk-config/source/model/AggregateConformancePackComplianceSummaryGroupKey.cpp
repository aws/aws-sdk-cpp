/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateConformancePackComplianceSummaryGroupKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace AggregateConformancePackComplianceSummaryGroupKeyMapper
      {

        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int AWS_REGION_HASH = HashingUtils::HashString("AWS_REGION");


        AggregateConformancePackComplianceSummaryGroupKey GetAggregateConformancePackComplianceSummaryGroupKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_ID_HASH)
          {
            return AggregateConformancePackComplianceSummaryGroupKey::ACCOUNT_ID;
          }
          else if (hashCode == AWS_REGION_HASH)
          {
            return AggregateConformancePackComplianceSummaryGroupKey::AWS_REGION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregateConformancePackComplianceSummaryGroupKey>(hashCode);
          }

          return AggregateConformancePackComplianceSummaryGroupKey::NOT_SET;
        }

        Aws::String GetNameForAggregateConformancePackComplianceSummaryGroupKey(AggregateConformancePackComplianceSummaryGroupKey enumValue)
        {
          switch(enumValue)
          {
          case AggregateConformancePackComplianceSummaryGroupKey::NOT_SET:
            return {};
          case AggregateConformancePackComplianceSummaryGroupKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case AggregateConformancePackComplianceSummaryGroupKey::AWS_REGION:
            return "AWS_REGION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregateConformancePackComplianceSummaryGroupKeyMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
