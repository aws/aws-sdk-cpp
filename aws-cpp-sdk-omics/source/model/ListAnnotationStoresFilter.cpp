/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListAnnotationStoresFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ListAnnotationStoresFilter::ListAnnotationStoresFilter() : 
    m_status(StoreStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ListAnnotationStoresFilter::ListAnnotationStoresFilter(JsonView jsonValue) : 
    m_status(StoreStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ListAnnotationStoresFilter& ListAnnotationStoresFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = StoreStatusMapper::GetStoreStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ListAnnotationStoresFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StoreStatusMapper::GetNameForStoreStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
