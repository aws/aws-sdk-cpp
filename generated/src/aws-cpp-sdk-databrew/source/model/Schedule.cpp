/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Schedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Schedule::Schedule() : 
    m_accountIdHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_jobNamesHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Schedule::Schedule(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_jobNamesHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_cronExpressionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Schedule& Schedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobNames"))
  {
    Aws::Utils::Array<JsonView> jobNamesJsonList = jsonValue.GetArray("JobNames");
    for(unsigned jobNamesIndex = 0; jobNamesIndex < jobNamesJsonList.GetLength(); ++jobNamesIndex)
    {
      m_jobNames.push_back(jobNamesJsonList[jobNamesIndex].AsString());
    }
    m_jobNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CronExpression"))
  {
    m_cronExpression = jsonValue.GetString("CronExpression");

    m_cronExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Schedule::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("CreatedBy", m_createdBy);

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  if(m_jobNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobNamesJsonList(m_jobNames.size());
   for(unsigned jobNamesIndex = 0; jobNamesIndex < jobNamesJsonList.GetLength(); ++jobNamesIndex)
   {
     jobNamesJsonList[jobNamesIndex].AsString(m_jobNames[jobNamesIndex]);
   }
   payload.WithArray("JobNames", std::move(jobNamesJsonList));

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_cronExpressionHasBeenSet)
  {
   payload.WithString("CronExpression", m_cronExpression);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
