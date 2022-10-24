/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksConfiguration::EksConfiguration() : 
    m_eksClusterArnHasBeenSet(false),
    m_kubernetesNamespaceHasBeenSet(false)
{
}

EksConfiguration::EksConfiguration(JsonView jsonValue) : 
    m_eksClusterArnHasBeenSet(false),
    m_kubernetesNamespaceHasBeenSet(false)
{
  *this = jsonValue;
}

EksConfiguration& EksConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksClusterArn"))
  {
    m_eksClusterArn = jsonValue.GetString("eksClusterArn");

    m_eksClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesNamespace"))
  {
    m_kubernetesNamespace = jsonValue.GetString("kubernetesNamespace");

    m_kubernetesNamespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue EksConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_eksClusterArnHasBeenSet)
  {
   payload.WithString("eksClusterArn", m_eksClusterArn);

  }

  if(m_kubernetesNamespaceHasBeenSet)
  {
   payload.WithString("kubernetesNamespace", m_kubernetesNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
