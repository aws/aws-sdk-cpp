/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryStatus.h>
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
      namespace ProtectedQueryStatusMapper
      {

        static constexpr uint32_t SUBMITTED_HASH = ConstExprHashingUtils::HashString("SUBMITTED");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t TIMED_OUT_HASH = ConstExprHashingUtils::HashString("TIMED_OUT");


        ProtectedQueryStatus GetProtectedQueryStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ProtectedQueryStatus::SUBMITTED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ProtectedQueryStatus::STARTED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ProtectedQueryStatus::CANCELLED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ProtectedQueryStatus::CANCELLING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProtectedQueryStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ProtectedQueryStatus::SUCCESS;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return ProtectedQueryStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedQueryStatus>(hashCode);
          }

          return ProtectedQueryStatus::NOT_SET;
        }

        Aws::String GetNameForProtectedQueryStatus(ProtectedQueryStatus enumValue)
        {
          switch(enumValue)
          {
          case ProtectedQueryStatus::NOT_SET:
            return {};
          case ProtectedQueryStatus::SUBMITTED:
            return "SUBMITTED";
          case ProtectedQueryStatus::STARTED:
            return "STARTED";
          case ProtectedQueryStatus::CANCELLED:
            return "CANCELLED";
          case ProtectedQueryStatus::CANCELLING:
            return "CANCELLING";
          case ProtectedQueryStatus::FAILED:
            return "FAILED";
          case ProtectedQueryStatus::SUCCESS:
            return "SUCCESS";
          case ProtectedQueryStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectedQueryStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
