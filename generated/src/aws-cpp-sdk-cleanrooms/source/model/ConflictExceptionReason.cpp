/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConflictExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ConflictExceptionReasonMapper
      {

        static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("ALREADY_EXISTS");
        static const int SUBRESOURCES_EXIST_HASH = HashingUtils::HashString("SUBRESOURCES_EXIST");
        static const int INVALID_STATE_HASH = HashingUtils::HashString("INVALID_STATE");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALREADY_EXISTS_HASH)
          {
            return ConflictExceptionReason::ALREADY_EXISTS;
          }
          else if (hashCode == SUBRESOURCES_EXIST_HASH)
          {
            return ConflictExceptionReason::SUBRESOURCES_EXIST;
          }
          else if (hashCode == INVALID_STATE_HASH)
          {
            return ConflictExceptionReason::INVALID_STATE;
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
          case ConflictExceptionReason::ALREADY_EXISTS:
            return "ALREADY_EXISTS";
          case ConflictExceptionReason::SUBRESOURCES_EXIST:
            return "SUBRESOURCES_EXIST";
          case ConflictExceptionReason::INVALID_STATE:
            return "INVALID_STATE";
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
  } // namespace CleanRooms
} // namespace Aws
