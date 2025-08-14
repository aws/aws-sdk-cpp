/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class TrustedEntitySetFormat
  {
    NOT_SET,
    TXT,
    STIX,
    OTX_CSV,
    ALIEN_VAULT,
    PROOF_POINT,
    FIRE_EYE
  };

namespace TrustedEntitySetFormatMapper
{
AWS_GUARDDUTY_API TrustedEntitySetFormat GetTrustedEntitySetFormatForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForTrustedEntitySetFormat(TrustedEntitySetFormat value);
} // namespace TrustedEntitySetFormatMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
