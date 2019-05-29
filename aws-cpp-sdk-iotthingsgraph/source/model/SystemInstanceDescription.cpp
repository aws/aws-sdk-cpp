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

#include <aws/iotthingsgraph/model/SystemInstanceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTThingsGraph
{
namespace Model
{

SystemInstanceDescription::SystemInstanceDescription() : 
    m_summaryHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_metricsConfigurationHasBeenSet(false),
    m_validatedNamespaceVersion(0),
    m_validatedNamespaceVersionHasBeenSet(false),
    m_validatedDependencyRevisionsHasBeenSet(false),
    m_flowActionsRoleArnHasBeenSet(false)
{
}

SystemInstanceDescription::SystemInstanceDescription(JsonView jsonValue) : 
    m_summaryHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false),
    m_metricsConfigurationHasBeenSet(false),
    m_validatedNamespaceVersion(0),
    m_validatedNamespaceVersionHasBeenSet(false),
    m_validatedDependencyRevisionsHasBeenSet(false),
    m_flowActionsRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

SystemInstanceDescription& SystemInstanceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetObject("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetObject("definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricsConfiguration"))
  {
    m_metricsConfiguration = jsonValue.GetObject("metricsConfiguration");

    m_metricsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validatedNamespaceVersion"))
  {
    m_validatedNamespaceVersion = jsonValue.GetInt64("validatedNamespaceVersion");

    m_validatedNamespaceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validatedDependencyRevisions"))
  {
    Array<JsonView> validatedDependencyRevisionsJsonList = jsonValue.GetArray("validatedDependencyRevisions");
    for(unsigned validatedDependencyRevisionsIndex = 0; validatedDependencyRevisionsIndex < validatedDependencyRevisionsJsonList.GetLength(); ++validatedDependencyRevisionsIndex)
    {
      m_validatedDependencyRevisions.push_back(validatedDependencyRevisionsJsonList[validatedDependencyRevisionsIndex].AsObject());
    }
    m_validatedDependencyRevisionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flowActionsRoleArn"))
  {
    m_flowActionsRoleArn = jsonValue.GetString("flowActionsRoleArn");

    m_flowActionsRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemInstanceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_summaryHasBeenSet)
  {
   payload.WithObject("summary", m_summary.Jsonize());

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("definition", m_definition.Jsonize());

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_metricsConfigurationHasBeenSet)
  {
   payload.WithObject("metricsConfiguration", m_metricsConfiguration.Jsonize());

  }

  if(m_validatedNamespaceVersionHasBeenSet)
  {
   payload.WithInt64("validatedNamespaceVersion", m_validatedNamespaceVersion);

  }

  if(m_validatedDependencyRevisionsHasBeenSet)
  {
   Array<JsonValue> validatedDependencyRevisionsJsonList(m_validatedDependencyRevisions.size());
   for(unsigned validatedDependencyRevisionsIndex = 0; validatedDependencyRevisionsIndex < validatedDependencyRevisionsJsonList.GetLength(); ++validatedDependencyRevisionsIndex)
   {
     validatedDependencyRevisionsJsonList[validatedDependencyRevisionsIndex].AsObject(m_validatedDependencyRevisions[validatedDependencyRevisionsIndex].Jsonize());
   }
   payload.WithArray("validatedDependencyRevisions", std::move(validatedDependencyRevisionsJsonList));

  }

  if(m_flowActionsRoleArnHasBeenSet)
  {
   payload.WithString("flowActionsRoleArn", m_flowActionsRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
