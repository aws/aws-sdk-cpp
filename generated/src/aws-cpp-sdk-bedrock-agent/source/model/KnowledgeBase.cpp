/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

KnowledgeBase::KnowledgeBase() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_knowledgeBaseConfigurationHasBeenSet(false),
    m_storageConfigurationHasBeenSet(false),
    m_status(KnowledgeBaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
}

KnowledgeBase::KnowledgeBase(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_knowledgeBaseArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_knowledgeBaseConfigurationHasBeenSet(false),
    m_storageConfigurationHasBeenSet(false),
    m_status(KnowledgeBaseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_failureReasonsHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBase& KnowledgeBase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseArn"))
  {
    m_knowledgeBaseArn = jsonValue.GetString("knowledgeBaseArn");

    m_knowledgeBaseArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseConfiguration"))
  {
    m_knowledgeBaseConfiguration = jsonValue.GetObject("knowledgeBaseConfiguration");

    m_knowledgeBaseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageConfiguration"))
  {
    m_storageConfiguration = jsonValue.GetObject("storageConfiguration");

    m_storageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KnowledgeBaseStatusMapper::GetKnowledgeBaseStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
    m_failureReasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBase::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_knowledgeBaseArnHasBeenSet)
  {
   payload.WithString("knowledgeBaseArn", m_knowledgeBaseArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_knowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());

  }

  if(m_storageConfigurationHasBeenSet)
  {
   payload.WithObject("storageConfiguration", m_storageConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KnowledgeBaseStatusMapper::GetNameForKnowledgeBaseStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_failureReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> failureReasonsJsonList(m_failureReasons.size());
   for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
   {
     failureReasonsJsonList[failureReasonsIndex].AsString(m_failureReasons[failureReasonsIndex]);
   }
   payload.WithArray("failureReasons", std::move(failureReasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
