﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class ObjectTags
  {
    NOT_SET,
    PRESERVE,
    NONE
  };

namespace ObjectTagsMapper
{
AWS_DATASYNC_API ObjectTags GetObjectTagsForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForObjectTags(ObjectTags value);
} // namespace ObjectTagsMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
