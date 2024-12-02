/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DocumentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace DocumentStatusMapper
      {

        static const int INDEXED_HASH = HashingUtils::HashString("INDEXED");
        static const int PARTIALLY_INDEXED_HASH = HashingUtils::HashString("PARTIALLY_INDEXED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int METADATA_PARTIALLY_INDEXED_HASH = HashingUtils::HashString("METADATA_PARTIALLY_INDEXED");
        static const int METADATA_UPDATE_FAILED_HASH = HashingUtils::HashString("METADATA_UPDATE_FAILED");
        static const int IGNORED_HASH = HashingUtils::HashString("IGNORED");
        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");


        DocumentStatus GetDocumentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INDEXED_HASH)
          {
            return DocumentStatus::INDEXED;
          }
          else if (hashCode == PARTIALLY_INDEXED_HASH)
          {
            return DocumentStatus::PARTIALLY_INDEXED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return DocumentStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DocumentStatus::FAILED;
          }
          else if (hashCode == METADATA_PARTIALLY_INDEXED_HASH)
          {
            return DocumentStatus::METADATA_PARTIALLY_INDEXED;
          }
          else if (hashCode == METADATA_UPDATE_FAILED_HASH)
          {
            return DocumentStatus::METADATA_UPDATE_FAILED;
          }
          else if (hashCode == IGNORED_HASH)
          {
            return DocumentStatus::IGNORED;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return DocumentStatus::NOT_FOUND;
          }
          else if (hashCode == STARTING_HASH)
          {
            return DocumentStatus::STARTING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DocumentStatus::IN_PROGRESS;
          }
          else if (hashCode == DELETING_HASH)
          {
            return DocumentStatus::DELETING;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return DocumentStatus::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentStatus>(hashCode);
          }

          return DocumentStatus::NOT_SET;
        }

        Aws::String GetNameForDocumentStatus(DocumentStatus enumValue)
        {
          switch(enumValue)
          {
          case DocumentStatus::NOT_SET:
            return {};
          case DocumentStatus::INDEXED:
            return "INDEXED";
          case DocumentStatus::PARTIALLY_INDEXED:
            return "PARTIALLY_INDEXED";
          case DocumentStatus::PENDING:
            return "PENDING";
          case DocumentStatus::FAILED:
            return "FAILED";
          case DocumentStatus::METADATA_PARTIALLY_INDEXED:
            return "METADATA_PARTIALLY_INDEXED";
          case DocumentStatus::METADATA_UPDATE_FAILED:
            return "METADATA_UPDATE_FAILED";
          case DocumentStatus::IGNORED:
            return "IGNORED";
          case DocumentStatus::NOT_FOUND:
            return "NOT_FOUND";
          case DocumentStatus::STARTING:
            return "STARTING";
          case DocumentStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DocumentStatus::DELETING:
            return "DELETING";
          case DocumentStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentStatusMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
