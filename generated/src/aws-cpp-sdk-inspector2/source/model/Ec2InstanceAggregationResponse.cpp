/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2InstanceAggregationResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

Ec2InstanceAggregationResponse::Ec2InstanceAggregationResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

Ec2InstanceAggregationResponse& Ec2InstanceAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ami"))
  {
    m_ami = jsonValue.GetString("ami");
    m_amiHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");
    m_operatingSystemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceTags"))
  {
    Aws::Map<Aws::String, JsonView> instanceTagsJsonMap = jsonValue.GetObject("instanceTags").GetAllObjects();
    for(auto& instanceTagsItem : instanceTagsJsonMap)
    {
      m_instanceTags[instanceTagsItem.first] = instanceTagsItem.second.AsString();
    }
    m_instanceTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkFindings"))
  {
    m_networkFindings = jsonValue.GetInt64("networkFindings");
    m_networkFindingsHasBeenSet = true;
  }
  return *this;
}

JsonValue Ec2InstanceAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_amiHasBeenSet)
  {
   payload.WithString("ami", m_ami);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_instanceTagsHasBeenSet)
  {
   JsonValue instanceTagsJsonMap;
   for(auto& instanceTagsItem : m_instanceTags)
   {
     instanceTagsJsonMap.WithString(instanceTagsItem.first, instanceTagsItem.second);
   }
   payload.WithObject("instanceTags", std::move(instanceTagsJsonMap));

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  if(m_networkFindingsHasBeenSet)
  {
   payload.WithInt64("networkFindings", m_networkFindings);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
