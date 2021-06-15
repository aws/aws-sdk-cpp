/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ChangesetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ChangesetStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");


        ChangesetStatus GetChangesetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ChangesetStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ChangesetStatus::FAILED;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return ChangesetStatus::SUCCESS;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return ChangesetStatus::RUNNING;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return ChangesetStatus::STOP_REQUESTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangesetStatus>(hashCode);
          }

          return ChangesetStatus::NOT_SET;
        }

        Aws::String GetNameForChangesetStatus(ChangesetStatus enumValue)
        {
          switch(enumValue)
          {
          case ChangesetStatus::PENDING:
            return "PENDING";
          case ChangesetStatus::FAILED:
            return "FAILED";
          case ChangesetStatus::SUCCESS:
            return "SUCCESS";
          case ChangesetStatus::RUNNING:
            return "RUNNING";
          case ChangesetStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangesetStatusMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
