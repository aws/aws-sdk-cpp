/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class KeyUsageName
  {
    NOT_SET,
    DIGITAL_SIGNATURE,
    NON_REPUDIATION,
    KEY_ENCIPHERMENT,
    DATA_ENCIPHERMENT,
    KEY_AGREEMENT,
    CERTIFICATE_SIGNING,
    CRL_SIGNING,
    ENCIPHER_ONLY,
    DECIPHER_ONLY,
    ANY,
    CUSTOM
  };

namespace KeyUsageNameMapper
{
AWS_ACM_API KeyUsageName GetKeyUsageNameForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForKeyUsageName(KeyUsageName value);
} // namespace KeyUsageNameMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
