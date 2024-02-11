/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/Association.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

Association::Association() : 
    m_arnHasBeenSet(false),
    m_type(AssociationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Association::Association(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_type(AssociationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Association& Association::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AssociationTypeMapper::GetAssociationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Association::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AssociationTypeMapper::GetNameForAssociationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
