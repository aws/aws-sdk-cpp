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
  enum class ElasticsearchS3BackupMode
  {
    NOT_SET,
    FailedDocumentsOnly,
    AllDocuments
  };

namespace ElasticsearchS3BackupModeMapper
{
AWS_FIREHOSE_API ElasticsearchS3BackupMode GetElasticsearchS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForElasticsearchS3BackupMode(ElasticsearchS3BackupMode value);
} // namespace ElasticsearchS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
