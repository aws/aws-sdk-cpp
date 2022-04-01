/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/DelimitedTextImportOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

DelimitedTextImportOptions::DelimitedTextImportOptions() : 
    m_delimiterHasBeenSet(false),
    m_hasHeaderRow(false),
    m_hasHeaderRowHasBeenSet(false),
    m_ignoreEmptyRows(false),
    m_ignoreEmptyRowsHasBeenSet(false),
    m_dataCharacterEncoding(ImportDataCharacterEncoding::NOT_SET),
    m_dataCharacterEncodingHasBeenSet(false)
{
}

DelimitedTextImportOptions::DelimitedTextImportOptions(JsonView jsonValue) : 
    m_delimiterHasBeenSet(false),
    m_hasHeaderRow(false),
    m_hasHeaderRowHasBeenSet(false),
    m_ignoreEmptyRows(false),
    m_ignoreEmptyRowsHasBeenSet(false),
    m_dataCharacterEncoding(ImportDataCharacterEncoding::NOT_SET),
    m_dataCharacterEncodingHasBeenSet(false)
{
  *this = jsonValue;
}

DelimitedTextImportOptions& DelimitedTextImportOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("delimiter"))
  {
    m_delimiter = jsonValue.GetString("delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasHeaderRow"))
  {
    m_hasHeaderRow = jsonValue.GetBool("hasHeaderRow");

    m_hasHeaderRowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ignoreEmptyRows"))
  {
    m_ignoreEmptyRows = jsonValue.GetBool("ignoreEmptyRows");

    m_ignoreEmptyRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataCharacterEncoding"))
  {
    m_dataCharacterEncoding = ImportDataCharacterEncodingMapper::GetImportDataCharacterEncodingForName(jsonValue.GetString("dataCharacterEncoding"));

    m_dataCharacterEncodingHasBeenSet = true;
  }

  return *this;
}

JsonValue DelimitedTextImportOptions::Jsonize() const
{
  JsonValue payload;

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("delimiter", m_delimiter);

  }

  if(m_hasHeaderRowHasBeenSet)
  {
   payload.WithBool("hasHeaderRow", m_hasHeaderRow);

  }

  if(m_ignoreEmptyRowsHasBeenSet)
  {
   payload.WithBool("ignoreEmptyRows", m_ignoreEmptyRows);

  }

  if(m_dataCharacterEncodingHasBeenSet)
  {
   payload.WithString("dataCharacterEncoding", ImportDataCharacterEncodingMapper::GetNameForImportDataCharacterEncoding(m_dataCharacterEncoding));
  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
