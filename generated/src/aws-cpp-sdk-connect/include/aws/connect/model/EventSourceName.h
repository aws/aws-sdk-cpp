/**
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
  enum class EventSourceName
  {
    NOT_SET,
    OnPostCallAnalysisAvailable,
    OnRealTimeCallAnalysisAvailable,
    OnPostChatAnalysisAvailable,
    OnZendeskTicketCreate,
    OnZendeskTicketStatusUpdate,
    OnSalesforceCaseCreate
  };

namespace EventSourceNameMapper
{
AWS_CONNECT_API EventSourceName GetEventSourceNameForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEventSourceName(EventSourceName value);
} // namespace EventSourceNameMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
