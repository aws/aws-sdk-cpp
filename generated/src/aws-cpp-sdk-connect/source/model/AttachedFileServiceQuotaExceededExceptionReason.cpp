/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttachedFileServiceQuotaExceededExceptionReason.h>
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
      namespace AttachedFileServiceQuotaExceededExceptionReasonMapper
      {

        static const int TOTAL_FILE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("TOTAL_FILE_SIZE_EXCEEDED");
        static const int TOTAL_FILE_COUNT_EXCEEDED_HASH = HashingUtils::HashString("TOTAL_FILE_COUNT_EXCEEDED");


        AttachedFileServiceQuotaExceededExceptionReason GetAttachedFileServiceQuotaExceededExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOTAL_FILE_SIZE_EXCEEDED_HASH)
          {
            return AttachedFileServiceQuotaExceededExceptionReason::TOTAL_FILE_SIZE_EXCEEDED;
          }
          else if (hashCode == TOTAL_FILE_COUNT_EXCEEDED_HASH)
          {
            return AttachedFileServiceQuotaExceededExceptionReason::TOTAL_FILE_COUNT_EXCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachedFileServiceQuotaExceededExceptionReason>(hashCode);
          }

          return AttachedFileServiceQuotaExceededExceptionReason::NOT_SET;
        }

        Aws::String GetNameForAttachedFileServiceQuotaExceededExceptionReason(AttachedFileServiceQuotaExceededExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case AttachedFileServiceQuotaExceededExceptionReason::NOT_SET:
            return {};
          case AttachedFileServiceQuotaExceededExceptionReason::TOTAL_FILE_SIZE_EXCEEDED:
            return "TOTAL_FILE_SIZE_EXCEEDED";
          case AttachedFileServiceQuotaExceededExceptionReason::TOTAL_FILE_COUNT_EXCEEDED:
            return "TOTAL_FILE_COUNT_EXCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachedFileServiceQuotaExceededExceptionReasonMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
