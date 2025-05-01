/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RecordingStatus.h>
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
      namespace RecordingStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        RecordingStatus GetRecordingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return RecordingStatus::AVAILABLE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return RecordingStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecordingStatus>(hashCode);
          }

          return RecordingStatus::NOT_SET;
        }

        Aws::String GetNameForRecordingStatus(RecordingStatus enumValue)
        {
          switch(enumValue)
          {
          case RecordingStatus::NOT_SET:
            return {};
          case RecordingStatus::AVAILABLE:
            return "AVAILABLE";
          case RecordingStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecordingStatusMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
