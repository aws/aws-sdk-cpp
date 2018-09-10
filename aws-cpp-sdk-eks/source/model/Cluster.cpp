﻿/*
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

#include <aws/eks/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Cluster::Cluster() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_status(ClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_platformVersionHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_status(ClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_platformVersionHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesVpcConfig"))
  {
    m_resourcesVpcConfig = jsonValue.GetObject("resourcesVpcConfig");

    m_resourcesVpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateAuthority"))
  {
    m_certificateAuthority = jsonValue.GetObject("certificateAuthority");

    m_certificateAuthorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_resourcesVpcConfigHasBeenSet)
  {
   payload.WithObject("resourcesVpcConfig", m_resourcesVpcConfig.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClusterStatusMapper::GetNameForClusterStatus(m_status));
  }

  if(m_certificateAuthorityHasBeenSet)
  {
   payload.WithObject("certificateAuthority", m_certificateAuthority.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
