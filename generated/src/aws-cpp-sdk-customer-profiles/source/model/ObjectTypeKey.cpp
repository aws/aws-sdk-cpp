/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ObjectTypeKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ObjectTypeKey::ObjectTypeKey() : 
    m_standardIdentifiersHasBeenSet(false),
    m_fieldNamesHasBeenSet(false)
{
}

ObjectTypeKey::ObjectTypeKey(JsonView jsonValue) : 
    m_standardIdentifiersHasBeenSet(false),
    m_fieldNamesHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectTypeKey& ObjectTypeKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StandardIdentifiers"))
  {
    Aws::Utils::Array<JsonView> standardIdentifiersJsonList = jsonValue.GetArray("StandardIdentifiers");
    for(unsigned standardIdentifiersIndex = 0; standardIdentifiersIndex < standardIdentifiersJsonList.GetLength(); ++standardIdentifiersIndex)
    {
      m_standardIdentifiers.push_back(StandardIdentifierMapper::GetStandardIdentifierForName(standardIdentifiersJsonList[standardIdentifiersIndex].AsString()));
    }
    m_standardIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldNames"))
  {
    Aws::Utils::Array<JsonView> fieldNamesJsonList = jsonValue.GetArray("FieldNames");
    for(unsigned fieldNamesIndex = 0; fieldNamesIndex < fieldNamesJsonList.GetLength(); ++fieldNamesIndex)
    {
      m_fieldNames.push_back(fieldNamesJsonList[fieldNamesIndex].AsString());
    }
    m_fieldNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectTypeKey::Jsonize() const
{
  JsonValue payload;

  if(m_standardIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> standardIdentifiersJsonList(m_standardIdentifiers.size());
   for(unsigned standardIdentifiersIndex = 0; standardIdentifiersIndex < standardIdentifiersJsonList.GetLength(); ++standardIdentifiersIndex)
   {
     standardIdentifiersJsonList[standardIdentifiersIndex].AsString(StandardIdentifierMapper::GetNameForStandardIdentifier(m_standardIdentifiers[standardIdentifiersIndex]));
   }
   payload.WithArray("StandardIdentifiers", std::move(standardIdentifiersJsonList));

  }

  if(m_fieldNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldNamesJsonList(m_fieldNames.size());
   for(unsigned fieldNamesIndex = 0; fieldNamesIndex < fieldNamesJsonList.GetLength(); ++fieldNamesIndex)
   {
     fieldNamesJsonList[fieldNamesIndex].AsString(m_fieldNames[fieldNamesIndex]);
   }
   payload.WithArray("FieldNames", std::move(fieldNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
