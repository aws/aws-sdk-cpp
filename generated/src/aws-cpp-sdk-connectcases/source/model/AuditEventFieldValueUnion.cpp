/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditEventFieldValueUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

AuditEventFieldValueUnion::AuditEventFieldValueUnion() : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_emptyValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_userArnValueHasBeenSet(false)
{
}

AuditEventFieldValueUnion::AuditEventFieldValueUnion(JsonView jsonValue) : 
    m_booleanValue(false),
    m_booleanValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_emptyValueHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_userArnValueHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEventFieldValueUnion& AuditEventFieldValueUnion::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("emptyValue"))
  {
    m_emptyValue = jsonValue.GetObject("emptyValue");

    m_emptyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stringValue"))
  {
    m_stringValue = jsonValue.GetString("stringValue");

    m_stringValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userArnValue"))
  {
    m_userArnValue = jsonValue.GetString("userArnValue");

    m_userArnValueHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEventFieldValueUnion::Jsonize() const
{
  JsonValue payload;

  if(m_booleanValueHasBeenSet)
  {
   payload.WithBool("booleanValue", m_booleanValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("doubleValue", m_doubleValue);

  }

  if(m_emptyValueHasBeenSet)
  {
   payload.WithObject("emptyValue", m_emptyValue.Jsonize());

  }

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_userArnValueHasBeenSet)
  {
   payload.WithString("userArnValue", m_userArnValue);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
