/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/EventSourcesConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

EventSourcesConfig::EventSourcesConfig() : 
    m_amazonCodeGuruProfilerHasBeenSet(false)
{
}

EventSourcesConfig::EventSourcesConfig(JsonView jsonValue) : 
    m_amazonCodeGuruProfilerHasBeenSet(false)
{
  *this = jsonValue;
}

EventSourcesConfig& EventSourcesConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonCodeGuruProfiler"))
  {
    m_amazonCodeGuruProfiler = jsonValue.GetObject("AmazonCodeGuruProfiler");

    m_amazonCodeGuruProfilerHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSourcesConfig::Jsonize() const
{
  JsonValue payload;

  if(m_amazonCodeGuruProfilerHasBeenSet)
  {
   payload.WithObject("AmazonCodeGuruProfiler", m_amazonCodeGuruProfiler.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
