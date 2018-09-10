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

#include <aws/ssm/model/MaintenanceWindowRunCommandParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowRunCommandParameters::MaintenanceWindowRunCommandParameters() : 
    m_commentHasBeenSet(false),
    m_documentHashHasBeenSet(false),
    m_documentHashType(DocumentHashType::NOT_SET),
    m_documentHashTypeHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
}

MaintenanceWindowRunCommandParameters::MaintenanceWindowRunCommandParameters(JsonView jsonValue) : 
    m_commentHasBeenSet(false),
    m_documentHashHasBeenSet(false),
    m_documentHashType(DocumentHashType::NOT_SET),
    m_documentHashTypeHasBeenSet(false),
    m_notificationConfigHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_serviceRoleArnHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowRunCommandParameters& MaintenanceWindowRunCommandParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentHash"))
  {
    m_documentHash = jsonValue.GetString("DocumentHash");

    m_documentHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentHashType"))
  {
    m_documentHashType = DocumentHashTypeMapper::GetDocumentHashTypeForName(jsonValue.GetString("DocumentHashType"));

    m_documentHashTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationConfig"))
  {
    m_notificationConfig = jsonValue.GetObject("NotificationConfig");

    m_notificationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("OutputS3BucketName");

    m_outputS3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3KeyPrefix"))
  {
    m_outputS3KeyPrefix = jsonValue.GetString("OutputS3KeyPrefix");

    m_outputS3KeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Map<Aws::String, JsonView> parametersJsonMap = jsonValue.GetObject("Parameters").GetAllObjects();
    for(auto& parametersItem : parametersJsonMap)
    {
      Array<JsonView> parameterValueListJsonList = parametersItem.second.AsArray();
      Aws::Vector<Aws::String> parameterValueListList;
      parameterValueListList.reserve((size_t)parameterValueListJsonList.GetLength());
      for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
      {
        parameterValueListList.push_back(parameterValueListJsonList[parameterValueListIndex].AsString());
      }
      m_parameters[parametersItem.first] = std::move(parameterValueListList);
    }
    m_parametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRoleArn"))
  {
    m_serviceRoleArn = jsonValue.GetString("ServiceRoleArn");

    m_serviceRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("TimeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowRunCommandParameters::Jsonize() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_documentHashHasBeenSet)
  {
   payload.WithString("DocumentHash", m_documentHash);

  }

  if(m_documentHashTypeHasBeenSet)
  {
   payload.WithString("DocumentHashType", DocumentHashTypeMapper::GetNameForDocumentHashType(m_documentHashType));
  }

  if(m_notificationConfigHasBeenSet)
  {
   payload.WithObject("NotificationConfig", m_notificationConfig.Jsonize());

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     Array<JsonValue> parameterValueListJsonList(parametersItem.second.size());
     for(unsigned parameterValueListIndex = 0; parameterValueListIndex < parameterValueListJsonList.GetLength(); ++parameterValueListIndex)
     {
       parameterValueListJsonList[parameterValueListIndex].AsString(parametersItem.second[parameterValueListIndex]);
     }
     parametersJsonMap.WithArray(parametersItem.first, std::move(parameterValueListJsonList));
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_serviceRoleArnHasBeenSet)
  {
   payload.WithString("ServiceRoleArn", m_serviceRoleArn);

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutSeconds", m_timeoutSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
