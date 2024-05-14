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
  enum class ContactFlowStatus
  {
    NOT_SET,
    PUBLISHED,
    SAVED
  };

namespace ContactFlowStatusMapper
{
AWS_CONNECT_API ContactFlowStatus GetContactFlowStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactFlowStatus(ContactFlowStatus value);
} // namespace ContactFlowStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
