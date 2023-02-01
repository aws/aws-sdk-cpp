/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/EngineConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

EngineConfiguration::EngineConfiguration() : 
    m_coordinatorDpuSize(0),
    m_coordinatorDpuSizeHasBeenSet(false),
    m_maxConcurrentDpus(0),
    m_maxConcurrentDpusHasBeenSet(false),
    m_defaultExecutorDpuSize(0),
    m_defaultExecutorDpuSizeHasBeenSet(false),
    m_additionalConfigsHasBeenSet(false)
{
}

EngineConfiguration::EngineConfiguration(JsonView jsonValue) : 
    m_coordinatorDpuSize(0),
    m_coordinatorDpuSizeHasBeenSet(false),
    m_maxConcurrentDpus(0),
    m_maxConcurrentDpusHasBeenSet(false),
    m_defaultExecutorDpuSize(0),
    m_defaultExecutorDpuSizeHasBeenSet(false),
    m_additionalConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

EngineConfiguration& EngineConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CoordinatorDpuSize"))
  {
    m_coordinatorDpuSize = jsonValue.GetInteger("CoordinatorDpuSize");

    m_coordinatorDpuSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxConcurrentDpus"))
  {
    m_maxConcurrentDpus = jsonValue.GetInteger("MaxConcurrentDpus");

    m_maxConcurrentDpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultExecutorDpuSize"))
  {
    m_defaultExecutorDpuSize = jsonValue.GetInteger("DefaultExecutorDpuSize");

    m_defaultExecutorDpuSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalConfigs"))
  {
    Aws::Map<Aws::String, JsonView> additionalConfigsJsonMap = jsonValue.GetObject("AdditionalConfigs").GetAllObjects();
    for(auto& additionalConfigsItem : additionalConfigsJsonMap)
    {
      m_additionalConfigs[additionalConfigsItem.first] = additionalConfigsItem.second.AsString();
    }
    m_additionalConfigsHasBeenSet = true;
  }

  return *this;
}

JsonValue EngineConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_coordinatorDpuSizeHasBeenSet)
  {
   payload.WithInteger("CoordinatorDpuSize", m_coordinatorDpuSize);

  }

  if(m_maxConcurrentDpusHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentDpus", m_maxConcurrentDpus);

  }

  if(m_defaultExecutorDpuSizeHasBeenSet)
  {
   payload.WithInteger("DefaultExecutorDpuSize", m_defaultExecutorDpuSize);

  }

  if(m_additionalConfigsHasBeenSet)
  {
   JsonValue additionalConfigsJsonMap;
   for(auto& additionalConfigsItem : m_additionalConfigs)
   {
     additionalConfigsJsonMap.WithString(additionalConfigsItem.first, additionalConfigsItem.second);
   }
   payload.WithObject("AdditionalConfigs", std::move(additionalConfigsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
