/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class EdgeDirection { NOT_SET, UPSTREAM, DOWNSTREAM };

namespace EdgeDirectionMapper {
AWS_DATAZONE_API EdgeDirection GetEdgeDirectionForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForEdgeDirection(EdgeDirection value);
}  // namespace EdgeDirectionMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
