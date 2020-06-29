/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProcessingResources.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ProcessingResources::ProcessingResources() : 
    m_clusterConfigHasBeenSet(false)
{
}

ProcessingResources::ProcessingResources(JsonView jsonValue) : 
    m_clusterConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingResources& ProcessingResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterConfig"))
  {
    m_clusterConfig = jsonValue.GetObject("ClusterConfig");

    m_clusterConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingResources::Jsonize() const
{
  JsonValue payload;

  if(m_clusterConfigHasBeenSet)
  {
   payload.WithObject("ClusterConfig", m_clusterConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
