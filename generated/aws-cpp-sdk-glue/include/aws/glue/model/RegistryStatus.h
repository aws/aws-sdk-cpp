/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class RegistryStatus
  {
    NOT_SET,
    AVAILABLE,
    DELETING
  };

namespace RegistryStatusMapper
{
AWS_GLUE_API RegistryStatus GetRegistryStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForRegistryStatus(RegistryStatus value);
} // namespace RegistryStatusMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
