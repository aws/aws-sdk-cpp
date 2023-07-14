/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFront
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    viewer_request,
    viewer_response,
    origin_request,
    origin_response
  };

namespace EventTypeMapper
{
AWS_CLOUDFRONT_API EventType GetEventTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
