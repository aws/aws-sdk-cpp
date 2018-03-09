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

#include <aws/serverlessrepo/model/Version.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

Version::Version() : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_parameterDefinitionsHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
}

Version::Version(const JsonValue& jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_parameterDefinitionsHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false),
    m_templateUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Version& Version::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterDefinitions"))
  {
    Array<JsonValue> parameterDefinitionsJsonList = jsonValue.GetArray("parameterDefinitions");
    for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
    {
      m_parameterDefinitions.push_back(parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject());
    }
    m_parameterDefinitionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

    m_semanticVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeUrl"))
  {
    m_sourceCodeUrl = jsonValue.GetString("sourceCodeUrl");

    m_sourceCodeUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("templateUrl"))
  {
    m_templateUrl = jsonValue.GetString("templateUrl");

    m_templateUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Version::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime);

  }

  if(m_parameterDefinitionsHasBeenSet)
  {
   Array<JsonValue> parameterDefinitionsJsonList(m_parameterDefinitions.size());
   for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
   {
     parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject(m_parameterDefinitions[parameterDefinitionsIndex].Jsonize());
   }
   payload.WithArray("parameterDefinitions", std::move(parameterDefinitionsJsonList));

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  if(m_templateUrlHasBeenSet)
  {
   payload.WithString("templateUrl", m_templateUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
