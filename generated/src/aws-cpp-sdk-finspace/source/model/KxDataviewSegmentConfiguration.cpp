﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDataviewSegmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDataviewSegmentConfiguration::KxDataviewSegmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KxDataviewSegmentConfiguration& KxDataviewSegmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbPaths"))
  {
    Aws::Utils::Array<JsonView> dbPathsJsonList = jsonValue.GetArray("dbPaths");
    for(unsigned dbPathsIndex = 0; dbPathsIndex < dbPathsJsonList.GetLength(); ++dbPathsIndex)
    {
      m_dbPaths.push_back(dbPathsJsonList[dbPathsIndex].AsString());
    }
    m_dbPathsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumeName"))
  {
    m_volumeName = jsonValue.GetString("volumeName");
    m_volumeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onDemand"))
  {
    m_onDemand = jsonValue.GetBool("onDemand");
    m_onDemandHasBeenSet = true;
  }
  return *this;
}

JsonValue KxDataviewSegmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dbPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbPathsJsonList(m_dbPaths.size());
   for(unsigned dbPathsIndex = 0; dbPathsIndex < dbPathsJsonList.GetLength(); ++dbPathsIndex)
   {
     dbPathsJsonList[dbPathsIndex].AsString(m_dbPaths[dbPathsIndex]);
   }
   payload.WithArray("dbPaths", std::move(dbPathsJsonList));

  }

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("volumeName", m_volumeName);

  }

  if(m_onDemandHasBeenSet)
  {
   payload.WithBool("onDemand", m_onDemand);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
