/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/rds-data/model/Field.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

Field::Field() : 
    m_blobValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
}

Field::Field(JsonView jsonValue) : 
    m_blobValueHasBeenSet(false),
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_isNull(false),
    m_isNullHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_stringValueHasBeenSet(false)
{
  *this = jsonValue;
}

Field& Field::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blobValue"))
  {
    m_blobValue = HashingUtils::Base64Decode(jsonValue.GetString("blobValue"));
    m_blobValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("booleanValue"))
  {
    m_booleanValue = jsonValue.GetBool("booleanValue");

    m_booleanValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("doubleValue"))
  {
    m_doubleValue = jsonValue.GetDouble("doubleValue");

    m_doubleValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isNull"))
  {
    m_isNull = jsonValue.GetBool("isNull");

    m_isNullHasBeenSet = true;
  }

  if(jsonValue.ValueExists("longValue"))
  {
    m_longValue = jsonValue.GetInt64("longValue");

    m_longValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  return *this;
}

JsonValue Field::Jsonize() const
{
  JsonValue payload;

  if(m_blobValueHasBeenSet)
  {
   payload.WithString("blobValue", HashingUtils::Base64Encode(m_blobValue));
  }

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_isNullHasBeenSet)
  {
   payload.WithBool("isNull", m_isNull);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
