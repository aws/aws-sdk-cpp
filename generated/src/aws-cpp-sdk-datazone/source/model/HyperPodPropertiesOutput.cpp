/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/HyperPodPropertiesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

HyperPodPropertiesOutput::HyperPodPropertiesOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

HyperPodPropertiesOutput& HyperPodPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("orchestrator"))
  {
    m_orchestrator = HyperPodOrchestratorMapper::GetHyperPodOrchestratorForName(jsonValue.GetString("orchestrator"));
    m_orchestratorHasBeenSet = true;
  }
  return *this;
}

JsonValue HyperPodPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_orchestratorHasBeenSet)
  {
   payload.WithString("orchestrator", HyperPodOrchestratorMapper::GetNameForHyperPodOrchestrator(m_orchestrator));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
