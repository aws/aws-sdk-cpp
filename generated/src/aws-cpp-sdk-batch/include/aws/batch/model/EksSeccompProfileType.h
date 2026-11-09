/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Batch {
namespace Model {
enum class EksSeccompProfileType { NOT_SET, RuntimeDefault, Localhost, Unconfined };

namespace EksSeccompProfileTypeMapper {
AWS_BATCH_API EksSeccompProfileType GetEksSeccompProfileTypeForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForEksSeccompProfileType(EksSeccompProfileType value);
}  // namespace EksSeccompProfileTypeMapper
}  // namespace Model
}  // namespace Batch
}  // namespace Aws
