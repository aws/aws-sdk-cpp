/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/RequestThrottledExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EBS
  {
    namespace Model
    {
      namespace RequestThrottledExceptionReasonMapper
      {

        static const int ACCOUNT_THROTTLED_HASH = HashingUtils::HashString("ACCOUNT_THROTTLED");
        static const int DEPENDENCY_REQUEST_THROTTLED_HASH = HashingUtils::HashString("DEPENDENCY_REQUEST_THROTTLED");
        static const int RESOURCE_LEVEL_THROTTLE_HASH = HashingUtils::HashString("RESOURCE_LEVEL_THROTTLE");


        RequestThrottledExceptionReason GetRequestThrottledExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_THROTTLED_HASH)
          {
            return RequestThrottledExceptionReason::ACCOUNT_THROTTLED;
          }
          else if (hashCode == DEPENDENCY_REQUEST_THROTTLED_HASH)
          {
            return RequestThrottledExceptionReason::DEPENDENCY_REQUEST_THROTTLED;
          }
          else if (hashCode == RESOURCE_LEVEL_THROTTLE_HASH)
          {
            return RequestThrottledExceptionReason::RESOURCE_LEVEL_THROTTLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RequestThrottledExceptionReason>(hashCode);
          }

          return RequestThrottledExceptionReason::NOT_SET;
        }

        Aws::String GetNameForRequestThrottledExceptionReason(RequestThrottledExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case RequestThrottledExceptionReason::NOT_SET:
            return {};
          case RequestThrottledExceptionReason::ACCOUNT_THROTTLED:
            return "ACCOUNT_THROTTLED";
          case RequestThrottledExceptionReason::DEPENDENCY_REQUEST_THROTTLED:
            return "DEPENDENCY_REQUEST_THROTTLED";
          case RequestThrottledExceptionReason::RESOURCE_LEVEL_THROTTLE:
            return "RESOURCE_LEVEL_THROTTLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RequestThrottledExceptionReasonMapper
    } // namespace Model
  } // namespace EBS
} // namespace Aws
