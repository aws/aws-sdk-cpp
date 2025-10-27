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
enum class DataRepositoryTaskLifecycle { NOT_SET, PENDING, EXECUTING, FAILED, SUCCEEDED, CANCELED, CANCELING };

namespace DataRepositoryTaskLifecycleMapper {
AWS_FSX_API DataRepositoryTaskLifecycle GetDataRepositoryTaskLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForDataRepositoryTaskLifecycle(DataRepositoryTaskLifecycle value);
}  // namespace DataRepositoryTaskLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
