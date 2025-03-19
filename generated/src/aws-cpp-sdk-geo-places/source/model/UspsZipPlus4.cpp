/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/UspsZipPlus4.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

UspsZipPlus4::UspsZipPlus4(JsonView jsonValue)
{
  *this = jsonValue;
}

UspsZipPlus4& UspsZipPlus4::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordTypeCode"))
  {
    m_recordTypeCode = RecordTypeCodeMapper::GetRecordTypeCodeForName(jsonValue.GetString("RecordTypeCode"));
    m_recordTypeCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue UspsZipPlus4::Jsonize() const
{
  JsonValue payload;

  if(m_recordTypeCodeHasBeenSet)
  {
   payload.WithString("RecordTypeCode", RecordTypeCodeMapper::GetNameForRecordTypeCode(m_recordTypeCode));
  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
