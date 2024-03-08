/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonopensearchserviceS3BackupMode.h>
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
      namespace AmazonopensearchserviceS3BackupModeMapper
      {

        static const int FailedDocumentsOnly_HASH = HashingUtils::HashString("FailedDocumentsOnly");
        static const int AllDocuments_HASH = HashingUtils::HashString("AllDocuments");


        AmazonopensearchserviceS3BackupMode GetAmazonopensearchserviceS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDocumentsOnly_HASH)
          {
            return AmazonopensearchserviceS3BackupMode::FailedDocumentsOnly;
          }
          else if (hashCode == AllDocuments_HASH)
          {
            return AmazonopensearchserviceS3BackupMode::AllDocuments;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AmazonopensearchserviceS3BackupMode>(hashCode);
          }

          return AmazonopensearchserviceS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForAmazonopensearchserviceS3BackupMode(AmazonopensearchserviceS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case AmazonopensearchserviceS3BackupMode::NOT_SET:
            return {};
          case AmazonopensearchserviceS3BackupMode::FailedDocumentsOnly:
            return "FailedDocumentsOnly";
          case AmazonopensearchserviceS3BackupMode::AllDocuments:
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

      } // namespace AmazonopensearchserviceS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
