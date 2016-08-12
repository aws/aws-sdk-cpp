/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/ThrottleReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lambda
  {
    namespace Model
    {
      namespace ThrottleReasonMapper
      {

        static const int ConcurrentInvocationLimitExceeded_HASH = HashingUtils::HashString("ConcurrentInvocationLimitExceeded");
        static const int FunctionInvocationRateLimitExceeded_HASH = HashingUtils::HashString("FunctionInvocationRateLimitExceeded");
        static const int CallerRateLimitExceeded_HASH = HashingUtils::HashString("CallerRateLimitExceeded");


        ThrottleReason GetThrottleReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ConcurrentInvocationLimitExceeded_HASH)
          {
            return ThrottleReason::ConcurrentInvocationLimitExceeded;
          }
          else if (hashCode == FunctionInvocationRateLimitExceeded_HASH)
          {
            return ThrottleReason::FunctionInvocationRateLimitExceeded;
          }
          else if (hashCode == CallerRateLimitExceeded_HASH)
          {
            return ThrottleReason::CallerRateLimitExceeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThrottleReason>(hashCode);
          }

          return ThrottleReason::NOT_SET;
        }

        Aws::String GetNameForThrottleReason(ThrottleReason enumValue)
        {
          switch(enumValue)
          {
          case ThrottleReason::ConcurrentInvocationLimitExceeded:
            return "ConcurrentInvocationLimitExceeded";
          case ThrottleReason::FunctionInvocationRateLimitExceeded:
            return "FunctionInvocationRateLimitExceeded";
          case ThrottleReason::CallerRateLimitExceeded:
            return "CallerRateLimitExceeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ThrottleReasonMapper
    } // namespace Model
  } // namespace Lambda
} // namespace Aws
