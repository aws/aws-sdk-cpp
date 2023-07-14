/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class AmazonopensearchserviceS3BackupMode
  {
    NOT_SET,
    FailedDocumentsOnly,
    AllDocuments
  };

namespace AmazonopensearchserviceS3BackupModeMapper
{
AWS_FIREHOSE_API AmazonopensearchserviceS3BackupMode GetAmazonopensearchserviceS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForAmazonopensearchserviceS3BackupMode(AmazonopensearchserviceS3BackupMode value);
} // namespace AmazonopensearchserviceS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
