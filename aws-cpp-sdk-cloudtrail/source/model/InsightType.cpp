/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/InsightType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace InsightTypeMapper
      {

        static const int ApiCallRateInsight_HASH = HashingUtils::HashString("ApiCallRateInsight");


        InsightType GetInsightTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ApiCallRateInsight_HASH)
          {
            return InsightType::ApiCallRateInsight;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightType>(hashCode);
          }

          return InsightType::NOT_SET;
        }

        Aws::String GetNameForInsightType(InsightType enumValue)
        {
          switch(enumValue)
          {
          case InsightType::ApiCallRateInsight:
            return "ApiCallRateInsight";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightTypeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
