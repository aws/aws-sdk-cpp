/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AssessmentControl::AssessmentControl() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ControlStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_response(ControlResponse::NOT_SET),
    m_responseHasBeenSet(false),
    m_commentsHasBeenSet(false),
    m_evidenceSourcesHasBeenSet(false),
    m_evidenceCount(0),
    m_evidenceCountHasBeenSet(false),
    m_assessmentReportEvidenceCount(0),
    m_assessmentReportEvidenceCountHasBeenSet(false)
{
}

AssessmentControl::AssessmentControl(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ControlStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_response(ControlResponse::NOT_SET),
    m_responseHasBeenSet(false),
    m_commentsHasBeenSet(false),
    m_evidenceSourcesHasBeenSet(false),
    m_evidenceCount(0),
    m_evidenceCountHasBeenSet(false),
    m_assessmentReportEvidenceCount(0),
    m_assessmentReportEvidenceCountHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentControl& AssessmentControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ControlStatusMapper::GetControlStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("response"))
  {
    m_response = ControlResponseMapper::GetControlResponseForName(jsonValue.GetString("response"));

    m_responseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comments"))
  {
    Aws::Utils::Array<JsonView> commentsJsonList = jsonValue.GetArray("comments");
    for(unsigned commentsIndex = 0; commentsIndex < commentsJsonList.GetLength(); ++commentsIndex)
    {
      m_comments.push_back(commentsJsonList[commentsIndex].AsObject());
    }
    m_commentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceSources"))
  {
    Aws::Utils::Array<JsonView> evidenceSourcesJsonList = jsonValue.GetArray("evidenceSources");
    for(unsigned evidenceSourcesIndex = 0; evidenceSourcesIndex < evidenceSourcesJsonList.GetLength(); ++evidenceSourcesIndex)
    {
      m_evidenceSources.push_back(evidenceSourcesJsonList[evidenceSourcesIndex].AsString());
    }
    m_evidenceSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceCount"))
  {
    m_evidenceCount = jsonValue.GetInteger("evidenceCount");

    m_evidenceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentReportEvidenceCount"))
  {
    m_assessmentReportEvidenceCount = jsonValue.GetInteger("assessmentReportEvidenceCount");

    m_assessmentReportEvidenceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentControl::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ControlStatusMapper::GetNameForControlStatus(m_status));
  }

  if(m_responseHasBeenSet)
  {
   payload.WithString("response", ControlResponseMapper::GetNameForControlResponse(m_response));
  }

  if(m_commentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commentsJsonList(m_comments.size());
   for(unsigned commentsIndex = 0; commentsIndex < commentsJsonList.GetLength(); ++commentsIndex)
   {
     commentsJsonList[commentsIndex].AsObject(m_comments[commentsIndex].Jsonize());
   }
   payload.WithArray("comments", std::move(commentsJsonList));

  }

  if(m_evidenceSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evidenceSourcesJsonList(m_evidenceSources.size());
   for(unsigned evidenceSourcesIndex = 0; evidenceSourcesIndex < evidenceSourcesJsonList.GetLength(); ++evidenceSourcesIndex)
   {
     evidenceSourcesJsonList[evidenceSourcesIndex].AsString(m_evidenceSources[evidenceSourcesIndex]);
   }
   payload.WithArray("evidenceSources", std::move(evidenceSourcesJsonList));

  }

  if(m_evidenceCountHasBeenSet)
  {
   payload.WithInteger("evidenceCount", m_evidenceCount);

  }

  if(m_assessmentReportEvidenceCountHasBeenSet)
  {
   payload.WithInteger("assessmentReportEvidenceCount", m_assessmentReportEvidenceCount);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
