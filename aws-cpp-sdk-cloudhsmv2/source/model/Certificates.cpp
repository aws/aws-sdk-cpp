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

#include <aws/cloudhsmv2/model/Certificates.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

Certificates::Certificates() : 
    m_clusterCsrHasBeenSet(false),
    m_hsmCertificateHasBeenSet(false),
    m_awsHardwareCertificateHasBeenSet(false),
    m_manufacturerHardwareCertificateHasBeenSet(false),
    m_clusterCertificateHasBeenSet(false)
{
}

Certificates::Certificates(const JsonValue& jsonValue) : 
    m_clusterCsrHasBeenSet(false),
    m_hsmCertificateHasBeenSet(false),
    m_awsHardwareCertificateHasBeenSet(false),
    m_manufacturerHardwareCertificateHasBeenSet(false),
    m_clusterCertificateHasBeenSet(false)
{
  *this = jsonValue;
}

Certificates& Certificates::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ClusterCsr"))
  {
    m_clusterCsr = jsonValue.GetString("ClusterCsr");

    m_clusterCsrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HsmCertificate"))
  {
    m_hsmCertificate = jsonValue.GetString("HsmCertificate");

    m_hsmCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsHardwareCertificate"))
  {
    m_awsHardwareCertificate = jsonValue.GetString("AwsHardwareCertificate");

    m_awsHardwareCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManufacturerHardwareCertificate"))
  {
    m_manufacturerHardwareCertificate = jsonValue.GetString("ManufacturerHardwareCertificate");

    m_manufacturerHardwareCertificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterCertificate"))
  {
    m_clusterCertificate = jsonValue.GetString("ClusterCertificate");

    m_clusterCertificateHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificates::Jsonize() const
{
  JsonValue payload;

  if(m_clusterCsrHasBeenSet)
  {
   payload.WithString("ClusterCsr", m_clusterCsr);

  }

  if(m_hsmCertificateHasBeenSet)
  {
   payload.WithString("HsmCertificate", m_hsmCertificate);

  }

  if(m_awsHardwareCertificateHasBeenSet)
  {
   payload.WithString("AwsHardwareCertificate", m_awsHardwareCertificate);

  }

  if(m_manufacturerHardwareCertificateHasBeenSet)
  {
   payload.WithString("ManufacturerHardwareCertificate", m_manufacturerHardwareCertificate);

  }

  if(m_clusterCertificateHasBeenSet)
  {
   payload.WithString("ClusterCertificate", m_clusterCertificate);

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
