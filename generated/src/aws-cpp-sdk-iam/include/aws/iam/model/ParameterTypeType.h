/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class ParameterTypeType { NOT_SET, String, StringList, Number, NumberList, Arn, ArnList };

namespace ParameterTypeTypeMapper {
AWS_IAM_API ParameterTypeType GetParameterTypeTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForParameterTypeType(ParameterTypeType value);
}  // namespace ParameterTypeTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
