/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class CloneSplitAction { NOT_SET, START };

namespace CloneSplitActionMapper {
AWS_FSX_API CloneSplitAction GetCloneSplitActionForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForCloneSplitAction(CloneSplitAction value);
}  // namespace CloneSplitActionMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
