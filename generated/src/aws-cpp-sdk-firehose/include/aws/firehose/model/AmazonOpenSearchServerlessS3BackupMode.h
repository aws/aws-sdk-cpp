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
  enum class AmazonOpenSearchServerlessS3BackupMode
  {
    NOT_SET,
    FailedDocumentsOnly,
    AllDocuments
  };

namespace AmazonOpenSearchServerlessS3BackupModeMapper
{
AWS_FIREHOSE_API AmazonOpenSearchServerlessS3BackupMode GetAmazonOpenSearchServerlessS3BackupModeForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForAmazonOpenSearchServerlessS3BackupMode(AmazonOpenSearchServerlessS3BackupMode value);
} // namespace AmazonOpenSearchServerlessS3BackupModeMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
