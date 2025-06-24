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
  enum class IndicatorType
  {
    NOT_SET,
    SUSPICIOUS_USER_AGENT,
    SUSPICIOUS_NETWORK,
    MALICIOUS_IP,
    TOR_IP,
    ATTACK_TACTIC,
    HIGH_RISK_API,
    ATTACK_TECHNIQUE,
    UNUSUAL_API_FOR_ACCOUNT,
    UNUSUAL_ASN_FOR_ACCOUNT,
    UNUSUAL_ASN_FOR_USER,
    SUSPICIOUS_PROCESS,
    MALICIOUS_DOMAIN,
    MALICIOUS_PROCESS,
    CRYPTOMINING_IP,
    CRYPTOMINING_DOMAIN,
    CRYPTOMINING_PROCESS
  };

namespace IndicatorTypeMapper
{
AWS_GUARDDUTY_API IndicatorType GetIndicatorTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForIndicatorType(IndicatorType value);
} // namespace IndicatorTypeMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
