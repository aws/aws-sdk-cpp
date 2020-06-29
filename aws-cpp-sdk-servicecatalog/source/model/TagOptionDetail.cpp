/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/TagOptionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

TagOptionDetail::TagOptionDetail() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

TagOptionDetail::TagOptionDetail(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

TagOptionDetail& TagOptionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Active"))
  {
    m_active = jsonValue.GetBool("Active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue TagOptionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("Active", m_active);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
