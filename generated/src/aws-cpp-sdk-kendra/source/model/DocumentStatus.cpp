/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DocumentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace DocumentStatusMapper
      {

        static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int INDEXED_HASH = HashingUtils::HashString("INDEXED");
        static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        DocumentStatus GetDocumentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_FOUND_HASH)
          {
            return DocumentStatus::NOT_FOUND;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return DocumentStatus::PROCESSING;
          }
          else if (hashCode == INDEXED_HASH)
          {
            return DocumentStatus::INDEXED;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return DocumentStatus::UPDATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DocumentStatus::FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return DocumentStatus::UPDATE_FAILED;
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
          case DocumentStatus::NOT_FOUND:
            return "NOT_FOUND";
          case DocumentStatus::PROCESSING:
            return "PROCESSING";
          case DocumentStatus::INDEXED:
            return "INDEXED";
          case DocumentStatus::UPDATED:
            return "UPDATED";
          case DocumentStatus::FAILED:
            return "FAILED";
          case DocumentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
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
  } // namespace kendra
} // namespace Aws
