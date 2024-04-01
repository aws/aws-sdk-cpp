/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UsageTrackingResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

UsageTrackingResource::UsageTrackingResource() : 
    m_queueIdHasBeenSet(false)
{
}

UsageTrackingResource::UsageTrackingResource(JsonView jsonValue) : 
    m_queueIdHasBeenSet(false)
{
  *this = jsonValue;
}

UsageTrackingResource& UsageTrackingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");

    m_queueIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageTrackingResource::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
