/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/FailedItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

FailedItem::FailedItem() : 
    m_uRIHasBeenSet(false),
    m_reason(FailedItemReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

FailedItem::FailedItem(JsonView jsonValue) : 
    m_uRIHasBeenSet(false),
    m_reason(FailedItemReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

FailedItem& FailedItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("URI"))
  {
    m_uRI = jsonValue.GetString("URI");

    m_uRIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = FailedItemReasonMapper::GetFailedItemReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedItem::Jsonize() const
{
  JsonValue payload;

  if(m_uRIHasBeenSet)
  {
   payload.WithString("URI", m_uRI);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", FailedItemReasonMapper::GetNameForFailedItemReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
