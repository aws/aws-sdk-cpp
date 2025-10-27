/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class Quality { NOT_SET, GOOD, BAD, UNCERTAIN };

namespace QualityMapper {
AWS_IOTSITEWISE_API Quality GetQualityForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForQuality(Quality value);
}  // namespace QualityMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
