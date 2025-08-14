/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ThrottlingReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ThrottlingReason::ThrottlingReason(JsonView jsonValue)
{
  *this = jsonValue;
}

ThrottlingReason& ThrottlingReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ThrottlingReason::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
