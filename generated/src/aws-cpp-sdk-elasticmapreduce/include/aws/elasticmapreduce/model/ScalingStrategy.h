﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

namespace Aws {
namespace EMR {
namespace Model {
enum class ScalingStrategy { NOT_SET, DEFAULT, ADVANCED };

namespace ScalingStrategyMapper {
AWS_EMR_API ScalingStrategy GetScalingStrategyForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForScalingStrategy(ScalingStrategy value);
}  // namespace ScalingStrategyMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
