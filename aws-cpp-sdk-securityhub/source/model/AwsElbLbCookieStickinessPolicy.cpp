/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLbCookieStickinessPolicy.h>
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

AwsElbLbCookieStickinessPolicy::AwsElbLbCookieStickinessPolicy() : 
    m_cookieExpirationPeriod(0),
    m_cookieExpirationPeriodHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

AwsElbLbCookieStickinessPolicy::AwsElbLbCookieStickinessPolicy(JsonView jsonValue) : 
    m_cookieExpirationPeriod(0),
    m_cookieExpirationPeriodHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLbCookieStickinessPolicy& AwsElbLbCookieStickinessPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CookieExpirationPeriod"))
  {
    m_cookieExpirationPeriod = jsonValue.GetInt64("CookieExpirationPeriod");

    m_cookieExpirationPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLbCookieStickinessPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_cookieExpirationPeriodHasBeenSet)
  {
   payload.WithInt64("CookieExpirationPeriod", m_cookieExpirationPeriod);

  }

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
