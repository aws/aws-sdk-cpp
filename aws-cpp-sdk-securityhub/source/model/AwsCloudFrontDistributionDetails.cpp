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

#include <aws/securityhub/model/AwsCloudFrontDistributionDetails.h>
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

AwsCloudFrontDistributionDetails::AwsCloudFrontDistributionDetails() : 
    m_domainNameHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
}

AwsCloudFrontDistributionDetails::AwsCloudFrontDistributionDetails(JsonView jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_originsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsCloudFrontDistributionDetails& AwsCloudFrontDistributionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logging"))
  {
    m_logging = jsonValue.GetObject("Logging");

    m_loggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Origins"))
  {
    m_origins = jsonValue.GetObject("Origins");

    m_originsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebAclId"))
  {
    m_webAclId = jsonValue.GetString("WebAclId");

    m_webAclIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsCloudFrontDistributionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("LastModifiedTime", m_lastModifiedTime);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("Logging", m_logging.Jsonize());

  }

  if(m_originsHasBeenSet)
  {
   payload.WithObject("Origins", m_origins.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_webAclIdHasBeenSet)
  {
   payload.WithString("WebAclId", m_webAclId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
