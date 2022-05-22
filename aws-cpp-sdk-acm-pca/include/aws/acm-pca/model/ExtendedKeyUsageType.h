/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class ExtendedKeyUsageType
  {
    NOT_SET,
    SERVER_AUTH,
    CLIENT_AUTH,
    CODE_SIGNING,
    EMAIL_PROTECTION,
    TIME_STAMPING,
    OCSP_SIGNING,
    SMART_CARD_LOGIN,
    DOCUMENT_SIGNING,
    CERTIFICATE_TRANSPARENCY
  };

namespace ExtendedKeyUsageTypeMapper
{
AWS_ACMPCA_API ExtendedKeyUsageType GetExtendedKeyUsageTypeForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForExtendedKeyUsageType(ExtendedKeyUsageType value);
} // namespace ExtendedKeyUsageTypeMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
