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
enum class CertificateKeyPairOrigin { NOT_SET, AWS_MANAGED, ACME, CUSTOMER_PROVIDED };

namespace CertificateKeyPairOriginMapper {
AWS_ACM_API CertificateKeyPairOrigin GetCertificateKeyPairOriginForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForCertificateKeyPairOrigin(CertificateKeyPairOrigin value);
}  // namespace CertificateKeyPairOriginMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
