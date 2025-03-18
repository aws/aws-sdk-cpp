/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobStatus.h>
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
      namespace ProtectedJobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");


        ProtectedJobStatus GetProtectedJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return ProtectedJobStatus::SUBMITTED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return ProtectedJobStatus::STARTED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ProtectedJobStatus::CANCELLED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return ProtectedJobStatus::CANCELLING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ProtectedJobStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ProtectedJobStatus::SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProtectedJobStatus>(hashCode);
          }

          return ProtectedJobStatus::NOT_SET;
        }

        Aws::String GetNameForProtectedJobStatus(ProtectedJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ProtectedJobStatus::NOT_SET:
            return {};
          case ProtectedJobStatus::SUBMITTED:
            return "SUBMITTED";
          case ProtectedJobStatus::STARTED:
            return "STARTED";
          case ProtectedJobStatus::CANCELLED:
            return "CANCELLED";
          case ProtectedJobStatus::CANCELLING:
            return "CANCELLING";
          case ProtectedJobStatus::FAILED:
            return "FAILED";
          case ProtectedJobStatus::SUCCESS:
            return "SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtectedJobStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
