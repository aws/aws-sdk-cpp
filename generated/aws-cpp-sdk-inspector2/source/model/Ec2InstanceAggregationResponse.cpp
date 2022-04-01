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

Ec2InstanceAggregationResponse::Ec2InstanceAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_amiHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_networkFindings(0),
    m_networkFindingsHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

Ec2InstanceAggregationResponse::Ec2InstanceAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_amiHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceTagsHasBeenSet(false),
    m_networkFindings(0),
    m_networkFindingsHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2InstanceAggregationResponse& Ec2InstanceAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ami"))
  {
    m_ami = jsonValue.GetString("ami");

    m_amiHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("networkFindings"))
  {
    m_networkFindings = jsonValue.GetInt64("networkFindings");

    m_networkFindingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2InstanceAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_amiHasBeenSet)
  {
   payload.WithString("ami", m_ami);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

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

  if(m_networkFindingsHasBeenSet)
  {
   payload.WithInt64("networkFindings", m_networkFindings);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
