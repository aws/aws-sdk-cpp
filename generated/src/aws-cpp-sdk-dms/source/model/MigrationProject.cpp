/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/MigrationProject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

MigrationProject::MigrationProject() : 
    m_migrationProjectNameHasBeenSet(false),
    m_migrationProjectArnHasBeenSet(false),
    m_migrationProjectCreationTimeHasBeenSet(false),
    m_sourceDataProviderDescriptorsHasBeenSet(false),
    m_targetDataProviderDescriptorsHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_transformationRulesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaConversionApplicationAttributesHasBeenSet(false)
{
}

MigrationProject::MigrationProject(JsonView jsonValue) : 
    m_migrationProjectNameHasBeenSet(false),
    m_migrationProjectArnHasBeenSet(false),
    m_migrationProjectCreationTimeHasBeenSet(false),
    m_sourceDataProviderDescriptorsHasBeenSet(false),
    m_targetDataProviderDescriptorsHasBeenSet(false),
    m_instanceProfileArnHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_transformationRulesHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaConversionApplicationAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

MigrationProject& MigrationProject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MigrationProjectName"))
  {
    m_migrationProjectName = jsonValue.GetString("MigrationProjectName");

    m_migrationProjectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationProjectArn"))
  {
    m_migrationProjectArn = jsonValue.GetString("MigrationProjectArn");

    m_migrationProjectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MigrationProjectCreationTime"))
  {
    m_migrationProjectCreationTime = jsonValue.GetString("MigrationProjectCreationTime");

    m_migrationProjectCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDataProviderDescriptors"))
  {
    Aws::Utils::Array<JsonView> sourceDataProviderDescriptorsJsonList = jsonValue.GetArray("SourceDataProviderDescriptors");
    for(unsigned sourceDataProviderDescriptorsIndex = 0; sourceDataProviderDescriptorsIndex < sourceDataProviderDescriptorsJsonList.GetLength(); ++sourceDataProviderDescriptorsIndex)
    {
      m_sourceDataProviderDescriptors.push_back(sourceDataProviderDescriptorsJsonList[sourceDataProviderDescriptorsIndex].AsObject());
    }
    m_sourceDataProviderDescriptorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDataProviderDescriptors"))
  {
    Aws::Utils::Array<JsonView> targetDataProviderDescriptorsJsonList = jsonValue.GetArray("TargetDataProviderDescriptors");
    for(unsigned targetDataProviderDescriptorsIndex = 0; targetDataProviderDescriptorsIndex < targetDataProviderDescriptorsJsonList.GetLength(); ++targetDataProviderDescriptorsIndex)
    {
      m_targetDataProviderDescriptors.push_back(targetDataProviderDescriptorsJsonList[targetDataProviderDescriptorsIndex].AsObject());
    }
    m_targetDataProviderDescriptorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileArn"))
  {
    m_instanceProfileArn = jsonValue.GetString("InstanceProfileArn");

    m_instanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileName"))
  {
    m_instanceProfileName = jsonValue.GetString("InstanceProfileName");

    m_instanceProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformationRules"))
  {
    m_transformationRules = jsonValue.GetString("TransformationRules");

    m_transformationRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaConversionApplicationAttributes"))
  {
    m_schemaConversionApplicationAttributes = jsonValue.GetObject("SchemaConversionApplicationAttributes");

    m_schemaConversionApplicationAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue MigrationProject::Jsonize() const
{
  JsonValue payload;

  if(m_migrationProjectNameHasBeenSet)
  {
   payload.WithString("MigrationProjectName", m_migrationProjectName);

  }

  if(m_migrationProjectArnHasBeenSet)
  {
   payload.WithString("MigrationProjectArn", m_migrationProjectArn);

  }

  if(m_migrationProjectCreationTimeHasBeenSet)
  {
   payload.WithString("MigrationProjectCreationTime", m_migrationProjectCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sourceDataProviderDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceDataProviderDescriptorsJsonList(m_sourceDataProviderDescriptors.size());
   for(unsigned sourceDataProviderDescriptorsIndex = 0; sourceDataProviderDescriptorsIndex < sourceDataProviderDescriptorsJsonList.GetLength(); ++sourceDataProviderDescriptorsIndex)
   {
     sourceDataProviderDescriptorsJsonList[sourceDataProviderDescriptorsIndex].AsObject(m_sourceDataProviderDescriptors[sourceDataProviderDescriptorsIndex].Jsonize());
   }
   payload.WithArray("SourceDataProviderDescriptors", std::move(sourceDataProviderDescriptorsJsonList));

  }

  if(m_targetDataProviderDescriptorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetDataProviderDescriptorsJsonList(m_targetDataProviderDescriptors.size());
   for(unsigned targetDataProviderDescriptorsIndex = 0; targetDataProviderDescriptorsIndex < targetDataProviderDescriptorsJsonList.GetLength(); ++targetDataProviderDescriptorsIndex)
   {
     targetDataProviderDescriptorsJsonList[targetDataProviderDescriptorsIndex].AsObject(m_targetDataProviderDescriptors[targetDataProviderDescriptorsIndex].Jsonize());
   }
   payload.WithArray("TargetDataProviderDescriptors", std::move(targetDataProviderDescriptorsJsonList));

  }

  if(m_instanceProfileArnHasBeenSet)
  {
   payload.WithString("InstanceProfileArn", m_instanceProfileArn);

  }

  if(m_instanceProfileNameHasBeenSet)
  {
   payload.WithString("InstanceProfileName", m_instanceProfileName);

  }

  if(m_transformationRulesHasBeenSet)
  {
   payload.WithString("TransformationRules", m_transformationRules);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_schemaConversionApplicationAttributesHasBeenSet)
  {
   payload.WithObject("SchemaConversionApplicationAttributes", m_schemaConversionApplicationAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
