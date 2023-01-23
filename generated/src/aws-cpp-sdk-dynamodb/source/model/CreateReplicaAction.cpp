/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/CreateReplicaAction.h>
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

CreateReplicaAction::CreateReplicaAction() : 
    m_regionNameHasBeenSet(false)
{
}

CreateReplicaAction::CreateReplicaAction(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false)
{
  *this = jsonValue;
}

CreateReplicaAction& CreateReplicaAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateReplicaAction::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
