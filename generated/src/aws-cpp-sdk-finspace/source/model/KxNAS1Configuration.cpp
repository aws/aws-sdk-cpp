/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxNAS1Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxNAS1Configuration::KxNAS1Configuration() : 
    m_type(KxNAS1Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

KxNAS1Configuration::KxNAS1Configuration(JsonView jsonValue) : 
    m_type(KxNAS1Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

KxNAS1Configuration& KxNAS1Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = KxNAS1TypeMapper::GetKxNAS1TypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue KxNAS1Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", KxNAS1TypeMapper::GetNameForKxNAS1Type(m_type));
  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
