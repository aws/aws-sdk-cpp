/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class EfsInTransitEncryption
  {
    NOT_SET,
    NONE,
    TLS1_2
  };

namespace EfsInTransitEncryptionMapper
{
AWS_DATASYNC_API EfsInTransitEncryption GetEfsInTransitEncryptionForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForEfsInTransitEncryption(EfsInTransitEncryption value);
} // namespace EfsInTransitEncryptionMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
