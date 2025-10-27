/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
enum class ArtifactType { NOT_SET, UDF, DEPENDENCY_JAR };

namespace ArtifactTypeMapper {
AWS_KINESISANALYTICSV2_API ArtifactType GetArtifactTypeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForArtifactType(ArtifactType value);
}  // namespace ArtifactTypeMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
