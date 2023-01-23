/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class RelationshipType
  {
    NOT_SET,
    CAUSE_OF_INPUT_ANOMALY_GROUP,
    EFFECT_OF_INPUT_ANOMALY_GROUP
  };

namespace RelationshipTypeMapper
{
AWS_LOOKOUTMETRICS_API RelationshipType GetRelationshipTypeForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForRelationshipType(RelationshipType value);
} // namespace RelationshipTypeMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
