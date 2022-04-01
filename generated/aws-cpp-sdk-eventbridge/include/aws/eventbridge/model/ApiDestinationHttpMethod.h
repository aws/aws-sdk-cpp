/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EventBridge
{
namespace Model
{
  enum class ApiDestinationHttpMethod
  {
    NOT_SET,
    POST,
    GET_,
    HEAD,
    OPTIONS,
    PUT,
    PATCH,
    DELETE_
  };

namespace ApiDestinationHttpMethodMapper
{
AWS_EVENTBRIDGE_API ApiDestinationHttpMethod GetApiDestinationHttpMethodForName(const Aws::String& name);

AWS_EVENTBRIDGE_API Aws::String GetNameForApiDestinationHttpMethod(ApiDestinationHttpMethod value);
} // namespace ApiDestinationHttpMethodMapper
} // namespace Model
} // namespace EventBridge
} // namespace Aws
