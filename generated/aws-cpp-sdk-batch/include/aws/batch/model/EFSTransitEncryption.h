/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class EFSTransitEncryption
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EFSTransitEncryptionMapper
{
AWS_BATCH_API EFSTransitEncryption GetEFSTransitEncryptionForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForEFSTransitEncryption(EFSTransitEncryption value);
} // namespace EFSTransitEncryptionMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
