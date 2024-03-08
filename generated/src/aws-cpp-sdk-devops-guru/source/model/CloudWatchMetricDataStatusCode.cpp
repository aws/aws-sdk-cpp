/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CloudWatchMetricDataStatusCode.h>
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
      namespace CloudWatchMetricDataStatusCodeMapper
      {

        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int InternalError_HASH = HashingUtils::HashString("InternalError");
        static const int PartialData_HASH = HashingUtils::HashString("PartialData");


        CloudWatchMetricDataStatusCode GetCloudWatchMetricDataStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Complete_HASH)
          {
            return CloudWatchMetricDataStatusCode::Complete;
          }
          else if (hashCode == InternalError_HASH)
          {
            return CloudWatchMetricDataStatusCode::InternalError;
          }
          else if (hashCode == PartialData_HASH)
          {
            return CloudWatchMetricDataStatusCode::PartialData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudWatchMetricDataStatusCode>(hashCode);
          }

          return CloudWatchMetricDataStatusCode::NOT_SET;
        }

        Aws::String GetNameForCloudWatchMetricDataStatusCode(CloudWatchMetricDataStatusCode enumValue)
        {
          switch(enumValue)
          {
          case CloudWatchMetricDataStatusCode::NOT_SET:
            return {};
          case CloudWatchMetricDataStatusCode::Complete:
            return "Complete";
          case CloudWatchMetricDataStatusCode::InternalError:
            return "InternalError";
          case CloudWatchMetricDataStatusCode::PartialData:
            return "PartialData";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudWatchMetricDataStatusCodeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
