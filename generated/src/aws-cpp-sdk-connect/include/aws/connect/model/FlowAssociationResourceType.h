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
  enum class FlowAssociationResourceType
  {
    NOT_SET,
    SMS_PHONE_NUMBER
  };

namespace FlowAssociationResourceTypeMapper
{
AWS_CONNECT_API FlowAssociationResourceType GetFlowAssociationResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForFlowAssociationResourceType(FlowAssociationResourceType value);
} // namespace FlowAssociationResourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
