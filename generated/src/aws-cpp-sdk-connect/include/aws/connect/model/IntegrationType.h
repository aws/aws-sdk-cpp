﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class IntegrationType
  {
    NOT_SET,
    EVENT,
    VOICE_ID,
    PINPOINT_APP,
    WISDOM_ASSISTANT,
    WISDOM_KNOWLEDGE_BASE,
    WISDOM_QUICK_RESPONSES,
    Q_MESSAGE_TEMPLATES,
    CASES_DOMAIN,
    APPLICATION,
    FILE_SCANNER,
    SES_IDENTITY,
    ANALYTICS_CONNECTOR,
    CALL_TRANSFER_CONNECTOR,
    COGNITO_USER_POOL
  };

namespace IntegrationTypeMapper
{
AWS_CONNECT_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
