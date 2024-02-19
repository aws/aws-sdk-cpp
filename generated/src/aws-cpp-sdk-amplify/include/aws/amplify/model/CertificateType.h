/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class CertificateType
  {
    NOT_SET,
    AMPLIFY_MANAGED,
    CUSTOM
  };

namespace CertificateTypeMapper
{
AWS_AMPLIFY_API CertificateType GetCertificateTypeForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForCertificateType(CertificateType value);
} // namespace CertificateTypeMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
