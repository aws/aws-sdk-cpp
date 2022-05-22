/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class NodeCategory
  {
    NOT_SET,
    BUSINESS_LOGIC,
    ML_MODEL,
    MEDIA_SOURCE,
    MEDIA_SINK
  };

namespace NodeCategoryMapper
{
AWS_PANORAMA_API NodeCategory GetNodeCategoryForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForNodeCategory(NodeCategory value);
} // namespace NodeCategoryMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
