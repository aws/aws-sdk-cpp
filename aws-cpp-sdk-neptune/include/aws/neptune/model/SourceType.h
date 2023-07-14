/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Neptune
{
namespace Model
{
  enum class SourceType
  {
    NOT_SET,
    db_instance,
    db_parameter_group,
    db_security_group,
    db_snapshot,
    db_cluster,
    db_cluster_snapshot
  };

namespace SourceTypeMapper
{
AWS_NEPTUNE_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_NEPTUNE_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace Neptune
} // namespace Aws
