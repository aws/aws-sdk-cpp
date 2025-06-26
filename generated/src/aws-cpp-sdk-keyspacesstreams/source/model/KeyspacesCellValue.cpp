/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/KeyspacesCellValue.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

KeyspacesCellValue::KeyspacesCellValue(JsonView jsonValue)
{
  *this = jsonValue;
}

KeyspacesCellValue& KeyspacesCellValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("asciiT"))
  {
    m_asciiT = jsonValue.GetString("asciiT");
    m_asciiTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bigintT"))
  {
    m_bigintT = jsonValue.GetString("bigintT");
    m_bigintTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blobT"))
  {
    m_blobT = HashingUtils::Base64Decode(jsonValue.GetString("blobT"));
    m_blobTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("boolT"))
  {
    m_boolT = jsonValue.GetBool("boolT");
    m_boolTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("counterT"))
  {
    m_counterT = jsonValue.GetString("counterT");
    m_counterTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateT"))
  {
    m_dateT = jsonValue.GetString("dateT");
    m_dateTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("decimalT"))
  {
    m_decimalT = jsonValue.GetString("decimalT");
    m_decimalTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("doubleT"))
  {
    m_doubleT = jsonValue.GetString("doubleT");
    m_doubleTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("floatT"))
  {
    m_floatT = jsonValue.GetString("floatT");
    m_floatTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inetT"))
  {
    m_inetT = jsonValue.GetString("inetT");
    m_inetTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("intT"))
  {
    m_intT = jsonValue.GetString("intT");
    m_intTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listT"))
  {
    Aws::Utils::Array<JsonView> listTJsonList = jsonValue.GetArray("listT");
    for(unsigned listTIndex = 0; listTIndex < listTJsonList.GetLength(); ++listTIndex)
    {
      m_listT.push_back(listTJsonList[listTIndex].AsObject());
    }
    m_listTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mapT"))
  {
    Aws::Utils::Array<JsonView> mapTJsonList = jsonValue.GetArray("mapT");
    for(unsigned mapTIndex = 0; mapTIndex < mapTJsonList.GetLength(); ++mapTIndex)
    {
      m_mapT.push_back(mapTJsonList[mapTIndex].AsObject());
    }
    m_mapTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("setT"))
  {
    Aws::Utils::Array<JsonView> setTJsonList = jsonValue.GetArray("setT");
    for(unsigned setTIndex = 0; setTIndex < setTJsonList.GetLength(); ++setTIndex)
    {
      m_setT.push_back(setTJsonList[setTIndex].AsObject());
    }
    m_setTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("smallintT"))
  {
    m_smallintT = jsonValue.GetString("smallintT");
    m_smallintTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("textT"))
  {
    m_textT = jsonValue.GetString("textT");
    m_textTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeT"))
  {
    m_timeT = jsonValue.GetString("timeT");
    m_timeTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestampT"))
  {
    m_timestampT = jsonValue.GetString("timestampT");
    m_timestampTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeuuidT"))
  {
    m_timeuuidT = jsonValue.GetString("timeuuidT");
    m_timeuuidTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tinyintT"))
  {
    m_tinyintT = jsonValue.GetString("tinyintT");
    m_tinyintTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tupleT"))
  {
    Aws::Utils::Array<JsonView> tupleTJsonList = jsonValue.GetArray("tupleT");
    for(unsigned tupleTIndex = 0; tupleTIndex < tupleTJsonList.GetLength(); ++tupleTIndex)
    {
      m_tupleT.push_back(tupleTJsonList[tupleTIndex].AsObject());
    }
    m_tupleTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uuidT"))
  {
    m_uuidT = jsonValue.GetString("uuidT");
    m_uuidTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("varcharT"))
  {
    m_varcharT = jsonValue.GetString("varcharT");
    m_varcharTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("varintT"))
  {
    m_varintT = jsonValue.GetString("varintT");
    m_varintTHasBeenSet = true;
  }
  if(jsonValue.ValueExists("udtT"))
  {
    Aws::Map<Aws::String, JsonView> udtTJsonMap = jsonValue.GetObject("udtT").GetAllObjects();
    for(auto& udtTItem : udtTJsonMap)
    {
      m_udtT[udtTItem.first] = udtTItem.second.AsObject();
    }
    m_udtTHasBeenSet = true;
  }
  return *this;
}

JsonValue KeyspacesCellValue::Jsonize() const
{
  JsonValue payload;

  if(m_asciiTHasBeenSet)
  {
   payload.WithString("asciiT", m_asciiT);

  }

  if(m_bigintTHasBeenSet)
  {
   payload.WithString("bigintT", m_bigintT);

  }

  if(m_blobTHasBeenSet)
  {
   payload.WithString("blobT", HashingUtils::Base64Encode(m_blobT));
  }

  if(m_boolTHasBeenSet)
  {
   payload.WithBool("boolT", m_boolT);

  }

  if(m_counterTHasBeenSet)
  {
   payload.WithString("counterT", m_counterT);

  }

  if(m_dateTHasBeenSet)
  {
   payload.WithString("dateT", m_dateT);

  }

  if(m_decimalTHasBeenSet)
  {
   payload.WithString("decimalT", m_decimalT);

  }

  if(m_doubleTHasBeenSet)
  {
   payload.WithString("doubleT", m_doubleT);

  }

  if(m_floatTHasBeenSet)
  {
   payload.WithString("floatT", m_floatT);

  }

  if(m_inetTHasBeenSet)
  {
   payload.WithString("inetT", m_inetT);

  }

  if(m_intTHasBeenSet)
  {
   payload.WithString("intT", m_intT);

  }

  if(m_listTHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listTJsonList(m_listT.size());
   for(unsigned listTIndex = 0; listTIndex < listTJsonList.GetLength(); ++listTIndex)
   {
     listTJsonList[listTIndex].AsObject(m_listT[listTIndex].Jsonize());
   }
   payload.WithArray("listT", std::move(listTJsonList));

  }

  if(m_mapTHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mapTJsonList(m_mapT.size());
   for(unsigned mapTIndex = 0; mapTIndex < mapTJsonList.GetLength(); ++mapTIndex)
   {
     mapTJsonList[mapTIndex].AsObject(m_mapT[mapTIndex].Jsonize());
   }
   payload.WithArray("mapT", std::move(mapTJsonList));

  }

  if(m_setTHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> setTJsonList(m_setT.size());
   for(unsigned setTIndex = 0; setTIndex < setTJsonList.GetLength(); ++setTIndex)
   {
     setTJsonList[setTIndex].AsObject(m_setT[setTIndex].Jsonize());
   }
   payload.WithArray("setT", std::move(setTJsonList));

  }

  if(m_smallintTHasBeenSet)
  {
   payload.WithString("smallintT", m_smallintT);

  }

  if(m_textTHasBeenSet)
  {
   payload.WithString("textT", m_textT);

  }

  if(m_timeTHasBeenSet)
  {
   payload.WithString("timeT", m_timeT);

  }

  if(m_timestampTHasBeenSet)
  {
   payload.WithString("timestampT", m_timestampT);

  }

  if(m_timeuuidTHasBeenSet)
  {
   payload.WithString("timeuuidT", m_timeuuidT);

  }

  if(m_tinyintTHasBeenSet)
  {
   payload.WithString("tinyintT", m_tinyintT);

  }

  if(m_tupleTHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tupleTJsonList(m_tupleT.size());
   for(unsigned tupleTIndex = 0; tupleTIndex < tupleTJsonList.GetLength(); ++tupleTIndex)
   {
     tupleTJsonList[tupleTIndex].AsObject(m_tupleT[tupleTIndex].Jsonize());
   }
   payload.WithArray("tupleT", std::move(tupleTJsonList));

  }

  if(m_uuidTHasBeenSet)
  {
   payload.WithString("uuidT", m_uuidT);

  }

  if(m_varcharTHasBeenSet)
  {
   payload.WithString("varcharT", m_varcharT);

  }

  if(m_varintTHasBeenSet)
  {
   payload.WithString("varintT", m_varintT);

  }

  if(m_udtTHasBeenSet)
  {
   JsonValue udtTJsonMap;
   for(auto& udtTItem : m_udtT)
   {
     udtTJsonMap.WithObject(udtTItem.first, udtTItem.second.Jsonize());
   }
   payload.WithObject("udtT", std::move(udtTJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
