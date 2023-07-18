/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEksClusterDetails.h>
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

AwsEksClusterDetails::AwsEksClusterDetails() : 
    m_arnHasBeenSet(false),
    m_certificateAuthorityDataHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
}

AwsEksClusterDetails::AwsEksClusterDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_certificateAuthorityDataHasBeenSet(false),
    m_clusterStatusHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_loggingHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEksClusterDetails& AwsEksClusterDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CertificateAuthorityData"))
  {
    m_certificateAuthorityData = jsonValue.GetString("CertificateAuthorityData");

    m_certificateAuthorityDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterStatus"))
  {
    m_clusterStatus = jsonValue.GetString("ClusterStatus");

    m_clusterStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourcesVpcConfig"))
  {
    m_resourcesVpcConfig = jsonValue.GetObject("ResourcesVpcConfig");

    m_resourcesVpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logging"))
  {
    m_logging = jsonValue.GetObject("Logging");

    m_loggingHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEksClusterDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_certificateAuthorityDataHasBeenSet)
  {
   payload.WithString("CertificateAuthorityData", m_certificateAuthorityData);

  }

  if(m_clusterStatusHasBeenSet)
  {
   payload.WithString("ClusterStatus", m_clusterStatus);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_resourcesVpcConfigHasBeenSet)
  {
   payload.WithObject("ResourcesVpcConfig", m_resourcesVpcConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("Logging", m_logging.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
