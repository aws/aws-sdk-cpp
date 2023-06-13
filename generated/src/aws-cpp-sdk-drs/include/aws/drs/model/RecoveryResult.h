/**
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
  enum class RecoveryResult
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    SUCCESS,
    FAIL,
    PARTIAL_SUCCESS,
    ASSOCIATE_SUCCESS,
    ASSOCIATE_FAIL
  };

namespace RecoveryResultMapper
{
AWS_DRS_API RecoveryResult GetRecoveryResultForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForRecoveryResult(RecoveryResult value);
} // namespace RecoveryResultMapper
} // namespace Model
} // namespace drs
} // namespace Aws
