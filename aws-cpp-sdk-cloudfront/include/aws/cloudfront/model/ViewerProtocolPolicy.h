/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class ViewerProtocolPolicy
  {
    NOT_SET,
    allow_all,
    https_only,
    redirect_to_https
  };

namespace ViewerProtocolPolicyMapper
{
AWS_CLOUDFRONT_API ViewerProtocolPolicy GetViewerProtocolPolicyForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForViewerProtocolPolicy(ViewerProtocolPolicy value);
} // namespace ViewerProtocolPolicyMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
