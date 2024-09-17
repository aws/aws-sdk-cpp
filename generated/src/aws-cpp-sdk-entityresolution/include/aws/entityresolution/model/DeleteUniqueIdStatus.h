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
  enum class DeleteUniqueIdStatus
  {
    NOT_SET,
    COMPLETED,
    ACCEPTED
  };

namespace DeleteUniqueIdStatusMapper
{
AWS_ENTITYRESOLUTION_API DeleteUniqueIdStatus GetDeleteUniqueIdStatusForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForDeleteUniqueIdStatus(DeleteUniqueIdStatus value);
} // namespace DeleteUniqueIdStatusMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
