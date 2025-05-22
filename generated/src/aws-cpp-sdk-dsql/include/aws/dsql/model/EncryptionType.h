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
  enum class EncryptionType
  {
    NOT_SET,
    AWS_OWNED_KMS_KEY,
    CUSTOMER_MANAGED_KMS_KEY
  };

namespace EncryptionTypeMapper
{
AWS_DSQL_API EncryptionType GetEncryptionTypeForName(const Aws::String& name);

AWS_DSQL_API Aws::String GetNameForEncryptionType(EncryptionType value);
} // namespace EncryptionTypeMapper
} // namespace Model
} // namespace DSQL
} // namespace Aws
