/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Status.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace StatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");


        Status GetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return Status::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return Status::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return Status::Failed;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return Status::Cancelled;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return Status::Cancelling;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Status>(hashCode);
          }

          return Status::NOT_SET;
        }

        Aws::String GetNameForStatus(Status enumValue)
        {
          switch(enumValue)
          {
          case Status::InProgress:
            return "InProgress";
          case Status::Completed:
            return "Completed";
          case Status::Failed:
            return "Failed";
          case Status::Cancelled:
            return "Cancelled";
          case Status::Cancelling:
            return "Cancelling";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
