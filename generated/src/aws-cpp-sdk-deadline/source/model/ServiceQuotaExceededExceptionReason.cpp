/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ServiceQuotaExceededExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace ServiceQuotaExceededExceptionReasonMapper
      {

        static const int SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED_EXCEPTION");
        static const int KMS_KEY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("KMS_KEY_LIMIT_EXCEEDED");
        static const int DEPENDENCY_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("DEPENDENCY_LIMIT_EXCEEDED");


        ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SERVICE_QUOTA_EXCEEDED_EXCEPTION_HASH)
          {
            return ServiceQuotaExceededExceptionReason::SERVICE_QUOTA_EXCEEDED_EXCEPTION;
          }
          else if (hashCode == KMS_KEY_LIMIT_EXCEEDED_HASH)
          {
            return ServiceQuotaExceededExceptionReason::KMS_KEY_LIMIT_EXCEEDED;
          }
          else if (hashCode == DEPENDENCY_LIMIT_EXCEEDED_HASH)
          {
            return ServiceQuotaExceededExceptionReason::DEPENDENCY_LIMIT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceQuotaExceededExceptionReason>(hashCode);
          }

          return ServiceQuotaExceededExceptionReason::NOT_SET;
        }

        Aws::String GetNameForServiceQuotaExceededExceptionReason(ServiceQuotaExceededExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ServiceQuotaExceededExceptionReason::NOT_SET:
            return {};
          case ServiceQuotaExceededExceptionReason::SERVICE_QUOTA_EXCEEDED_EXCEPTION:
            return "SERVICE_QUOTA_EXCEEDED_EXCEPTION";
          case ServiceQuotaExceededExceptionReason::KMS_KEY_LIMIT_EXCEEDED:
            return "KMS_KEY_LIMIT_EXCEEDED";
          case ServiceQuotaExceededExceptionReason::DEPENDENCY_LIMIT_EXCEEDED:
            return "DEPENDENCY_LIMIT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceQuotaExceededExceptionReasonMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
