/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/UspsZip.h>
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

UspsZip::UspsZip(JsonView jsonValue)
{
  *this = jsonValue;
}

UspsZip& UspsZip::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ZipClassificationCode"))
  {
    m_zipClassificationCode = ZipClassificationCodeMapper::GetZipClassificationCodeForName(jsonValue.GetString("ZipClassificationCode"));
    m_zipClassificationCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue UspsZip::Jsonize() const
{
  JsonValue payload;

  if(m_zipClassificationCodeHasBeenSet)
  {
   payload.WithString("ZipClassificationCode", ZipClassificationCodeMapper::GetNameForZipClassificationCode(m_zipClassificationCode));
  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
