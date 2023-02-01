/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class ObjectType
  {
    NOT_SET,
    NODE,
    LEAF_NODE,
    POLICY,
    INDEX
  };

namespace ObjectTypeMapper
{
AWS_CLOUDDIRECTORY_API ObjectType GetObjectTypeForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForObjectType(ObjectType value);
} // namespace ObjectTypeMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
