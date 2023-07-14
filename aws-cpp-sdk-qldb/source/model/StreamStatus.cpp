/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/StreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QLDB
  {
    namespace Model
    {
      namespace StreamStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IMPAIRED_HASH = HashingUtils::HashString("IMPAIRED");


        StreamStatus GetStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return StreamStatus::ACTIVE;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return StreamStatus::COMPLETED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return StreamStatus::CANCELED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StreamStatus::FAILED;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return StreamStatus::IMPAIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StreamStatus>(hashCode);
          }

          return StreamStatus::NOT_SET;
        }

        Aws::String GetNameForStreamStatus(StreamStatus enumValue)
        {
          switch(enumValue)
          {
          case StreamStatus::ACTIVE:
            return "ACTIVE";
          case StreamStatus::COMPLETED:
            return "COMPLETED";
          case StreamStatus::CANCELED:
            return "CANCELED";
          case StreamStatus::FAILED:
            return "FAILED";
          case StreamStatus::IMPAIRED:
            return "IMPAIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StreamStatusMapper
    } // namespace Model
  } // namespace QLDB
} // namespace Aws
