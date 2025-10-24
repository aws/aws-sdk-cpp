/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>

namespace Aws {
namespace MainframeModernization {
namespace Model {
enum class DataSetTaskLifecycle { NOT_SET, Creating, Running, Completed, Failed };

namespace DataSetTaskLifecycleMapper {
AWS_MAINFRAMEMODERNIZATION_API DataSetTaskLifecycle GetDataSetTaskLifecycleForName(const Aws::String& name);

AWS_MAINFRAMEMODERNIZATION_API Aws::String GetNameForDataSetTaskLifecycle(DataSetTaskLifecycle value);
}  // namespace DataSetTaskLifecycleMapper
}  // namespace Model
}  // namespace MainframeModernization
}  // namespace Aws
