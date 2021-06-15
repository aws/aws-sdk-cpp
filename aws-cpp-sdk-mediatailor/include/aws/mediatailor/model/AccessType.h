/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class AccessType
  {
    NOT_SET,
    S3_SIGV4
  };

namespace AccessTypeMapper
{
AWS_MEDIATAILOR_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForAccessType(AccessType value);
} // namespace AccessTypeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
