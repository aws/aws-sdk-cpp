/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/JobData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

JobData::JobData() : 
    m_actionTypeIdHasBeenSet(false),
    m_actionConfigurationHasBeenSet(false),
    m_pipelineContextHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_artifactCredentialsHasBeenSet(false),
    m_continuationTokenHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
}

JobData::JobData(JsonView jsonValue) : 
    m_actionTypeIdHasBeenSet(false),
    m_actionConfigurationHasBeenSet(false),
    m_pipelineContextHasBeenSet(false),
    m_inputArtifactsHasBeenSet(false),
    m_outputArtifactsHasBeenSet(false),
    m_artifactCredentialsHasBeenSet(false),
    m_continuationTokenHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

JobData& JobData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionTypeId"))
  {
    m_actionTypeId = jsonValue.GetObject("actionTypeId");

    m_actionTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionConfiguration"))
  {
    m_actionConfiguration = jsonValue.GetObject("actionConfiguration");

    m_actionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineContext"))
  {
    m_pipelineContext = jsonValue.GetObject("pipelineContext");

    m_pipelineContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputArtifacts"))
  {
    Aws::Utils::Array<JsonView> inputArtifactsJsonList = jsonValue.GetArray("inputArtifacts");
    for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
    {
      m_inputArtifacts.push_back(inputArtifactsJsonList[inputArtifactsIndex].AsObject());
    }
    m_inputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputArtifacts"))
  {
    Aws::Utils::Array<JsonView> outputArtifactsJsonList = jsonValue.GetArray("outputArtifacts");
    for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
    {
      m_outputArtifacts.push_back(outputArtifactsJsonList[outputArtifactsIndex].AsObject());
    }
    m_outputArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactCredentials"))
  {
    m_artifactCredentials = jsonValue.GetObject("artifactCredentials");

    m_artifactCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continuationToken"))
  {
    m_continuationToken = jsonValue.GetString("continuationToken");

    m_continuationTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionKey"))
  {
    m_encryptionKey = jsonValue.GetObject("encryptionKey");

    m_encryptionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue JobData::Jsonize() const
{
  JsonValue payload;

  if(m_actionTypeIdHasBeenSet)
  {
   payload.WithObject("actionTypeId", m_actionTypeId.Jsonize());

  }

  if(m_actionConfigurationHasBeenSet)
  {
   payload.WithObject("actionConfiguration", m_actionConfiguration.Jsonize());

  }

  if(m_pipelineContextHasBeenSet)
  {
   payload.WithObject("pipelineContext", m_pipelineContext.Jsonize());

  }

  if(m_inputArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputArtifactsJsonList(m_inputArtifacts.size());
   for(unsigned inputArtifactsIndex = 0; inputArtifactsIndex < inputArtifactsJsonList.GetLength(); ++inputArtifactsIndex)
   {
     inputArtifactsJsonList[inputArtifactsIndex].AsObject(m_inputArtifacts[inputArtifactsIndex].Jsonize());
   }
   payload.WithArray("inputArtifacts", std::move(inputArtifactsJsonList));

  }

  if(m_outputArtifactsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputArtifactsJsonList(m_outputArtifacts.size());
   for(unsigned outputArtifactsIndex = 0; outputArtifactsIndex < outputArtifactsJsonList.GetLength(); ++outputArtifactsIndex)
   {
     outputArtifactsJsonList[outputArtifactsIndex].AsObject(m_outputArtifacts[outputArtifactsIndex].Jsonize());
   }
   payload.WithArray("outputArtifacts", std::move(outputArtifactsJsonList));

  }

  if(m_artifactCredentialsHasBeenSet)
  {
   payload.WithObject("artifactCredentials", m_artifactCredentials.Jsonize());

  }

  if(m_continuationTokenHasBeenSet)
  {
   payload.WithString("continuationToken", m_continuationToken);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithObject("encryptionKey", m_encryptionKey.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
