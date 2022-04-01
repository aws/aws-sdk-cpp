/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class UpdateResourceCollectionAction
  {
    NOT_SET,
    ADD,
    REMOVE
  };

namespace UpdateResourceCollectionActionMapper
{
AWS_DEVOPSGURU_API UpdateResourceCollectionAction GetUpdateResourceCollectionActionForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForUpdateResourceCollectionAction(UpdateResourceCollectionAction value);
} // namespace UpdateResourceCollectionActionMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
