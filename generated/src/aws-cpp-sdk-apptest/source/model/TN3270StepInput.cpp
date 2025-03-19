/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TN3270StepInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

TN3270StepInput::TN3270StepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TN3270StepInput& TN3270StepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("script"))
  {
    m_script = jsonValue.GetObject("script");
    m_scriptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exportDataSetNames"))
  {
    Aws::Utils::Array<JsonView> exportDataSetNamesJsonList = jsonValue.GetArray("exportDataSetNames");
    for(unsigned exportDataSetNamesIndex = 0; exportDataSetNamesIndex < exportDataSetNamesJsonList.GetLength(); ++exportDataSetNamesIndex)
    {
      m_exportDataSetNames.push_back(exportDataSetNamesJsonList[exportDataSetNamesIndex].AsString());
    }
    m_exportDataSetNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetObject("properties");
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue TN3270StepInput::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_scriptHasBeenSet)
  {
   payload.WithObject("script", m_script.Jsonize());

  }

  if(m_exportDataSetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportDataSetNamesJsonList(m_exportDataSetNames.size());
   for(unsigned exportDataSetNamesIndex = 0; exportDataSetNamesIndex < exportDataSetNamesJsonList.GetLength(); ++exportDataSetNamesIndex)
   {
     exportDataSetNamesJsonList[exportDataSetNamesIndex].AsString(m_exportDataSetNames[exportDataSetNamesIndex]);
   }
   payload.WithArray("exportDataSetNames", std::move(exportDataSetNamesJsonList));

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
