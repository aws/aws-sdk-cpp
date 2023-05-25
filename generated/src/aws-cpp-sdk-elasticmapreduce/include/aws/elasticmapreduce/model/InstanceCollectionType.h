/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class InstanceCollectionType
  {
    NOT_SET,
    INSTANCE_FLEET,
    INSTANCE_GROUP
  };

namespace InstanceCollectionTypeMapper
{
AWS_EMR_API InstanceCollectionType GetInstanceCollectionTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceCollectionType(InstanceCollectionType value);
} // namespace InstanceCollectionTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
