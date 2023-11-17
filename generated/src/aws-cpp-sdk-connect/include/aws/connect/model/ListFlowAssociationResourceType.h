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
    VOICE_PHONE_NUMBER
  };

namespace ListFlowAssociationResourceTypeMapper
{
AWS_CONNECT_API ListFlowAssociationResourceType GetListFlowAssociationResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForListFlowAssociationResourceType(ListFlowAssociationResourceType value);
} // namespace ListFlowAssociationResourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
