/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{
  enum class CdcPropagateTags
  {
    NOT_SET,
    TABLE,
    NONE
  };

namespace CdcPropagateTagsMapper
{
AWS_KEYSPACES_API CdcPropagateTags GetCdcPropagateTagsForName(const Aws::String& name);

AWS_KEYSPACES_API Aws::String GetNameForCdcPropagateTags(CdcPropagateTags value);
} // namespace CdcPropagateTagsMapper
} // namespace Model
} // namespace Keyspaces
} // namespace Aws
