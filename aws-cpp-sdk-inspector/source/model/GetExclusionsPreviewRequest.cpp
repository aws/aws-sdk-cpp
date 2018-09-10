﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/inspector/model/GetExclusionsPreviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetExclusionsPreviewRequest::GetExclusionsPreviewRequest() : 
    m_assessmentTemplateArnHasBeenSet(false),
    m_previewTokenHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_locale(Locale::NOT_SET),
    m_localeHasBeenSet(false)
{
}

Aws::String GetExclusionsPreviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentTemplateArnHasBeenSet)
  {
   payload.WithString("assessmentTemplateArn", m_assessmentTemplateArn);

  }

  if(m_previewTokenHasBeenSet)
  {
   payload.WithString("previewToken", m_previewToken);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", LocaleMapper::GetNameForLocale(m_locale));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetExclusionsPreviewRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.GetExclusionsPreview"));
  return headers;

}




