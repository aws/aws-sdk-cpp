/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/NullCheckBoxList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

NullCheckBoxList::NullCheckBoxList() : 
    m_isEmpty(false),
    m_isEmptyHasBeenSet(false),
    m_isNullString(false),
    m_isNullStringHasBeenSet(false),
    m_isNegOne(false),
    m_isNegOneHasBeenSet(false)
{
}

NullCheckBoxList::NullCheckBoxList(JsonView jsonValue) : 
    m_isEmpty(false),
    m_isEmptyHasBeenSet(false),
    m_isNullString(false),
    m_isNullStringHasBeenSet(false),
    m_isNegOne(false),
    m_isNegOneHasBeenSet(false)
{
  *this = jsonValue;
}

NullCheckBoxList& NullCheckBoxList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsEmpty"))
  {
    m_isEmpty = jsonValue.GetBool("IsEmpty");

    m_isEmptyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNullString"))
  {
    m_isNullString = jsonValue.GetBool("IsNullString");

    m_isNullStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNegOne"))
  {
    m_isNegOne = jsonValue.GetBool("IsNegOne");

    m_isNegOneHasBeenSet = true;
  }

  return *this;
}

JsonValue NullCheckBoxList::Jsonize() const
{
  JsonValue payload;

  if(m_isEmptyHasBeenSet)
  {
   payload.WithBool("IsEmpty", m_isEmpty);

  }

  if(m_isNullStringHasBeenSet)
  {
   payload.WithBool("IsNullString", m_isNullString);

  }

  if(m_isNegOneHasBeenSet)
  {
   payload.WithBool("IsNegOne", m_isNegOne);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
