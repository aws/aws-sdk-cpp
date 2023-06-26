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
  enum class ContactInitiationMethod
  {
    NOT_SET,
    INBOUND,
    OUTBOUND,
    TRANSFER,
    QUEUE_TRANSFER,
    CALLBACK,
    API,
    DISCONNECT,
    MONITOR,
    EXTERNAL_OUTBOUND
  };

namespace ContactInitiationMethodMapper
{
AWS_CONNECT_API ContactInitiationMethod GetContactInitiationMethodForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForContactInitiationMethod(ContactInitiationMethod value);
} // namespace ContactInitiationMethodMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
