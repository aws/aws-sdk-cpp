/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DSQL
{
namespace Model
{
  enum class EncryptionStatus
  {
    NOT_SET,
    ENABLED,
    UPDATING,
    KMS_KEY_INACCESSIBLE,
    ENABLING
  };

namespace EncryptionStatusMapper
{
AWS_DSQL_API EncryptionStatus GetEncryptionStatusForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForEncryptionStatus(EncryptionStatus value);
} // namespace EncryptionStatusMapper
} // namespace Model
} // namespace DSQL
} // namespace Aws
