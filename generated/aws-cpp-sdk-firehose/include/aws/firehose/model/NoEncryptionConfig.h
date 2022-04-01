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
  enum class NoEncryptionConfig
  {
    NOT_SET,
    NoEncryption
  };

namespace NoEncryptionConfigMapper
{
AWS_FIREHOSE_API NoEncryptionConfig GetNoEncryptionConfigForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForNoEncryptionConfig(NoEncryptionConfig value);
} // namespace NoEncryptionConfigMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
