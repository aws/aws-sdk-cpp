/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TemplatedMessageConfig.h>
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

TemplatedMessageConfig::TemplatedMessageConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplatedMessageConfig& TemplatedMessageConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KnowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("KnowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MessageTemplateId"))
  {
    m_messageTemplateId = jsonValue.GetString("MessageTemplateId");
    m_messageTemplateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateAttributes"))
  {
    m_templateAttributes = jsonValue.GetObject("TemplateAttributes");
    m_templateAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplatedMessageConfig::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("KnowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_messageTemplateIdHasBeenSet)
  {
   payload.WithString("MessageTemplateId", m_messageTemplateId);

  }

  if(m_templateAttributesHasBeenSet)
  {
   payload.WithObject("TemplateAttributes", m_templateAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
