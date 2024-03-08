/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/RelatedFindingGroupDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

RelatedFindingGroupDetail::RelatedFindingGroupDetail() : 
    m_idHasBeenSet(false)
{
}

RelatedFindingGroupDetail::RelatedFindingGroupDetail(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedFindingGroupDetail& RelatedFindingGroupDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedFindingGroupDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
