/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class ReadSetStatus
  {
    NOT_SET,
    ARCHIVED,
    ACTIVATING,
    ACTIVE,
    DELETING,
    DELETED
  };

namespace ReadSetStatusMapper
{
AWS_OMICS_API ReadSetStatus GetReadSetStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetStatus(ReadSetStatus value);
} // namespace ReadSetStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
