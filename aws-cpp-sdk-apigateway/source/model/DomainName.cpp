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

#include <aws/apigateway/model/DomainName.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DomainName::DomainName() : 
    m_domainNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateUploadDateHasBeenSet(false),
    m_regionalDomainNameHasBeenSet(false),
    m_regionalHostedZoneIdHasBeenSet(false),
    m_regionalCertificateNameHasBeenSet(false),
    m_regionalCertificateArnHasBeenSet(false),
    m_distributionDomainNameHasBeenSet(false),
    m_distributionHostedZoneIdHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false)
{
}

DomainName::DomainName(const JsonValue& jsonValue) : 
    m_domainNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_certificateUploadDateHasBeenSet(false),
    m_regionalDomainNameHasBeenSet(false),
    m_regionalHostedZoneIdHasBeenSet(false),
    m_regionalCertificateNameHasBeenSet(false),
    m_regionalCertificateArnHasBeenSet(false),
    m_distributionDomainNameHasBeenSet(false),
    m_distributionHostedZoneIdHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DomainName& DomainName::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateName"))
  {
    m_certificateName = jsonValue.GetString("certificateName");

    m_certificateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateUploadDate"))
  {
    m_certificateUploadDate = jsonValue.GetDouble("certificateUploadDate");

    m_certificateUploadDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionalDomainName"))
  {
    m_regionalDomainName = jsonValue.GetString("regionalDomainName");

    m_regionalDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionalHostedZoneId"))
  {
    m_regionalHostedZoneId = jsonValue.GetString("regionalHostedZoneId");

    m_regionalHostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionalCertificateName"))
  {
    m_regionalCertificateName = jsonValue.GetString("regionalCertificateName");

    m_regionalCertificateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("regionalCertificateArn"))
  {
    m_regionalCertificateArn = jsonValue.GetString("regionalCertificateArn");

    m_regionalCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributionDomainName"))
  {
    m_distributionDomainName = jsonValue.GetString("distributionDomainName");

    m_distributionDomainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distributionHostedZoneId"))
  {
    m_distributionHostedZoneId = jsonValue.GetString("distributionHostedZoneId");

    m_distributionHostedZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");

    m_endpointConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainName::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateUploadDateHasBeenSet)
  {
   payload.WithDouble("certificateUploadDate", m_certificateUploadDate.SecondsWithMSPrecision());
  }

  if(m_regionalDomainNameHasBeenSet)
  {
   payload.WithString("regionalDomainName", m_regionalDomainName);

  }

  if(m_regionalHostedZoneIdHasBeenSet)
  {
   payload.WithString("regionalHostedZoneId", m_regionalHostedZoneId);

  }

  if(m_regionalCertificateNameHasBeenSet)
  {
   payload.WithString("regionalCertificateName", m_regionalCertificateName);

  }

  if(m_regionalCertificateArnHasBeenSet)
  {
   payload.WithString("regionalCertificateArn", m_regionalCertificateArn);

  }

  if(m_distributionDomainNameHasBeenSet)
  {
   payload.WithString("distributionDomainName", m_distributionDomainName);

  }

  if(m_distributionHostedZoneIdHasBeenSet)
  {
   payload.WithString("distributionHostedZoneId", m_distributionHostedZoneId);

  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
