/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LicenseManager
{
namespace Model
{
  enum class DigitalSignatureMethod
  {
    NOT_SET,
    JWT_PS384
  };

namespace DigitalSignatureMethodMapper
{
AWS_LICENSEMANAGER_API DigitalSignatureMethod GetDigitalSignatureMethodForName(const Aws::String& name);

AWS_LICENSEMANAGER_API Aws::String GetNameForDigitalSignatureMethod(DigitalSignatureMethod value);
} // namespace DigitalSignatureMethodMapper
} // namespace Model
} // namespace LicenseManager
} // namespace Aws
