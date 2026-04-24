/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>

namespace Aws {
namespace GameLift {
namespace Model {
enum class CertificateType { NOT_SET, DISABLED, GENERATED };

namespace CertificateTypeMapper {
AWS_GAMELIFT_API CertificateType GetCertificateTypeForName(const Aws::String& name);

AWS_GAMELIFT_API Aws::String GetNameForCertificateType(CertificateType value);
}  // namespace CertificateTypeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
