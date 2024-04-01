/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ConflictExceptionReason.h>
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
      namespace ConflictExceptionReasonMapper
      {

        static const int CONFLICT_EXCEPTION_HASH = HashingUtils::HashString("CONFLICT_EXCEPTION");
        static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("CONCURRENT_MODIFICATION");
        static const int RESOURCE_ALREADY_EXISTS_HASH = HashingUtils::HashString("RESOURCE_ALREADY_EXISTS");
        static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("RESOURCE_IN_USE");
        static const int STATUS_CONFLICT_HASH = HashingUtils::HashString("STATUS_CONFLICT");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFLICT_EXCEPTION_HASH)
          {
            return ConflictExceptionReason::CONFLICT_EXCEPTION;
          }
          else if (hashCode == CONCURRENT_MODIFICATION_HASH)
          {
            return ConflictExceptionReason::CONCURRENT_MODIFICATION;
          }
          else if (hashCode == RESOURCE_ALREADY_EXISTS_HASH)
          {
            return ConflictExceptionReason::RESOURCE_ALREADY_EXISTS;
          }
          else if (hashCode == RESOURCE_IN_USE_HASH)
          {
            return ConflictExceptionReason::RESOURCE_IN_USE;
          }
          else if (hashCode == STATUS_CONFLICT_HASH)
          {
            return ConflictExceptionReason::STATUS_CONFLICT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictExceptionReason>(hashCode);
          }

          return ConflictExceptionReason::NOT_SET;
        }

        Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ConflictExceptionReason::NOT_SET:
            return {};
          case ConflictExceptionReason::CONFLICT_EXCEPTION:
            return "CONFLICT_EXCEPTION";
          case ConflictExceptionReason::CONCURRENT_MODIFICATION:
            return "CONCURRENT_MODIFICATION";
          case ConflictExceptionReason::RESOURCE_ALREADY_EXISTS:
            return "RESOURCE_ALREADY_EXISTS";
          case ConflictExceptionReason::RESOURCE_IN_USE:
            return "RESOURCE_IN_USE";
          case ConflictExceptionReason::STATUS_CONFLICT:
            return "STATUS_CONFLICT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictExceptionReasonMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
