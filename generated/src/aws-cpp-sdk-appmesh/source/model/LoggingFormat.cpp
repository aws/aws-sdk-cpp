/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/LoggingFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

LoggingFormat::LoggingFormat() : 
    m_jsonHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

LoggingFormat::LoggingFormat(JsonView jsonValue) : 
    m_jsonHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingFormat& LoggingFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("json"))
  {
    Aws::Utils::Array<JsonView> jsonJsonList = jsonValue.GetArray("json");
    for(unsigned jsonIndex = 0; jsonIndex < jsonJsonList.GetLength(); ++jsonIndex)
    {
      m_json.push_back(jsonJsonList[jsonIndex].AsObject());
    }
    m_jsonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingFormat::Jsonize() const
{
  JsonValue payload;

  if(m_jsonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jsonJsonList(m_json.size());
   for(unsigned jsonIndex = 0; jsonIndex < jsonJsonList.GetLength(); ++jsonIndex)
   {
     jsonJsonList[jsonIndex].AsObject(m_json[jsonIndex].Jsonize());
   }
   payload.WithArray("json", std::move(jsonJsonList));

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
