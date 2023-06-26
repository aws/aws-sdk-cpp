/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/ConflictExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IdentityStore
  {
    namespace Model
    {
      namespace ConflictExceptionReasonMapper
      {

        static const int UNIQUENESS_CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("UNIQUENESS_CONSTRAINT_VIOLATION");
        static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("CONCURRENT_MODIFICATION");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNIQUENESS_CONSTRAINT_VIOLATION_HASH)
          {
            return ConflictExceptionReason::UNIQUENESS_CONSTRAINT_VIOLATION;
          }
          else if (hashCode == CONCURRENT_MODIFICATION_HASH)
          {
            return ConflictExceptionReason::CONCURRENT_MODIFICATION;
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
          case ConflictExceptionReason::UNIQUENESS_CONSTRAINT_VIOLATION:
            return "UNIQUENESS_CONSTRAINT_VIOLATION";
          case ConflictExceptionReason::CONCURRENT_MODIFICATION:
            return "CONCURRENT_MODIFICATION";
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
  } // namespace IdentityStore
} // namespace Aws
