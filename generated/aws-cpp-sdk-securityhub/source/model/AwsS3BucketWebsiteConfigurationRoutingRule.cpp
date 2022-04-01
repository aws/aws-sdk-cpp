/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRule.h>
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

AwsS3BucketWebsiteConfigurationRoutingRule::AwsS3BucketWebsiteConfigurationRoutingRule() : 
    m_conditionHasBeenSet(false),
    m_redirectHasBeenSet(false)
{
}

AwsS3BucketWebsiteConfigurationRoutingRule::AwsS3BucketWebsiteConfigurationRoutingRule(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_redirectHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketWebsiteConfigurationRoutingRule& AwsS3BucketWebsiteConfigurationRoutingRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Condition"))
  {
    m_condition = jsonValue.GetObject("Condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Redirect"))
  {
    m_redirect = jsonValue.GetObject("Redirect");

    m_redirectHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketWebsiteConfigurationRoutingRule::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("Condition", m_condition.Jsonize());

  }

  if(m_redirectHasBeenSet)
  {
   payload.WithObject("Redirect", m_redirect.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
