/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class CertificateUsage { NOT_SET, CLIENT_AND_SERVER_AUTH, CLIENT_AUTH_ONLY };

namespace CertificateUsageMapper {
AWS_ACM_API CertificateUsage GetCertificateUsageForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateUsage(CertificateUsage value);
}  // namespace CertificateUsageMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
