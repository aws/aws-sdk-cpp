/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/RelatedOpsItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

RelatedOpsItem::RelatedOpsItem() : 
    m_opsItemIdHasBeenSet(false)
{
}

RelatedOpsItem::RelatedOpsItem(JsonView jsonValue) : 
    m_opsItemIdHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedOpsItem& RelatedOpsItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OpsItemId"))
  {
    m_opsItemId = jsonValue.GetString("OpsItemId");

    m_opsItemIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedOpsItem::Jsonize() const
{
  JsonValue payload;

  if(m_opsItemIdHasBeenSet)
  {
   payload.WithString("OpsItemId", m_opsItemId);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
