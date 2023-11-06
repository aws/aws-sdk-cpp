/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FailureReasonCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace FailureReasonCodeMapper
      {

        static const int INVALID_ATTRIBUTE_KEY_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_KEY");
        static const int INVALID_CUSTOMER_ENDPOINT_HASH = HashingUtils::HashString("INVALID_CUSTOMER_ENDPOINT");
        static const int INVALID_SYSTEM_ENDPOINT_HASH = HashingUtils::HashString("INVALID_SYSTEM_ENDPOINT");
        static const int INVALID_QUEUE_HASH = HashingUtils::HashString("INVALID_QUEUE");
        static const int MISSING_CAMPAIGN_HASH = HashingUtils::HashString("MISSING_CAMPAIGN");
        static const int MISSING_CUSTOMER_ENDPOINT_HASH = HashingUtils::HashString("MISSING_CUSTOMER_ENDPOINT");
        static const int MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT_HASH = HashingUtils::HashString("MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT");
        static const int REQUEST_THROTTLED_HASH = HashingUtils::HashString("REQUEST_THROTTLED");
        static const int IDEMPOTENCY_EXCEPTION_HASH = HashingUtils::HashString("IDEMPOTENCY_EXCEPTION");
        static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");


        FailureReasonCode GetFailureReasonCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_ATTRIBUTE_KEY_HASH)
          {
            return FailureReasonCode::INVALID_ATTRIBUTE_KEY;
          }
          else if (hashCode == INVALID_CUSTOMER_ENDPOINT_HASH)
          {
            return FailureReasonCode::INVALID_CUSTOMER_ENDPOINT;
          }
          else if (hashCode == INVALID_SYSTEM_ENDPOINT_HASH)
          {
            return FailureReasonCode::INVALID_SYSTEM_ENDPOINT;
          }
          else if (hashCode == INVALID_QUEUE_HASH)
          {
            return FailureReasonCode::INVALID_QUEUE;
          }
          else if (hashCode == MISSING_CAMPAIGN_HASH)
          {
            return FailureReasonCode::MISSING_CAMPAIGN;
          }
          else if (hashCode == MISSING_CUSTOMER_ENDPOINT_HASH)
          {
            return FailureReasonCode::MISSING_CUSTOMER_ENDPOINT;
          }
          else if (hashCode == MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT_HASH)
          {
            return FailureReasonCode::MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT;
          }
          else if (hashCode == REQUEST_THROTTLED_HASH)
          {
            return FailureReasonCode::REQUEST_THROTTLED;
          }
          else if (hashCode == IDEMPOTENCY_EXCEPTION_HASH)
          {
            return FailureReasonCode::IDEMPOTENCY_EXCEPTION;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return FailureReasonCode::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureReasonCode>(hashCode);
          }

          return FailureReasonCode::NOT_SET;
        }

        Aws::String GetNameForFailureReasonCode(FailureReasonCode enumValue)
        {
          switch(enumValue)
          {
          case FailureReasonCode::NOT_SET:
            return {};
          case FailureReasonCode::INVALID_ATTRIBUTE_KEY:
            return "INVALID_ATTRIBUTE_KEY";
          case FailureReasonCode::INVALID_CUSTOMER_ENDPOINT:
            return "INVALID_CUSTOMER_ENDPOINT";
          case FailureReasonCode::INVALID_SYSTEM_ENDPOINT:
            return "INVALID_SYSTEM_ENDPOINT";
          case FailureReasonCode::INVALID_QUEUE:
            return "INVALID_QUEUE";
          case FailureReasonCode::MISSING_CAMPAIGN:
            return "MISSING_CAMPAIGN";
          case FailureReasonCode::MISSING_CUSTOMER_ENDPOINT:
            return "MISSING_CUSTOMER_ENDPOINT";
          case FailureReasonCode::MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT:
            return "MISSING_QUEUE_ID_AND_SYSTEM_ENDPOINT";
          case FailureReasonCode::REQUEST_THROTTLED:
            return "REQUEST_THROTTLED";
          case FailureReasonCode::IDEMPOTENCY_EXCEPTION:
            return "IDEMPOTENCY_EXCEPTION";
          case FailureReasonCode::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureReasonCodeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
