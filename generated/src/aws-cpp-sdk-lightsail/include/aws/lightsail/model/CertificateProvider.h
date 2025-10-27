/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class CertificateProvider { NOT_SET, LetsEncrypt };

namespace CertificateProviderMapper {
AWS_LIGHTSAIL_API CertificateProvider GetCertificateProviderForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForCertificateProvider(CertificateProvider value);
}  // namespace CertificateProviderMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
