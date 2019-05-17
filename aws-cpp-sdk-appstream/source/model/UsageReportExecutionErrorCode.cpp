/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/appstream/model/UsageReportExecutionErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace UsageReportExecutionErrorCodeMapper
      {

        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int INTERNAL_SERVICE_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVICE_ERROR");


        UsageReportExecutionErrorCode GetUsageReportExecutionErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return UsageReportExecutionErrorCode::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return UsageReportExecutionErrorCode::ACCESS_DENIED;
          }
          else if (hashCode == INTERNAL_SERVICE_ERROR_HASH)
          {
            return UsageReportExecutionErrorCode::INTERNAL_SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageReportExecutionErrorCode>(hashCode);
          }

          return UsageReportExecutionErrorCode::NOT_SET;
        }

        Aws::String GetNameForUsageReportExecutionErrorCode(UsageReportExecutionErrorCode enumValue)
        {
          switch(enumValue)
          {
          case UsageReportExecutionErrorCode::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case UsageReportExecutionErrorCode::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case UsageReportExecutionErrorCode::INTERNAL_SERVICE_ERROR:
            return "INTERNAL_SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageReportExecutionErrorCodeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
