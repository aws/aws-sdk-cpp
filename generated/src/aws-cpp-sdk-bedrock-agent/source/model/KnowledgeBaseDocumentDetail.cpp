/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/KnowledgeBaseDocumentDetail.h>
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

KnowledgeBaseDocumentDetail::KnowledgeBaseDocumentDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

KnowledgeBaseDocumentDetail& KnowledgeBaseDocumentDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");
    m_dataSourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetObject("identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue KnowledgeBaseDocumentDetail::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("dataSourceId", m_dataSourceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DocumentStatusMapper::GetNameForDocumentStatus(m_status));
  }

  if(m_identifierHasBeenSet)
  {
   payload.WithObject("identifier", m_identifier.Jsonize());

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
