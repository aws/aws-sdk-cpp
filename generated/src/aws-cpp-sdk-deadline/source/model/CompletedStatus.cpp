/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CompletedStatus.h>
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
      namespace CompletedStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int INTERRUPTED_HASH = HashingUtils::HashString("INTERRUPTED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int NEVER_ATTEMPTED_HASH = HashingUtils::HashString("NEVER_ATTEMPTED");


        CompletedStatus GetCompletedStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return CompletedStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CompletedStatus::FAILED;
          }
          else if (hashCode == INTERRUPTED_HASH)
          {
            return CompletedStatus::INTERRUPTED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return CompletedStatus::CANCELED;
          }
          else if (hashCode == NEVER_ATTEMPTED_HASH)
          {
            return CompletedStatus::NEVER_ATTEMPTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompletedStatus>(hashCode);
          }

          return CompletedStatus::NOT_SET;
        }

        Aws::String GetNameForCompletedStatus(CompletedStatus enumValue)
        {
          switch(enumValue)
          {
          case CompletedStatus::NOT_SET:
            return {};
          case CompletedStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CompletedStatus::FAILED:
            return "FAILED";
          case CompletedStatus::INTERRUPTED:
            return "INTERRUPTED";
          case CompletedStatus::CANCELED:
            return "CANCELED";
          case CompletedStatus::NEVER_ATTEMPTED:
            return "NEVER_ATTEMPTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompletedStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
