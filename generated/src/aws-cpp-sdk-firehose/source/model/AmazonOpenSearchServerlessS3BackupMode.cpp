/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonOpenSearchServerlessS3BackupMode.h>
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
      namespace AmazonOpenSearchServerlessS3BackupModeMapper
      {

        static const int FailedDocumentsOnly_HASH = HashingUtils::HashString("FailedDocumentsOnly");
        static const int AllDocuments_HASH = HashingUtils::HashString("AllDocuments");


        AmazonOpenSearchServerlessS3BackupMode GetAmazonOpenSearchServerlessS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDocumentsOnly_HASH)
          {
            return AmazonOpenSearchServerlessS3BackupMode::FailedDocumentsOnly;
          }
          else if (hashCode == AllDocuments_HASH)
          {
            return AmazonOpenSearchServerlessS3BackupMode::AllDocuments;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmazonOpenSearchServerlessS3BackupMode>(hashCode);
          }

          return AmazonOpenSearchServerlessS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForAmazonOpenSearchServerlessS3BackupMode(AmazonOpenSearchServerlessS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case AmazonOpenSearchServerlessS3BackupMode::FailedDocumentsOnly:
            return "FailedDocumentsOnly";
          case AmazonOpenSearchServerlessS3BackupMode::AllDocuments:
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

      } // namespace AmazonOpenSearchServerlessS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
