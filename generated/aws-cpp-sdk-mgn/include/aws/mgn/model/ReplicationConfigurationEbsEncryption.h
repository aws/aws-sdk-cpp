/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class ReplicationConfigurationEbsEncryption
  {
    NOT_SET,
    DEFAULT,
    CUSTOM
  };

namespace ReplicationConfigurationEbsEncryptionMapper
{
AWS_MGN_API ReplicationConfigurationEbsEncryption GetReplicationConfigurationEbsEncryptionForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForReplicationConfigurationEbsEncryption(ReplicationConfigurationEbsEncryption value);
} // namespace ReplicationConfigurationEbsEncryptionMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
