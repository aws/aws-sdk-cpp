/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ServiceUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ServiceUpdateRequest::ServiceUpdateRequest() : 
    m_serviceUpdateNameToApplyHasBeenSet(false)
{
}

ServiceUpdateRequest::ServiceUpdateRequest(JsonView jsonValue) : 
    m_serviceUpdateNameToApplyHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceUpdateRequest& ServiceUpdateRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServiceUpdateNameToApply"))
  {
    m_serviceUpdateNameToApply = jsonValue.GetString("ServiceUpdateNameToApply");

    m_serviceUpdateNameToApplyHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceUpdateRequest::Jsonize() const
{
  JsonValue payload;

  if(m_serviceUpdateNameToApplyHasBeenSet)
  {
   payload.WithString("ServiceUpdateNameToApply", m_serviceUpdateNameToApply);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
