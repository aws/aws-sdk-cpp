/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>

namespace Aws {
namespace drs {
namespace Model {
enum class SourceServerArchitecture { NOT_SET, x86_64, arm64 };

namespace SourceServerArchitectureMapper {
AWS_DRS_API SourceServerArchitecture GetSourceServerArchitectureForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForSourceServerArchitecture(SourceServerArchitecture value);
}  // namespace SourceServerArchitectureMapper
}  // namespace Model
}  // namespace drs
}  // namespace Aws
