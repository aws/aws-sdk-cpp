/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/ActionParameters.h>
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

ActionParameters::ActionParameters() : 
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_anchorHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_globalHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

ActionParameters::ActionParameters(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_anchorHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_globalHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

ActionParameters& ActionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetObject("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetObject("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("anchor"))
  {
    m_anchor = jsonValue.GetObject("anchor");

    m_anchorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("global"))
  {
    m_global = jsonValue.GetObject("global");

    m_globalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("model"))
  {
    m_model = jsonValue.GetString("model");

    m_modelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetObject("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("type", m_type.Jsonize());

  }

  if(m_urlHasBeenSet)
  {
   payload.WithObject("url", m_url.Jsonize());

  }

  if(m_anchorHasBeenSet)
  {
   payload.WithObject("anchor", m_anchor.Jsonize());

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_globalHasBeenSet)
  {
   payload.WithObject("global", m_global.Jsonize());

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("model", m_model);

  }

  if(m_idHasBeenSet)
  {
   payload.WithObject("id", m_id.Jsonize());

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

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
