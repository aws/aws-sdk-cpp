/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_attachmentsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_farmIdHasBeenSet(false),
    m_maxFailedTasksCount(0),
    m_maxFailedTasksCountHasBeenSet(false),
    m_maxRetriesPerTask(0),
    m_maxRetriesPerTaskHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_storageProfileIdHasBeenSet(false),
    m_targetTaskRunStatus(CreateJobTargetTaskRunStatus::NOT_SET),
    m_targetTaskRunStatusHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_templateType(JobTemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentsHasBeenSet)
  {
   payload.WithObject("attachments", m_attachments.Jsonize());

  }

  if(m_maxFailedTasksCountHasBeenSet)
  {
   payload.WithInteger("maxFailedTasksCount", m_maxFailedTasksCount);

  }

  if(m_maxRetriesPerTaskHasBeenSet)
  {
   payload.WithInteger("maxRetriesPerTask", m_maxRetriesPerTask);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_storageProfileIdHasBeenSet)
  {
   payload.WithString("storageProfileId", m_storageProfileId);

  }

  if(m_targetTaskRunStatusHasBeenSet)
  {
   payload.WithString("targetTaskRunStatus", CreateJobTargetTaskRunStatusMapper::GetNameForCreateJobTargetTaskRunStatus(m_targetTaskRunStatus));
  }

  if(m_templateHasBeenSet)
  {
   payload.WithString("template", m_template);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("templateType", JobTemplateTypeMapper::GetNameForJobTemplateType(m_templateType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




