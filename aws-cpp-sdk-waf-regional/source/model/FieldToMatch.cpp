/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/FieldToMatch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

FieldToMatch::FieldToMatch() : 
    m_type(MatchFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

FieldToMatch::FieldToMatch(JsonView jsonValue) : 
    m_type(MatchFieldType::NOT_SET),
    m_typeHasBeenSet(false),
    m_dataHasBeenSet(false)
{
  *this = jsonValue;
}

FieldToMatch& FieldToMatch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = MatchFieldTypeMapper::GetMatchFieldTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    m_data = jsonValue.GetString("Data");

    m_dataHasBeenSet = true;
  }

  return *this;
}

JsonValue FieldToMatch::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", MatchFieldTypeMapper::GetNameForMatchFieldType(m_type));
  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("Data", m_data);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
