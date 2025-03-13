/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TN3270.h>
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

TN3270::TN3270(JsonView jsonValue)
{
  *this = jsonValue;
}

TN3270& TN3270::operator =(JsonView jsonValue)
{
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
  return *this;
}

JsonValue TN3270::Jsonize() const
{
  JsonValue payload;

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

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
