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

#include <aws/cognito-idp/model/DomainDescriptionType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

DomainDescriptionType::DomainDescriptionType() : 
    m_userPoolIdHasBeenSet(false),
    m_aWSAccountIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_cloudFrontDistributionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(DomainStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DomainDescriptionType::DomainDescriptionType(const JsonValue& jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_aWSAccountIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_s3BucketHasBeenSet(false),
    m_cloudFrontDistributionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_status(DomainStatusType::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DomainDescriptionType& DomainDescriptionType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSAccountId"))
  {
    m_aWSAccountId = jsonValue.GetString("AWSAccountId");

    m_aWSAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = jsonValue.GetString("Domain");

    m_domainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");

    m_s3BucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudFrontDistribution"))
  {
    m_cloudFrontDistribution = jsonValue.GetString("CloudFrontDistribution");

    m_cloudFrontDistributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DomainStatusTypeMapper::GetDomainStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainDescriptionType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_aWSAccountIdHasBeenSet)
  {
   payload.WithString("AWSAccountId", m_aWSAccountId);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_cloudFrontDistributionHasBeenSet)
  {
   payload.WithString("CloudFrontDistribution", m_cloudFrontDistribution);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DomainStatusTypeMapper::GetNameForDomainStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
