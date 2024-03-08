/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/JobErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace JobErrorCodeMapper
      {

        static const int AUTHORIZATION_ERROR_HASH = HashingUtils::HashString("AUTHORIZATION_ERROR");
        static const int RESOURCE_NOT_FOUND_ERROR_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND_ERROR");
        static const int SERVICE_QUOTA_EXCEEDED_ERROR_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_ERROR");
        static const int SERVICE_ERROR_HASH = HashingUtils::HashString("SERVICE_ERROR");


        JobErrorCode GetJobErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTHORIZATION_ERROR_HASH)
          {
            return JobErrorCode::AUTHORIZATION_ERROR;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_ERROR_HASH)
          {
            return JobErrorCode::RESOURCE_NOT_FOUND_ERROR;
          }
          else if (hashCode == SERVICE_QUOTA_EXCEEDED_ERROR_HASH)
          {
            return JobErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR;
          }
          else if (hashCode == SERVICE_ERROR_HASH)
          {
            return JobErrorCode::SERVICE_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobErrorCode>(hashCode);
          }

          return JobErrorCode::NOT_SET;
        }

        Aws::String GetNameForJobErrorCode(JobErrorCode enumValue)
        {
          switch(enumValue)
          {
          case JobErrorCode::NOT_SET:
            return {};
          case JobErrorCode::AUTHORIZATION_ERROR:
            return "AUTHORIZATION_ERROR";
          case JobErrorCode::RESOURCE_NOT_FOUND_ERROR:
            return "RESOURCE_NOT_FOUND_ERROR";
          case JobErrorCode::SERVICE_QUOTA_EXCEEDED_ERROR:
            return "SERVICE_QUOTA_EXCEEDED_ERROR";
          case JobErrorCode::SERVICE_ERROR:
            return "SERVICE_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobErrorCodeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
