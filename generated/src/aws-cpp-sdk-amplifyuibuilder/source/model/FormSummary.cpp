/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/FormSummary.h>
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

FormSummary::FormSummary() : 
    m_appIdHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_formActionType(FormActionType::NOT_SET),
    m_formActionTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

FormSummary::FormSummary(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_formActionType(FormActionType::NOT_SET),
    m_formActionTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

FormSummary& FormSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
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

  return *this;
}

JsonValue FormSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithObject("dataType", m_dataType.Jsonize());

  }

  if(m_environmentNameHasBeenSet)
  {
   payload.WithString("environmentName", m_environmentName);

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

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
