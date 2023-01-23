/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DeleteGlobalSecondaryIndexAction.h>
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

DeleteGlobalSecondaryIndexAction::DeleteGlobalSecondaryIndexAction() : 
    m_indexNameHasBeenSet(false)
{
}

DeleteGlobalSecondaryIndexAction::DeleteGlobalSecondaryIndexAction(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteGlobalSecondaryIndexAction& DeleteGlobalSecondaryIndexAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteGlobalSecondaryIndexAction::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
