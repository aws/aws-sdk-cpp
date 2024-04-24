/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class DeleteUniqueIdErrorType
  {
    NOT_SET,
    SERVICE_ERROR,
    VALIDATION_ERROR
  };

namespace DeleteUniqueIdErrorTypeMapper
{
AWS_ENTITYRESOLUTION_API DeleteUniqueIdErrorType GetDeleteUniqueIdErrorTypeForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForDeleteUniqueIdErrorType(DeleteUniqueIdErrorType value);
} // namespace DeleteUniqueIdErrorTypeMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
