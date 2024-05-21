/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ExportState.h>
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
      namespace ExportStateMapper
      {

        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int PREPROCESSING_HASH = HashingUtils::HashString("PREPROCESSING");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        ExportState GetExportStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return ExportState::QUEUED;
          }
          else if (hashCode == PREPROCESSING_HASH)
          {
            return ExportState::PREPROCESSING;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ExportState::PROCESSING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExportState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExportState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExportState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExportState>(hashCode);
          }

          return ExportState::NOT_SET;
        }

        Aws::String GetNameForExportState(ExportState enumValue)
        {
          switch(enumValue)
          {
          case ExportState::NOT_SET:
            return {};
          case ExportState::QUEUED:
            return "QUEUED";
          case ExportState::PREPROCESSING:
            return "PREPROCESSING";
          case ExportState::PROCESSING:
            return "PROCESSING";
          case ExportState::COMPLETED:
            return "COMPLETED";
          case ExportState::FAILED:
            return "FAILED";
          case ExportState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExportStateMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
