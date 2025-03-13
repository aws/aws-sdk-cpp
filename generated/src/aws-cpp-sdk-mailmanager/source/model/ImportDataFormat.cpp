/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ImportDataFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ImportDataFormat::ImportDataFormat(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportDataFormat& ImportDataFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportDataType"))
  {
    m_importDataType = ImportDataTypeMapper::GetImportDataTypeForName(jsonValue.GetString("ImportDataType"));
    m_importDataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportDataFormat::Jsonize() const
{
  JsonValue payload;

  if(m_importDataTypeHasBeenSet)
  {
   payload.WithString("ImportDataType", ImportDataTypeMapper::GetNameForImportDataType(m_importDataType));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
