/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class BatchGetRepositoriesErrorCodeEnum
  {
    NOT_SET,
    EncryptionIntegrityChecksFailedException,
    EncryptionKeyAccessDeniedException,
    EncryptionKeyDisabledException,
    EncryptionKeyNotFoundException,
    EncryptionKeyUnavailableException,
    RepositoryDoesNotExistException
  };

namespace BatchGetRepositoriesErrorCodeEnumMapper
{
AWS_CODECOMMIT_API BatchGetRepositoriesErrorCodeEnum GetBatchGetRepositoriesErrorCodeEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForBatchGetRepositoriesErrorCodeEnum(BatchGetRepositoriesErrorCodeEnum value);
} // namespace BatchGetRepositoriesErrorCodeEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
