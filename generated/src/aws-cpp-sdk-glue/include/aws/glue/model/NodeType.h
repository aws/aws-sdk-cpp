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
  enum class NodeType
  {
    NOT_SET,
    CRAWLER,
    JOB,
    TRIGGER
  };

namespace NodeTypeMapper
{
AWS_GLUE_API NodeType GetNodeTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForNodeType(NodeType value);
} // namespace NodeTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
