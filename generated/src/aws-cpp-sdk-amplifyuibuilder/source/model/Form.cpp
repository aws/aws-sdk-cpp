/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/Form.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

Form::Form() : 
    m_appIdHasBeenSet(false),
    m_ctaHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_formActionType(FormActionType::NOT_SET),
    m_formActionTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_sectionalElementsHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Form::Form(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_ctaHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_formActionType(FormActionType::NOT_SET),
    m_formActionTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_schemaVersionHasBeenSet(false),
    m_sectionalElementsHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Form& Form::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cta"))
  {
    m_cta = jsonValue.GetObject("cta");

    m_ctaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = jsonValue.GetObject("dataType");

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentName"))
  {
    m_environmentName = jsonValue.GetString("environmentName");

    m_environmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      m_fields[fieldsItem.first] = fieldsItem.second.AsObject();
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formActionType"))
  {
    m_formActionType = FormActionTypeMapper::GetFormActionTypeForName(jsonValue.GetString("formActionType"));

    m_formActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetString("schemaVersion");

    m_schemaVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sectionalElements"))
  {
    Aws::Map<Aws::String, JsonView> sectionalElementsJsonMap = jsonValue.GetObject("sectionalElements").GetAllObjects();
    for(auto& sectionalElementsItem : sectionalElementsJsonMap)
    {
      m_sectionalElements[sectionalElementsItem.first] = sectionalElementsItem.second.AsObject();
    }
    m_sectionalElementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("style"))
  {
    m_style = jsonValue.GetObject("style");

    m_styleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Form::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_ctaHasBeenSet)
  {
   payload.WithObject("cta", m_cta.Jsonize());

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithObject("dataType", m_dataType.Jsonize());

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

  }

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
   }
   payload.WithObject("fields", std::move(fieldsJsonMap));

  }

  if(m_formActionTypeHasBeenSet)
  {
   payload.WithString("formActionType", FormActionTypeMapper::GetNameForFormActionType(m_formActionType));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_schemaVersionHasBeenSet)
  {
   payload.WithString("schemaVersion", m_schemaVersion);

  }

  if(m_sectionalElementsHasBeenSet)
  {
   JsonValue sectionalElementsJsonMap;
   for(auto& sectionalElementsItem : m_sectionalElements)
   {
     sectionalElementsJsonMap.WithObject(sectionalElementsItem.first, sectionalElementsItem.second.Jsonize());
   }
   payload.WithObject("sectionalElements", std::move(sectionalElementsJsonMap));

  }

  if(m_styleHasBeenSet)
  {
   payload.WithObject("style", m_style.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
