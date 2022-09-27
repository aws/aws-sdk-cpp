/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupStorage
{
namespace Model
{
  enum class SummaryChecksumAlgorithm
  {
    NOT_SET,
    SUMMARY
  };

namespace SummaryChecksumAlgorithmMapper
{
AWS_BACKUPSTORAGE_API SummaryChecksumAlgorithm GetSummaryChecksumAlgorithmForName(const Aws::String& name);

AWS_BACKUPSTORAGE_API Aws::String GetNameForSummaryChecksumAlgorithm(SummaryChecksumAlgorithm value);
} // namespace SummaryChecksumAlgorithmMapper
} // namespace Model
} // namespace BackupStorage
} // namespace Aws
