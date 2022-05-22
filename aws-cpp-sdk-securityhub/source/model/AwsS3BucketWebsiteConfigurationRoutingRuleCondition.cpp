/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsS3BucketWebsiteConfigurationRoutingRuleCondition.h>
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

AwsS3BucketWebsiteConfigurationRoutingRuleCondition::AwsS3BucketWebsiteConfigurationRoutingRuleCondition() : 
    m_httpErrorCodeReturnedEqualsHasBeenSet(false),
    m_keyPrefixEqualsHasBeenSet(false)
{
}

AwsS3BucketWebsiteConfigurationRoutingRuleCondition::AwsS3BucketWebsiteConfigurationRoutingRuleCondition(JsonView jsonValue) : 
    m_httpErrorCodeReturnedEqualsHasBeenSet(false),
    m_keyPrefixEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsS3BucketWebsiteConfigurationRoutingRuleCondition& AwsS3BucketWebsiteConfigurationRoutingRuleCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HttpErrorCodeReturnedEquals"))
  {
    m_httpErrorCodeReturnedEquals = jsonValue.GetString("HttpErrorCodeReturnedEquals");

    m_httpErrorCodeReturnedEqualsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KeyPrefixEquals"))
  {
    m_keyPrefixEquals = jsonValue.GetString("KeyPrefixEquals");

    m_keyPrefixEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsS3BucketWebsiteConfigurationRoutingRuleCondition::Jsonize() const
{
  JsonValue payload;

  if(m_httpErrorCodeReturnedEqualsHasBeenSet)
  {
   payload.WithString("HttpErrorCodeReturnedEquals", m_httpErrorCodeReturnedEquals);

  }

  if(m_keyPrefixEqualsHasBeenSet)
  {
   payload.WithString("KeyPrefixEquals", m_keyPrefixEquals);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
