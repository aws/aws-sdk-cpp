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
  enum class DataChecksumAlgorithm
  {
    NOT_SET,
    SHA256
  };

namespace DataChecksumAlgorithmMapper
{
AWS_BACKUPSTORAGE_API DataChecksumAlgorithm GetDataChecksumAlgorithmForName(const Aws::String& name);

AWS_BACKUPSTORAGE_API Aws::String GetNameForDataChecksumAlgorithm(DataChecksumAlgorithm value);
} // namespace DataChecksumAlgorithmMapper
} // namespace Model
} // namespace BackupStorage
} // namespace Aws
