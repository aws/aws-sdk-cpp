/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupSelection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupSelection::BackupSelection() : 
    m_selectionNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_listOfTagsHasBeenSet(false),
    m_notResourcesHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

BackupSelection::BackupSelection(JsonView jsonValue) : 
    m_selectionNameHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_listOfTagsHasBeenSet(false),
    m_notResourcesHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupSelection& BackupSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SelectionName"))
  {
    m_selectionName = jsonValue.GetString("SelectionName");

    m_selectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsString());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListOfTags"))
  {
    Aws::Utils::Array<JsonView> listOfTagsJsonList = jsonValue.GetArray("ListOfTags");
    for(unsigned listOfTagsIndex = 0; listOfTagsIndex < listOfTagsJsonList.GetLength(); ++listOfTagsIndex)
    {
      m_listOfTags.push_back(listOfTagsJsonList[listOfTagsIndex].AsObject());
    }
    m_listOfTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotResources"))
  {
    Aws::Utils::Array<JsonView> notResourcesJsonList = jsonValue.GetArray("NotResources");
    for(unsigned notResourcesIndex = 0; notResourcesIndex < notResourcesJsonList.GetLength(); ++notResourcesIndex)
    {
      m_notResources.push_back(notResourcesJsonList[notResourcesIndex].AsString());
    }
    m_notResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Conditions"))
  {
    m_conditions = jsonValue.GetObject("Conditions");

    m_conditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupSelection::Jsonize() const
{
  JsonValue payload;

  if(m_selectionNameHasBeenSet)
  {
   payload.WithString("SelectionName", m_selectionName);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsString(m_resources[resourcesIndex]);
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_listOfTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listOfTagsJsonList(m_listOfTags.size());
   for(unsigned listOfTagsIndex = 0; listOfTagsIndex < listOfTagsJsonList.GetLength(); ++listOfTagsIndex)
   {
     listOfTagsJsonList[listOfTagsIndex].AsObject(m_listOfTags[listOfTagsIndex].Jsonize());
   }
   payload.WithArray("ListOfTags", std::move(listOfTagsJsonList));

  }

  if(m_notResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notResourcesJsonList(m_notResources.size());
   for(unsigned notResourcesIndex = 0; notResourcesIndex < notResourcesJsonList.GetLength(); ++notResourcesIndex)
   {
     notResourcesJsonList[notResourcesIndex].AsString(m_notResources[notResourcesIndex]);
   }
   payload.WithArray("NotResources", std::move(notResourcesJsonList));

  }

  if(m_conditionsHasBeenSet)
  {
   payload.WithObject("Conditions", m_conditions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
