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

#include <aws/quicksight/model/TemplateVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TemplateVersion::TemplateVersion() : 
    m_createdTimeHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataSetConfigurationsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceEntityArnHasBeenSet(false)
{
}

TemplateVersion::TemplateVersion(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_status(ResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataSetConfigurationsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceEntityArnHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateVersion& TemplateVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Errors"))
  {
    Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetConfigurations"))
  {
    Array<JsonView> dataSetConfigurationsJsonList = jsonValue.GetArray("DataSetConfigurations");
    for(unsigned dataSetConfigurationsIndex = 0; dataSetConfigurationsIndex < dataSetConfigurationsJsonList.GetLength(); ++dataSetConfigurationsIndex)
    {
      m_dataSetConfigurations.push_back(dataSetConfigurationsJsonList[dataSetConfigurationsIndex].AsObject());
    }
    m_dataSetConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceEntityArn"))
  {
    m_sourceEntityArn = jsonValue.GetString("SourceEntityArn");

    m_sourceEntityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateVersion::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_errorsHasBeenSet)
  {
   Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsObject(m_errors[errorsIndex].Jsonize());
   }
   payload.WithArray("Errors", std::move(errorsJsonList));

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_dataSetConfigurationsHasBeenSet)
  {
   Array<JsonValue> dataSetConfigurationsJsonList(m_dataSetConfigurations.size());
   for(unsigned dataSetConfigurationsIndex = 0; dataSetConfigurationsIndex < dataSetConfigurationsJsonList.GetLength(); ++dataSetConfigurationsIndex)
   {
     dataSetConfigurationsJsonList[dataSetConfigurationsIndex].AsObject(m_dataSetConfigurations[dataSetConfigurationsIndex].Jsonize());
   }
   payload.WithArray("DataSetConfigurations", std::move(dataSetConfigurationsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sourceEntityArnHasBeenSet)
  {
   payload.WithString("SourceEntityArn", m_sourceEntityArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
