/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ActionType
  {
    NOT_SET,
    restore_cluster,
    recommend_node_config,
    resize_cluster
  };

namespace ActionTypeMapper
{
AWS_REDSHIFT_API ActionType GetActionTypeForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForActionType(ActionType value);
} // namespace ActionTypeMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
