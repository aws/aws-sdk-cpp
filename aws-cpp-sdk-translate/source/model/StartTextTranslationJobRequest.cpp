/*
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

#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTextTranslationJobRequest::StartTextTranslationJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_inputDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_sourceLanguageCodeHasBeenSet(false),
    m_targetLanguageCodesHasBeenSet(false),
    m_terminologyNamesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartTextTranslationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_inputDataConfigHasBeenSet)
  {
   payload.WithObject("InputDataConfig", m_inputDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("OutputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_sourceLanguageCodeHasBeenSet)
  {
   payload.WithString("SourceLanguageCode", m_sourceLanguageCode);

  }

  if(m_targetLanguageCodesHasBeenSet)
  {
   Array<JsonValue> targetLanguageCodesJsonList(m_targetLanguageCodes.size());
   for(unsigned targetLanguageCodesIndex = 0; targetLanguageCodesIndex < targetLanguageCodesJsonList.GetLength(); ++targetLanguageCodesIndex)
   {
     targetLanguageCodesJsonList[targetLanguageCodesIndex].AsString(m_targetLanguageCodes[targetLanguageCodesIndex]);
   }
   payload.WithArray("TargetLanguageCodes", std::move(targetLanguageCodesJsonList));

  }

  if(m_terminologyNamesHasBeenSet)
  {
   Array<JsonValue> terminologyNamesJsonList(m_terminologyNames.size());
   for(unsigned terminologyNamesIndex = 0; terminologyNamesIndex < terminologyNamesJsonList.GetLength(); ++terminologyNamesIndex)
   {
     terminologyNamesJsonList[terminologyNamesIndex].AsString(m_terminologyNames[terminologyNamesIndex]);
   }
   payload.WithArray("TerminologyNames", std::move(terminologyNamesJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartTextTranslationJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShineFrontendService_20170701.StartTextTranslationJob"));
  return headers;

}




