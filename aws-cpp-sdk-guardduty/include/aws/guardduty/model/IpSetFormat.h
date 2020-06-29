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
  enum class IpSetFormat
  {
    NOT_SET,
    TXT,
    STIX,
    OTX_CSV,
    ALIEN_VAULT,
    PROOF_POINT,
    FIRE_EYE
  };

namespace IpSetFormatMapper
{
AWS_GUARDDUTY_API IpSetFormat GetIpSetFormatForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForIpSetFormat(IpSetFormat value);
} // namespace IpSetFormatMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
