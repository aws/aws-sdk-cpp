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
  enum class ResponseHeadersPolicyAccessControlAllowMethodsValues
  {
    NOT_SET,
    GET_,
    POST,
    OPTIONS,
    PUT,
    DELETE_,
    PATCH,
    HEAD,
    ALL
  };

namespace ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper
{
AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowMethodsValues GetResponseHeadersPolicyAccessControlAllowMethodsValuesForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForResponseHeadersPolicyAccessControlAllowMethodsValues(ResponseHeadersPolicyAccessControlAllowMethodsValues value);
} // namespace ResponseHeadersPolicyAccessControlAllowMethodsValuesMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
