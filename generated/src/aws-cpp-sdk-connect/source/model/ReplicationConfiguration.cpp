/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ReplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ReplicationConfiguration::ReplicationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationConfiguration& ReplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationStatusSummaryList"))
  {
    Aws::Utils::Array<JsonView> replicationStatusSummaryListJsonList = jsonValue.GetArray("ReplicationStatusSummaryList");
    for(unsigned replicationStatusSummaryListIndex = 0; replicationStatusSummaryListIndex < replicationStatusSummaryListJsonList.GetLength(); ++replicationStatusSummaryListIndex)
    {
      m_replicationStatusSummaryList.push_back(replicationStatusSummaryListJsonList[replicationStatusSummaryListIndex].AsObject());
    }
    m_replicationStatusSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("SourceRegion");
    m_sourceRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GlobalSignInEndpoint"))
  {
    m_globalSignInEndpoint = jsonValue.GetString("GlobalSignInEndpoint");
    m_globalSignInEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_replicationStatusSummaryListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationStatusSummaryListJsonList(m_replicationStatusSummaryList.size());
   for(unsigned replicationStatusSummaryListIndex = 0; replicationStatusSummaryListIndex < replicationStatusSummaryListJsonList.GetLength(); ++replicationStatusSummaryListIndex)
   {
     replicationStatusSummaryListJsonList[replicationStatusSummaryListIndex].AsObject(m_replicationStatusSummaryList[replicationStatusSummaryListIndex].Jsonize());
   }
   payload.WithArray("ReplicationStatusSummaryList", std::move(replicationStatusSummaryListJsonList));

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

  }

  if(m_globalSignInEndpointHasBeenSet)
  {
   payload.WithString("GlobalSignInEndpoint", m_globalSignInEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
