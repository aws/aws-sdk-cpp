/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codebuild/model/StartBuildRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartBuildRequest::StartBuildRequest() : 
    m_projectNameHasBeenSet(false),
    m_sourceVersionHasBeenSet(false),
    m_artifactsOverrideHasBeenSet(false),
    m_environmentVariablesOverrideHasBeenSet(false),
    m_buildspecOverrideHasBeenSet(false),
    m_timeoutInMinutesOverride(0),
    m_timeoutInMinutesOverrideHasBeenSet(false)
{
}

Aws::String StartBuildRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_artifactsOverrideHasBeenSet)
  {
   payload.WithObject("artifactsOverride", m_artifactsOverride.Jsonize());

  }

  if(m_environmentVariablesOverrideHasBeenSet)
  {
   Array<JsonValue> environmentVariablesOverrideJsonList(m_environmentVariablesOverride.size());
   for(unsigned environmentVariablesOverrideIndex = 0; environmentVariablesOverrideIndex < environmentVariablesOverrideJsonList.GetLength(); ++environmentVariablesOverrideIndex)
   {
     environmentVariablesOverrideJsonList[environmentVariablesOverrideIndex].AsObject(m_environmentVariablesOverride[environmentVariablesOverrideIndex].Jsonize());
   }
   payload.WithArray("environmentVariablesOverride", std::move(environmentVariablesOverrideJsonList));

  }

  if(m_buildspecOverrideHasBeenSet)
  {
   payload.WithString("buildspecOverride", m_buildspecOverride);

  }

  if(m_timeoutInMinutesOverrideHasBeenSet)
  {
   payload.WithInteger("timeoutInMinutesOverride", m_timeoutInMinutesOverride);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartBuildRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.StartBuild"));
  return headers;

}




