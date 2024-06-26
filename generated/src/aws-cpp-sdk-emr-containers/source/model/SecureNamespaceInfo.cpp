﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/SecureNamespaceInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

SecureNamespaceInfo::SecureNamespaceInfo() : 
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

SecureNamespaceInfo::SecureNamespaceInfo(JsonView jsonValue)
  : SecureNamespaceInfo()
{
  *this = jsonValue;
}

SecureNamespaceInfo& SecureNamespaceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterId"))
  {
    m_clusterId = jsonValue.GetString("clusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue SecureNamespaceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("clusterId", m_clusterId);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
