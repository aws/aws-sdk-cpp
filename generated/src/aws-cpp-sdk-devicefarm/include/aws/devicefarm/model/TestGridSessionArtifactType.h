/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>

namespace Aws {
namespace DeviceFarm {
namespace Model {
enum class TestGridSessionArtifactType { NOT_SET, UNKNOWN, VIDEO, SELENIUM_LOG };

namespace TestGridSessionArtifactTypeMapper {
AWS_DEVICEFARM_API TestGridSessionArtifactType GetTestGridSessionArtifactTypeForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForTestGridSessionArtifactType(TestGridSessionArtifactType value);
}  // namespace TestGridSessionArtifactTypeMapper
}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
