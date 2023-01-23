﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
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
AWS_DRS_API ReplicationConfigurationEbsEncryption GetReplicationConfigurationEbsEncryptionForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForReplicationConfigurationEbsEncryption(ReplicationConfigurationEbsEncryption value);
} // namespace ReplicationConfigurationEbsEncryptionMapper
} // namespace Model
} // namespace drs
} // namespace Aws
