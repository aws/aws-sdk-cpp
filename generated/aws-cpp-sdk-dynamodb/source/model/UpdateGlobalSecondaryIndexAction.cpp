/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateGlobalSecondaryIndexAction.h>
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

UpdateGlobalSecondaryIndexAction::UpdateGlobalSecondaryIndexAction() : 
    m_indexNameHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false)
{
}

UpdateGlobalSecondaryIndexAction::UpdateGlobalSecondaryIndexAction(JsonView jsonValue) : 
    m_indexNameHasBeenSet(false),
    m_provisionedThroughputHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateGlobalSecondaryIndexAction& UpdateGlobalSecondaryIndexAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedThroughput"))
  {
    m_provisionedThroughput = jsonValue.GetObject("ProvisionedThroughput");

    m_provisionedThroughputHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateGlobalSecondaryIndexAction::Jsonize() const
{
  JsonValue payload;

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_provisionedThroughputHasBeenSet)
  {
   payload.WithObject("ProvisionedThroughput", m_provisionedThroughput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
