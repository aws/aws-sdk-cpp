/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ImportJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace ImportJobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        ImportJobStatus GetImportJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return ImportJobStatus::CREATED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ImportJobStatus::PROCESSING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ImportJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ImportJobStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ImportJobStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportJobStatus>(hashCode);
          }

          return ImportJobStatus::NOT_SET;
        }

        Aws::String GetNameForImportJobStatus(ImportJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportJobStatus::NOT_SET:
            return {};
          case ImportJobStatus::CREATED:
            return "CREATED";
          case ImportJobStatus::PROCESSING:
            return "PROCESSING";
          case ImportJobStatus::COMPLETED:
            return "COMPLETED";
          case ImportJobStatus::FAILED:
            return "FAILED";
          case ImportJobStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportJobStatusMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
