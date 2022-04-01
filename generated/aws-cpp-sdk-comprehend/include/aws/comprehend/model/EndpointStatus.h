/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class EndpointStatus
  {
    NOT_SET,
    CREATING,
    DELETING,
    FAILED,
    IN_SERVICE,
    UPDATING
  };

namespace EndpointStatusMapper
{
AWS_COMPREHEND_API EndpointStatus GetEndpointStatusForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForEndpointStatus(EndpointStatus value);
} // namespace EndpointStatusMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
