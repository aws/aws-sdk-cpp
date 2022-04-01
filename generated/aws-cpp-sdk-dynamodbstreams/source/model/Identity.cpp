/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodbstreams/model/Identity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDBStreams
{
namespace Model
{

Identity::Identity() : 
    m_principalIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Identity::Identity(JsonView jsonValue) : 
    m_principalIdHasBeenSet(false),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

Identity& Identity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue Identity::Jsonize() const
{
  JsonValue payload;

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
