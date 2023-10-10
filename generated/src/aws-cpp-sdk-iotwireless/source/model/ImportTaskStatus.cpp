/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ImportTaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace ImportTaskStatusMapper
      {

        static const int INITIALIZING_HASH = HashingUtils::HashString("INITIALIZING");
        static const int INITIALIZED_HASH = HashingUtils::HashString("INITIALIZED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ImportTaskStatus GetImportTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZING_HASH)
          {
            return ImportTaskStatus::INITIALIZING;
          }
          else if (hashCode == INITIALIZED_HASH)
          {
            return ImportTaskStatus::INITIALIZED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ImportTaskStatus::PENDING;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ImportTaskStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportTaskStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImportTaskStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportTaskStatus>(hashCode);
          }

          return ImportTaskStatus::NOT_SET;
        }

        Aws::String GetNameForImportTaskStatus(ImportTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportTaskStatus::NOT_SET:
            return {};
          case ImportTaskStatus::INITIALIZING:
            return "INITIALIZING";
          case ImportTaskStatus::INITIALIZED:
            return "INITIALIZED";
          case ImportTaskStatus::PENDING:
            return "PENDING";
          case ImportTaskStatus::COMPLETE:
            return "COMPLETE";
          case ImportTaskStatus::FAILED:
            return "FAILED";
          case ImportTaskStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportTaskStatusMapper
    } // namespace Model
  } // namespace IoTWireless
} // namespace Aws
