/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ServiceQuotaExceededExceptionReason.h>
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
      namespace ServiceQuotaExceededExceptionReasonMapper
      {

        static const int DEPENDENCY_SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("DEPENDENCY_SERVICE_QUOTA_EXCEEDED");


        ServiceQuotaExceededExceptionReason GetServiceQuotaExceededExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEPENDENCY_SERVICE_QUOTA_EXCEEDED_HASH)
          {
            return ServiceQuotaExceededExceptionReason::DEPENDENCY_SERVICE_QUOTA_EXCEEDED;
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
          case ServiceQuotaExceededExceptionReason::DEPENDENCY_SERVICE_QUOTA_EXCEEDED:
            return "DEPENDENCY_SERVICE_QUOTA_EXCEEDED";
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
  } // namespace EBS
} // namespace Aws
