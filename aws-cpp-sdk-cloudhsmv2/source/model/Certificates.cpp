/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Certificates::Certificates(JsonView jsonValue) : 
    m_clusterCsrHasBeenSet(false),
    m_hsmCertificateHasBeenSet(false),
    m_awsHardwareCertificateHasBeenSet(false),
    m_manufacturerHardwareCertificateHasBeenSet(false),
    m_clusterCertificateHasBeenSet(false)
{
  *this = jsonValue;
}

Certificates& Certificates::operator =(JsonView jsonValue)
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
