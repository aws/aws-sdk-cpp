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

#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

DomainNameConfiguration::DomainNameConfiguration() : 
    m_apiGatewayDomainNameHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateUploadDateHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_securityPolicy(SecurityPolicy::NOT_SET),
    m_securityPolicyHasBeenSet(false),
    m_domainNameStatus(DomainNameStatus::NOT_SET),
    m_domainNameStatusHasBeenSet(false),
    m_domainNameStatusMessageHasBeenSet(false)
{
}

DomainNameConfiguration::DomainNameConfiguration(JsonView jsonValue) : 
    m_apiGatewayDomainNameHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateUploadDateHasBeenSet(false),
    m_endpointType(EndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_securityPolicy(SecurityPolicy::NOT_SET),
    m_securityPolicyHasBeenSet(false),
    m_domainNameStatus(DomainNameStatus::NOT_SET),
    m_domainNameStatusHasBeenSet(false),
    m_domainNameStatusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

DomainNameConfiguration& DomainNameConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiGatewayDomainName"))
  {
    m_apiGatewayDomainName = jsonValue.GetString("apiGatewayDomainName");

    m_apiGatewayDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");

    m_certificateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateUploadDate"))
  {
    m_certificateUploadDate = jsonValue.GetString("certificateUploadDate");

    m_certificateUploadDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("endpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("hostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityPolicy"))
  {
    m_securityPolicy = SecurityPolicyMapper::GetSecurityPolicyForName(jsonValue.GetString("securityPolicy"));

    m_securityPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainNameStatus"))
  {
    m_domainNameStatus = DomainNameStatusMapper::GetDomainNameStatusForName(jsonValue.GetString("domainNameStatus"));

    m_domainNameStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainNameStatusMessage"))
  {
    m_domainNameStatusMessage = jsonValue.GetString("domainNameStatusMessage");

    m_domainNameStatusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainNameConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_apiGatewayDomainNameHasBeenSet)
  {
   payload.WithString("apiGatewayDomainName", m_apiGatewayDomainName);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateUploadDateHasBeenSet)
  {
   payload.WithString("certificateUploadDate", m_certificateUploadDate.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("endpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("hostedZoneId", m_hostedZoneId);

  }

  if(m_securityPolicyHasBeenSet)
  {
   payload.WithString("securityPolicy", SecurityPolicyMapper::GetNameForSecurityPolicy(m_securityPolicy));
  }

  if(m_domainNameStatusHasBeenSet)
  {
   payload.WithString("domainNameStatus", DomainNameStatusMapper::GetNameForDomainNameStatus(m_domainNameStatus));
  }

  if(m_domainNameStatusMessageHasBeenSet)
  {
   payload.WithString("domainNameStatusMessage", m_domainNameStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
