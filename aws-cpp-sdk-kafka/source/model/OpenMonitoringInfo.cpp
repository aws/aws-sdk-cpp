/*
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

#include <aws/kafka/model/OpenMonitoringInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

OpenMonitoringInfo::OpenMonitoringInfo() : 
    m_prometheusHasBeenSet(false)
{
}

OpenMonitoringInfo::OpenMonitoringInfo(JsonView jsonValue) : 
    m_prometheusHasBeenSet(false)
{
  *this = jsonValue;
}

OpenMonitoringInfo& OpenMonitoringInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prometheus"))
  {
    m_prometheus = jsonValue.GetObject("prometheus");

    m_prometheusHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenMonitoringInfo::Jsonize() const
{
  JsonValue payload;

  if(m_prometheusHasBeenSet)
  {
   payload.WithObject("prometheus", m_prometheus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
