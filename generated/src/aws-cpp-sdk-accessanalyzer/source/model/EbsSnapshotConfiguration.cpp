/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/EbsSnapshotConfiguration.h>
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

EbsSnapshotConfiguration::EbsSnapshotConfiguration() : 
    m_userIdsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

EbsSnapshotConfiguration::EbsSnapshotConfiguration(JsonView jsonValue) : 
    m_userIdsHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

EbsSnapshotConfiguration& EbsSnapshotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userIds"))
  {
    Aws::Utils::Array<JsonView> userIdsJsonList = jsonValue.GetArray("userIds");
    for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
    {
      m_userIds.push_back(userIdsJsonList[userIdsIndex].AsString());
    }
    m_userIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue EbsSnapshotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_userIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userIdsJsonList(m_userIds.size());
   for(unsigned userIdsIndex = 0; userIdsIndex < userIdsJsonList.GetLength(); ++userIdsIndex)
   {
     userIdsJsonList[userIdsIndex].AsString(m_userIds[userIdsIndex]);
   }
   payload.WithArray("userIds", std::move(userIdsJsonList));

  }

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsString(m_groups[groupsIndex]);
   }
   payload.WithArray("groups", std::move(groupsJsonList));

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
