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
#include <aws/route53/model/HealthCheckType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int HTTP_HASH = HashingUtils::HashString("HTTP");
static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
static const int HTTP_STR_MATCH_HASH = HashingUtils::HashString("HTTP_STR_MATCH");
static const int HTTPS_STR_MATCH_HASH = HashingUtils::HashString("HTTPS_STR_MATCH");
static const int TCP_HASH = HashingUtils::HashString("TCP");
static const int CALCULATED_HASH = HashingUtils::HashString("CALCULATED");

namespace Aws
{
namespace Route53
{
namespace Model
{
namespace HealthCheckTypeMapper
{


HealthCheckType GetHealthCheckTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HTTP_HASH)
  {
     return HealthCheckType::HTTP;
  }
  else if (hashCode == HTTPS_HASH)
  {
     return HealthCheckType::HTTPS;
  }
  else if (hashCode == HTTP_STR_MATCH_HASH)
  {
     return HealthCheckType::HTTP_STR_MATCH;
  }
  else if (hashCode == HTTPS_STR_MATCH_HASH)
  {
     return HealthCheckType::HTTPS_STR_MATCH;
  }
  else if (hashCode == TCP_HASH)
  {
     return HealthCheckType::TCP;
  }
  else if (hashCode == CALCULATED_HASH)
  {
     return HealthCheckType::CALCULATED;
  }
  return HealthCheckType::NOT_SET;
}

Aws::String GetNameForHealthCheckType(HealthCheckType enumValue)
{
  switch(enumValue)
  {
  case HealthCheckType::HTTP:
    return "HTTP";
  case HealthCheckType::HTTPS:
    return "HTTPS";
  case HealthCheckType::HTTP_STR_MATCH:
    return "HTTP_STR_MATCH";
  case HealthCheckType::HTTPS_STR_MATCH:
    return "HTTPS_STR_MATCH";
  case HealthCheckType::TCP:
    return "TCP";
  case HealthCheckType::CALCULATED:
    return "CALCULATED";
  default:
    return "";
  }
}

} // namespace HealthCheckTypeMapper
} // namespace Model
} // namespace Route53
} // namespace Aws
