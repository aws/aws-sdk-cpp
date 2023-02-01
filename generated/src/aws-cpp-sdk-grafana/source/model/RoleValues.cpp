/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/RoleValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

RoleValues::RoleValues() : 
    m_adminHasBeenSet(false),
    m_editorHasBeenSet(false)
{
}

RoleValues::RoleValues(JsonView jsonValue) : 
    m_adminHasBeenSet(false),
    m_editorHasBeenSet(false)
{
  *this = jsonValue;
}

RoleValues& RoleValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("admin"))
  {
    Aws::Utils::Array<JsonView> adminJsonList = jsonValue.GetArray("admin");
    for(unsigned adminIndex = 0; adminIndex < adminJsonList.GetLength(); ++adminIndex)
    {
      m_admin.push_back(adminJsonList[adminIndex].AsString());
    }
    m_adminHasBeenSet = true;
  }

  if(jsonValue.ValueExists("editor"))
  {
    Aws::Utils::Array<JsonView> editorJsonList = jsonValue.GetArray("editor");
    for(unsigned editorIndex = 0; editorIndex < editorJsonList.GetLength(); ++editorIndex)
    {
      m_editor.push_back(editorJsonList[editorIndex].AsString());
    }
    m_editorHasBeenSet = true;
  }

  return *this;
}

JsonValue RoleValues::Jsonize() const
{
  JsonValue payload;

  if(m_adminHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adminJsonList(m_admin.size());
   for(unsigned adminIndex = 0; adminIndex < adminJsonList.GetLength(); ++adminIndex)
   {
     adminJsonList[adminIndex].AsString(m_admin[adminIndex]);
   }
   payload.WithArray("admin", std::move(adminJsonList));

  }

  if(m_editorHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> editorJsonList(m_editor.size());
   for(unsigned editorIndex = 0; editorIndex < editorJsonList.GetLength(); ++editorIndex)
   {
     editorJsonList[editorIndex].AsString(m_editor[editorIndex]);
   }
   payload.WithArray("editor", std::move(editorJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
