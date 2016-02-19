/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/OriginProtocolPolicy.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int http_only_HASH = HashingUtils::HashString("http-only");
static const int match_viewer_HASH = HashingUtils::HashString("match-viewer");

namespace Aws
{
namespace CloudFront
{
namespace Model
{
namespace OriginProtocolPolicyMapper
{
OriginProtocolPolicy GetOriginProtocolPolicyForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == http_only_HASH)
  {
    return OriginProtocolPolicy::http_only;
  }
  else if (hashCode == match_viewer_HASH)
  {
    return OriginProtocolPolicy::match_viewer;
  }

  return OriginProtocolPolicy::NOT_SET;
}

Aws::String GetNameForOriginProtocolPolicy(OriginProtocolPolicy value)
{
  switch(value)
  {
  case OriginProtocolPolicy::http_only:
    return "http-only";
  case OriginProtocolPolicy::match_viewer:
    return "match-viewer";
  default:
    return "";
  }
}

} // namespace OriginProtocolPolicyMapper
} // namespace Model
} // namespace CloudFront
} // namespace Aws
