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

#include <aws/service-quotas/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceQuotas
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int DEPENDENCY_ACCESS_DENIED_ERROR_HASH = HashingUtils::HashString("DEPENDENCY_ACCESS_DENIED_ERROR");
        static const int DEPENDENCY_THROTTLING_ERROR_HASH = HashingUtils::HashString("DEPENDENCY_THROTTLING_ERROR");
        static const int DEPENDENCY_SERVICE_ERROR_HASH = HashingUtils::HashString("DEPENDENCY_SERVICE_ERROR");
        static const int SERVICE_QUOTA_NOT_AVAILABLE_ERROR_HASH = HashingUtils::HashString("SERVICE_QUOTA_NOT_AVAILABLE_ERROR");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPENDENCY_ACCESS_DENIED_ERROR_HASH)
          {
            return ErrorCode::DEPENDENCY_ACCESS_DENIED_ERROR;
          }
          else if (hashCode == DEPENDENCY_THROTTLING_ERROR_HASH)
          {
            return ErrorCode::DEPENDENCY_THROTTLING_ERROR;
          }
          else if (hashCode == DEPENDENCY_SERVICE_ERROR_HASH)
          {
            return ErrorCode::DEPENDENCY_SERVICE_ERROR;
          }
          else if (hashCode == SERVICE_QUOTA_NOT_AVAILABLE_ERROR_HASH)
          {
            return ErrorCode::SERVICE_QUOTA_NOT_AVAILABLE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::DEPENDENCY_ACCESS_DENIED_ERROR:
            return "DEPENDENCY_ACCESS_DENIED_ERROR";
          case ErrorCode::DEPENDENCY_THROTTLING_ERROR:
            return "DEPENDENCY_THROTTLING_ERROR";
          case ErrorCode::DEPENDENCY_SERVICE_ERROR:
            return "DEPENDENCY_SERVICE_ERROR";
          case ErrorCode::SERVICE_QUOTA_NOT_AVAILABLE_ERROR:
            return "SERVICE_QUOTA_NOT_AVAILABLE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace ServiceQuotas
} // namespace Aws
