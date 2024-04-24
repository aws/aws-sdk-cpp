/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class CertificateProviderType
  {
    NOT_SET,
    PEM
  };

namespace CertificateProviderTypeMapper
{
AWS_EMRCONTAINERS_API CertificateProviderType GetCertificateProviderTypeForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForCertificateProviderType(CertificateProviderType value);
} // namespace CertificateProviderTypeMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
