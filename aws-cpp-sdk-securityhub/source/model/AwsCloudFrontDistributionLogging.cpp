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

#include <aws/securityhub/model/AwsCloudFrontDistributionLogging.h>
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

AwsCloudFrontDistributionLogging::AwsCloudFrontDistributionLogging() : 
    m_bucketHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includeCookies(false),
    m_includeCookiesHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

AwsCloudFrontDistributionLogging::AwsCloudFrontDistributionLogging(JsonView jsonValue) : 
    m_bucketHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_includeCookies(false),
    m_includeCookiesHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionLogging& AwsCloudFrontDistributionLogging::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Bucket"))
  {
    m_bucket = jsonValue.GetString("Bucket");

    m_bucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeCookies"))
  {
    m_includeCookies = jsonValue.GetBool("IncludeCookies");

    m_includeCookiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionLogging::Jsonize() const
{
  JsonValue payload;

  if(m_bucketHasBeenSet)
  {
   payload.WithString("Bucket", m_bucket);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_includeCookiesHasBeenSet)
  {
   payload.WithBool("IncludeCookies", m_includeCookies);

  }

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
