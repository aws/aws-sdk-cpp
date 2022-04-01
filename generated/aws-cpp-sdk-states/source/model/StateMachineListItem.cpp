/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/StateMachineListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

StateMachineListItem::StateMachineListItem() : 
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(StateMachineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

StateMachineListItem::StateMachineListItem(JsonView jsonValue) : 
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_type(StateMachineType::NOT_SET),
    m_typeHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

StateMachineListItem& StateMachineListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

    m_stateMachineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = StateMachineTypeMapper::GetStateMachineTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue StateMachineListItem::Jsonize() const
{
  JsonValue payload;

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", StateMachineTypeMapper::GetNameForStateMachineType(m_type));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
