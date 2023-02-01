/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/ProjectDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

ProjectDescription::ProjectDescription() : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_datasetsHasBeenSet(false)
{
}

ProjectDescription::ProjectDescription(JsonView jsonValue) : 
    m_projectArnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_datasetsHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectDescription& ProjectDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

    m_projectArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Datasets"))
  {
    Aws::Utils::Array<JsonView> datasetsJsonList = jsonValue.GetArray("Datasets");
    for(unsigned datasetsIndex = 0; datasetsIndex < datasetsJsonList.GetLength(); ++datasetsIndex)
    {
      m_datasets.push_back(datasetsJsonList[datasetsIndex].AsObject());
    }
    m_datasetsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("ProjectArn", m_projectArn);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("CreationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_datasetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasetsJsonList(m_datasets.size());
   for(unsigned datasetsIndex = 0; datasetsIndex < datasetsJsonList.GetLength(); ++datasetsIndex)
   {
     datasetsJsonList[datasetsIndex].AsObject(m_datasets[datasetsIndex].Jsonize());
   }
   payload.WithArray("Datasets", std::move(datasetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
