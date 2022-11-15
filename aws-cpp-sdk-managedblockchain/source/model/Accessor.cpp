/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/Accessor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

Accessor::Accessor() : 
    m_idHasBeenSet(false),
    m_type(AccessorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_billingTokenHasBeenSet(false),
    m_status(AccessorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

Accessor::Accessor(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(AccessorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_billingTokenHasBeenSet(false),
    m_status(AccessorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

Accessor& Accessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = AccessorTypeMapper::GetAccessorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BillingToken"))
  {
    m_billingToken = jsonValue.GetString("BillingToken");

    m_billingTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AccessorStatusMapper::GetAccessorStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue Accessor::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AccessorTypeMapper::GetNameForAccessorType(m_type));
  }

  if(m_billingTokenHasBeenSet)
  {
   payload.WithString("BillingToken", m_billingToken);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AccessorStatusMapper::GetNameForAccessorStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
