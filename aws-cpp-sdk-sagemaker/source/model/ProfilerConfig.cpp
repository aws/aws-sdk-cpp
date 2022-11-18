/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProfilerConfig.h>
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

ProfilerConfig::ProfilerConfig() : 
    m_s3OutputPathHasBeenSet(false),
    m_profilingIntervalInMilliseconds(0),
    m_profilingIntervalInMillisecondsHasBeenSet(false),
    m_profilingParametersHasBeenSet(false),
    m_disableProfiler(false),
    m_disableProfilerHasBeenSet(false)
{
}

ProfilerConfig::ProfilerConfig(JsonView jsonValue) : 
    m_s3OutputPathHasBeenSet(false),
    m_profilingIntervalInMilliseconds(0),
    m_profilingIntervalInMillisecondsHasBeenSet(false),
    m_profilingParametersHasBeenSet(false),
    m_disableProfiler(false),
    m_disableProfilerHasBeenSet(false)
{
  *this = jsonValue;
}

ProfilerConfig& ProfilerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputPath"))
  {
    m_s3OutputPath = jsonValue.GetString("S3OutputPath");

    m_s3OutputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfilingIntervalInMilliseconds"))
  {
    m_profilingIntervalInMilliseconds = jsonValue.GetInt64("ProfilingIntervalInMilliseconds");

    m_profilingIntervalInMillisecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfilingParameters"))
  {
    Aws::Map<Aws::String, JsonView> profilingParametersJsonMap = jsonValue.GetObject("ProfilingParameters").GetAllObjects();
    for(auto& profilingParametersItem : profilingParametersJsonMap)
    {
      m_profilingParameters[profilingParametersItem.first] = profilingParametersItem.second.AsString();
    }
    m_profilingParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableProfiler"))
  {
    m_disableProfiler = jsonValue.GetBool("DisableProfiler");

    m_disableProfilerHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfilerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputPathHasBeenSet)
  {
   payload.WithString("S3OutputPath", m_s3OutputPath);

  }

  if(m_profilingIntervalInMillisecondsHasBeenSet)
  {
   payload.WithInt64("ProfilingIntervalInMilliseconds", m_profilingIntervalInMilliseconds);

  }

  if(m_profilingParametersHasBeenSet)
  {
   JsonValue profilingParametersJsonMap;
   for(auto& profilingParametersItem : m_profilingParameters)
   {
     profilingParametersJsonMap.WithString(profilingParametersItem.first, profilingParametersItem.second);
   }
   payload.WithObject("ProfilingParameters", std::move(profilingParametersJsonMap));

  }

  if(m_disableProfilerHasBeenSet)
  {
   payload.WithBool("DisableProfiler", m_disableProfiler);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
