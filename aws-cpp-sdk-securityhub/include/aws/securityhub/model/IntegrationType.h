/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class IntegrationType
  {
    NOT_SET,
    SEND_FINDINGS_TO_SECURITY_HUB,
    RECEIVE_FINDINGS_FROM_SECURITY_HUB
  };

namespace IntegrationTypeMapper
{
AWS_SECURITYHUB_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
