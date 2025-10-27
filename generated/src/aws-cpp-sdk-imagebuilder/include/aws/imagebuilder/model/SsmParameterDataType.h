/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

namespace Aws {
namespace imagebuilder {
namespace Model {
enum class SsmParameterDataType { NOT_SET, text, aws_ec2_image };

namespace SsmParameterDataTypeMapper {
AWS_IMAGEBUILDER_API SsmParameterDataType GetSsmParameterDataTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForSsmParameterDataType(SsmParameterDataType value);
}  // namespace SsmParameterDataTypeMapper
}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
