/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/ImportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace ImportStatusMapper
      {

        static constexpr uint32_t IMPORT_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IMPORT_IN_PROGRESS");
        static constexpr uint32_t IMPORT_COMPLETE_HASH = ConstExprHashingUtils::HashString("IMPORT_COMPLETE");
        static constexpr uint32_t IMPORT_COMPLETE_WITH_ERRORS_HASH = ConstExprHashingUtils::HashString("IMPORT_COMPLETE_WITH_ERRORS");
        static constexpr uint32_t IMPORT_FAILED_HASH = ConstExprHashingUtils::HashString("IMPORT_FAILED");
        static constexpr uint32_t IMPORT_FAILED_SERVER_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("IMPORT_FAILED_SERVER_LIMIT_EXCEEDED");
        static constexpr uint32_t IMPORT_FAILED_RECORD_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("IMPORT_FAILED_RECORD_LIMIT_EXCEEDED");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");
        static constexpr uint32_t DELETE_COMPLETE_HASH = ConstExprHashingUtils::HashString("DELETE_COMPLETE");
        static constexpr uint32_t DELETE_FAILED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED");
        static constexpr uint32_t DELETE_FAILED_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("DELETE_FAILED_LIMIT_EXCEEDED");
        static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_ERROR");


        ImportStatus GetImportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORT_IN_PROGRESS_HASH)
          {
            return ImportStatus::IMPORT_IN_PROGRESS;
          }
          else if (hashCode == IMPORT_COMPLETE_HASH)
          {
            return ImportStatus::IMPORT_COMPLETE;
          }
          else if (hashCode == IMPORT_COMPLETE_WITH_ERRORS_HASH)
          {
            return ImportStatus::IMPORT_COMPLETE_WITH_ERRORS;
          }
          else if (hashCode == IMPORT_FAILED_HASH)
          {
            return ImportStatus::IMPORT_FAILED;
          }
          else if (hashCode == IMPORT_FAILED_SERVER_LIMIT_EXCEEDED_HASH)
          {
            return ImportStatus::IMPORT_FAILED_SERVER_LIMIT_EXCEEDED;
          }
          else if (hashCode == IMPORT_FAILED_RECORD_LIMIT_EXCEEDED_HASH)
          {
            return ImportStatus::IMPORT_FAILED_RECORD_LIMIT_EXCEEDED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ImportStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_COMPLETE_HASH)
          {
            return ImportStatus::DELETE_COMPLETE;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ImportStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_FAILED_LIMIT_EXCEEDED_HASH)
          {
            return ImportStatus::DELETE_FAILED_LIMIT_EXCEEDED;
          }
          else if (hashCode == INTERNAL_ERROR_HASH)
          {
            return ImportStatus::INTERNAL_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportStatus>(hashCode);
          }

          return ImportStatus::NOT_SET;
        }

        Aws::String GetNameForImportStatus(ImportStatus enumValue)
        {
          switch(enumValue)
          {
          case ImportStatus::NOT_SET:
            return {};
          case ImportStatus::IMPORT_IN_PROGRESS:
            return "IMPORT_IN_PROGRESS";
          case ImportStatus::IMPORT_COMPLETE:
            return "IMPORT_COMPLETE";
          case ImportStatus::IMPORT_COMPLETE_WITH_ERRORS:
            return "IMPORT_COMPLETE_WITH_ERRORS";
          case ImportStatus::IMPORT_FAILED:
            return "IMPORT_FAILED";
          case ImportStatus::IMPORT_FAILED_SERVER_LIMIT_EXCEEDED:
            return "IMPORT_FAILED_SERVER_LIMIT_EXCEEDED";
          case ImportStatus::IMPORT_FAILED_RECORD_LIMIT_EXCEEDED:
            return "IMPORT_FAILED_RECORD_LIMIT_EXCEEDED";
          case ImportStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ImportStatus::DELETE_COMPLETE:
            return "DELETE_COMPLETE";
          case ImportStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case ImportStatus::DELETE_FAILED_LIMIT_EXCEEDED:
            return "DELETE_FAILED_LIMIT_EXCEEDED";
          case ImportStatus::INTERNAL_ERROR:
            return "INTERNAL_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportStatusMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
