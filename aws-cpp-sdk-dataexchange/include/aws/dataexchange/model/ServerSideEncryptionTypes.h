/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{
  enum class ServerSideEncryptionTypes
  {
    NOT_SET,
    aws_kms,
    AES256
  };

namespace ServerSideEncryptionTypesMapper
{
AWS_DATAEXCHANGE_API ServerSideEncryptionTypes GetServerSideEncryptionTypesForName(const Aws::String& name);

AWS_DATAEXCHANGE_API Aws::String GetNameForServerSideEncryptionTypes(ServerSideEncryptionTypes value);
} // namespace ServerSideEncryptionTypesMapper
} // namespace Model
} // namespace DataExchange
} // namespace Aws
