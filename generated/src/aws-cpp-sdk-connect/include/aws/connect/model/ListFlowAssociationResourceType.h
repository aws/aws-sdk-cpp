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
  enum class ListFlowAssociationResourceType
  {
    NOT_SET,
    WHATSAPP_MESSAGING_PHONE_NUMBER,
    VOICE_PHONE_NUMBER,
    INBOUND_EMAIL,
    OUTBOUND_EMAIL,
    ANALYTICS_CONNECTOR
  };

namespace ListFlowAssociationResourceTypeMapper
{
AWS_CONNECT_API ListFlowAssociationResourceType GetListFlowAssociationResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForListFlowAssociationResourceType(ListFlowAssociationResourceType value);
} // namespace ListFlowAssociationResourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
