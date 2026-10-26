/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Continuum {
namespace Model {
enum class ScanOrigin { NOT_SET, MANUAL, SCHEDULED };

namespace ScanOriginMapper {
AWS_CONTINUUM_API ScanOrigin GetScanOriginForName(const Aws::String& name);

AWS_CONTINUUM_API Aws::String GetNameForScanOrigin(ScanOrigin value);
}  // namespace ScanOriginMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
