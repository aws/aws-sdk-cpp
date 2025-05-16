/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PersistentAppUI.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

PersistentAppUI::PersistentAppUI(JsonView jsonValue)
{
  *this = jsonValue;
}

PersistentAppUI& PersistentAppUI::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PersistentAppUIId"))
  {
    m_persistentAppUIId = jsonValue.GetString("PersistentAppUIId");
    m_persistentAppUIIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PersistentAppUITypeList"))
  {
    Aws::Utils::Array<JsonView> persistentAppUITypeListJsonList = jsonValue.GetArray("PersistentAppUITypeList");
    for(unsigned persistentAppUITypeListIndex = 0; persistentAppUITypeListIndex < persistentAppUITypeListJsonList.GetLength(); ++persistentAppUITypeListIndex)
    {
      m_persistentAppUITypeList.push_back(PersistentAppUITypeMapper::GetPersistentAppUITypeForName(persistentAppUITypeListJsonList[persistentAppUITypeListIndex].AsString()));
    }
    m_persistentAppUITypeListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PersistentAppUIStatus"))
  {
    m_persistentAppUIStatus = jsonValue.GetString("PersistentAppUIStatus");
    m_persistentAppUIStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorId"))
  {
    m_authorId = jsonValue.GetString("AuthorId");
    m_authorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastStateChangeReason"))
  {
    m_lastStateChangeReason = jsonValue.GetString("LastStateChangeReason");
    m_lastStateChangeReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue PersistentAppUI::Jsonize() const
{
  JsonValue payload;

  if(m_persistentAppUIIdHasBeenSet)
  {
   payload.WithString("PersistentAppUIId", m_persistentAppUIId);

  }

  if(m_persistentAppUITypeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> persistentAppUITypeListJsonList(m_persistentAppUITypeList.size());
   for(unsigned persistentAppUITypeListIndex = 0; persistentAppUITypeListIndex < persistentAppUITypeListJsonList.GetLength(); ++persistentAppUITypeListIndex)
   {
     persistentAppUITypeListJsonList[persistentAppUITypeListIndex].AsString(PersistentAppUITypeMapper::GetNameForPersistentAppUIType(m_persistentAppUITypeList[persistentAppUITypeListIndex]));
   }
   payload.WithArray("PersistentAppUITypeList", std::move(persistentAppUITypeListJsonList));

  }

  if(m_persistentAppUIStatusHasBeenSet)
  {
   payload.WithString("PersistentAppUIStatus", m_persistentAppUIStatus);

  }

  if(m_authorIdHasBeenSet)
  {
   payload.WithString("AuthorId", m_authorId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastStateChangeReasonHasBeenSet)
  {
   payload.WithString("LastStateChangeReason", m_lastStateChangeReason);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
