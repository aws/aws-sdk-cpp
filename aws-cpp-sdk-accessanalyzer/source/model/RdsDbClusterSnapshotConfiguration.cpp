/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/RdsDbClusterSnapshotConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

RdsDbClusterSnapshotConfiguration::RdsDbClusterSnapshotConfiguration() : 
    m_attributesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

RdsDbClusterSnapshotConfiguration::RdsDbClusterSnapshotConfiguration(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

RdsDbClusterSnapshotConfiguration& RdsDbClusterSnapshotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsObject();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RdsDbClusterSnapshotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithObject(attributesItem.first, attributesItem.second.Jsonize());
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
