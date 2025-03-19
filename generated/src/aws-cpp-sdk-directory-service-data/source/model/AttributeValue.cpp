/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

AttributeValue::AttributeValue(JsonView jsonValue)
{
  *this = jsonValue;
}

AttributeValue& AttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BOOL"))
  {
    m_bOOL = jsonValue.GetBool("BOOL");
    m_bOOLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("N"))
  {
    m_n = jsonValue.GetInt64("N");
    m_nHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S"))
  {
    m_s = jsonValue.GetString("S");
    m_sHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SS"))
  {
    Aws::Utils::Array<JsonView> sSJsonList = jsonValue.GetArray("SS");
    for(unsigned sSIndex = 0; sSIndex < sSJsonList.GetLength(); ++sSIndex)
    {
      m_sS.push_back(sSJsonList[sSIndex].AsString());
    }
    m_sSHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_bOOLHasBeenSet)
  {
   payload.WithBool("BOOL", m_bOOL);

  }

  if(m_nHasBeenSet)
  {
   payload.WithInt64("N", m_n);

  }

  if(m_sHasBeenSet)
  {
   payload.WithString("S", m_s);

  }

  if(m_sSHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sSJsonList(m_sS.size());
   for(unsigned sSIndex = 0; sSIndex < sSJsonList.GetLength(); ++sSIndex)
   {
     sSJsonList[sSIndex].AsString(m_sS[sSIndex]);
   }
   payload.WithArray("SS", std::move(sSJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
