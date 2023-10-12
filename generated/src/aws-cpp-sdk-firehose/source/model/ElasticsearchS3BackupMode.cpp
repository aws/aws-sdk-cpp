/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ElasticsearchS3BackupMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ElasticsearchS3BackupModeMapper
      {

        static constexpr uint32_t FailedDocumentsOnly_HASH = ConstExprHashingUtils::HashString("FailedDocumentsOnly");
        static constexpr uint32_t AllDocuments_HASH = ConstExprHashingUtils::HashString("AllDocuments");


        ElasticsearchS3BackupMode GetElasticsearchS3BackupModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDocumentsOnly_HASH)
          {
            return ElasticsearchS3BackupMode::FailedDocumentsOnly;
          }
          else if (hashCode == AllDocuments_HASH)
          {
            return ElasticsearchS3BackupMode::AllDocuments;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ElasticsearchS3BackupMode>(hashCode);
          }

          return ElasticsearchS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForElasticsearchS3BackupMode(ElasticsearchS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case ElasticsearchS3BackupMode::NOT_SET:
            return {};
          case ElasticsearchS3BackupMode::FailedDocumentsOnly:
            return "FailedDocumentsOnly";
          case ElasticsearchS3BackupMode::AllDocuments:
            return "AllDocuments";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ElasticsearchS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
