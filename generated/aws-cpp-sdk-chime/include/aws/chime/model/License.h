/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class License
  {
    NOT_SET,
    Basic,
    Plus,
    Pro,
    ProTrial
  };

namespace LicenseMapper
{
AWS_CHIME_API License GetLicenseForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForLicense(License value);
} // namespace LicenseMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
