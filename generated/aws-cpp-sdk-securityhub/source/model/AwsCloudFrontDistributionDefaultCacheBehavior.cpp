/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsCloudFrontDistributionDefaultCacheBehavior.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsCloudFrontDistributionDefaultCacheBehavior::AwsCloudFrontDistributionDefaultCacheBehavior() : 
    m_viewerProtocolPolicyHasBeenSet(false)
{
}

AwsCloudFrontDistributionDefaultCacheBehavior::AwsCloudFrontDistributionDefaultCacheBehavior(JsonView jsonValue) : 
    m_viewerProtocolPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionDefaultCacheBehavior& AwsCloudFrontDistributionDefaultCacheBehavior::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViewerProtocolPolicy"))
  {
    m_viewerProtocolPolicy = jsonValue.GetString("ViewerProtocolPolicy");

    m_viewerProtocolPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionDefaultCacheBehavior::Jsonize() const
{
  JsonValue payload;

  if(m_viewerProtocolPolicyHasBeenSet)
  {
   payload.WithString("ViewerProtocolPolicy", m_viewerProtocolPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
