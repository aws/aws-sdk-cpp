/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/Processor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

Processor::Processor(JsonView jsonValue)
{
  *this = jsonValue;
}

Processor& Processor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addKeys"))
  {
    m_addKeys = jsonValue.GetObject("addKeys");
    m_addKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("copyValue"))
  {
    m_copyValue = jsonValue.GetObject("copyValue");
    m_copyValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("csv"))
  {
    m_csv = jsonValue.GetObject("csv");
    m_csvHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dateTimeConverter"))
  {
    m_dateTimeConverter = jsonValue.GetObject("dateTimeConverter");
    m_dateTimeConverterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteKeys"))
  {
    m_deleteKeys = jsonValue.GetObject("deleteKeys");
    m_deleteKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("grok"))
  {
    m_grok = jsonValue.GetObject("grok");
    m_grokHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listToMap"))
  {
    m_listToMap = jsonValue.GetObject("listToMap");
    m_listToMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lowerCaseString"))
  {
    m_lowerCaseString = jsonValue.GetObject("lowerCaseString");
    m_lowerCaseStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("moveKeys"))
  {
    m_moveKeys = jsonValue.GetObject("moveKeys");
    m_moveKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseCloudfront"))
  {
    m_parseCloudfront = jsonValue.GetObject("parseCloudfront");
    m_parseCloudfrontHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseJSON"))
  {
    m_parseJSON = jsonValue.GetObject("parseJSON");
    m_parseJSONHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseKeyValue"))
  {
    m_parseKeyValue = jsonValue.GetObject("parseKeyValue");
    m_parseKeyValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseRoute53"))
  {
    m_parseRoute53 = jsonValue.GetObject("parseRoute53");
    m_parseRoute53HasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseToOCSF"))
  {
    m_parseToOCSF = jsonValue.GetObject("parseToOCSF");
    m_parseToOCSFHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsePostgres"))
  {
    m_parsePostgres = jsonValue.GetObject("parsePostgres");
    m_parsePostgresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseVPC"))
  {
    m_parseVPC = jsonValue.GetObject("parseVPC");
    m_parseVPCHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parseWAF"))
  {
    m_parseWAF = jsonValue.GetObject("parseWAF");
    m_parseWAFHasBeenSet = true;
  }
  if(jsonValue.ValueExists("renameKeys"))
  {
    m_renameKeys = jsonValue.GetObject("renameKeys");
    m_renameKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("splitString"))
  {
    m_splitString = jsonValue.GetObject("splitString");
    m_splitStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("substituteString"))
  {
    m_substituteString = jsonValue.GetObject("substituteString");
    m_substituteStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trimString"))
  {
    m_trimString = jsonValue.GetObject("trimString");
    m_trimStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("typeConverter"))
  {
    m_typeConverter = jsonValue.GetObject("typeConverter");
    m_typeConverterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upperCaseString"))
  {
    m_upperCaseString = jsonValue.GetObject("upperCaseString");
    m_upperCaseStringHasBeenSet = true;
  }
  return *this;
}

JsonValue Processor::Jsonize() const
{
  JsonValue payload;

  if(m_addKeysHasBeenSet)
  {
   payload.WithObject("addKeys", m_addKeys.Jsonize());

  }

  if(m_copyValueHasBeenSet)
  {
   payload.WithObject("copyValue", m_copyValue.Jsonize());

  }

  if(m_csvHasBeenSet)
  {
   payload.WithObject("csv", m_csv.Jsonize());

  }

  if(m_dateTimeConverterHasBeenSet)
  {
   payload.WithObject("dateTimeConverter", m_dateTimeConverter.Jsonize());

  }

  if(m_deleteKeysHasBeenSet)
  {
   payload.WithObject("deleteKeys", m_deleteKeys.Jsonize());

  }

  if(m_grokHasBeenSet)
  {
   payload.WithObject("grok", m_grok.Jsonize());

  }

  if(m_listToMapHasBeenSet)
  {
   payload.WithObject("listToMap", m_listToMap.Jsonize());

  }

  if(m_lowerCaseStringHasBeenSet)
  {
   payload.WithObject("lowerCaseString", m_lowerCaseString.Jsonize());

  }

  if(m_moveKeysHasBeenSet)
  {
   payload.WithObject("moveKeys", m_moveKeys.Jsonize());

  }

  if(m_parseCloudfrontHasBeenSet)
  {
   payload.WithObject("parseCloudfront", m_parseCloudfront.Jsonize());

  }

  if(m_parseJSONHasBeenSet)
  {
   payload.WithObject("parseJSON", m_parseJSON.Jsonize());

  }

  if(m_parseKeyValueHasBeenSet)
  {
   payload.WithObject("parseKeyValue", m_parseKeyValue.Jsonize());

  }

  if(m_parseRoute53HasBeenSet)
  {
   payload.WithObject("parseRoute53", m_parseRoute53.Jsonize());

  }

  if(m_parseToOCSFHasBeenSet)
  {
   payload.WithObject("parseToOCSF", m_parseToOCSF.Jsonize());

  }

  if(m_parsePostgresHasBeenSet)
  {
   payload.WithObject("parsePostgres", m_parsePostgres.Jsonize());

  }

  if(m_parseVPCHasBeenSet)
  {
   payload.WithObject("parseVPC", m_parseVPC.Jsonize());

  }

  if(m_parseWAFHasBeenSet)
  {
   payload.WithObject("parseWAF", m_parseWAF.Jsonize());

  }

  if(m_renameKeysHasBeenSet)
  {
   payload.WithObject("renameKeys", m_renameKeys.Jsonize());

  }

  if(m_splitStringHasBeenSet)
  {
   payload.WithObject("splitString", m_splitString.Jsonize());

  }

  if(m_substituteStringHasBeenSet)
  {
   payload.WithObject("substituteString", m_substituteString.Jsonize());

  }

  if(m_trimStringHasBeenSet)
  {
   payload.WithObject("trimString", m_trimString.Jsonize());

  }

  if(m_typeConverterHasBeenSet)
  {
   payload.WithObject("typeConverter", m_typeConverter.Jsonize());

  }

  if(m_upperCaseStringHasBeenSet)
  {
   payload.WithObject("upperCaseString", m_upperCaseString.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
