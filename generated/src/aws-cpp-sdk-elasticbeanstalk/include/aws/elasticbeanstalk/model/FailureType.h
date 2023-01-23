/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
  enum class FailureType
  {
    NOT_SET,
    UpdateCancelled,
    CancellationFailed,
    RollbackFailed,
    RollbackSuccessful,
    InternalFailure,
    InvalidEnvironmentState,
    PermissionsError
  };

namespace FailureTypeMapper
{
AWS_ELASTICBEANSTALK_API FailureType GetFailureTypeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForFailureType(FailureType value);
} // namespace FailureTypeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
