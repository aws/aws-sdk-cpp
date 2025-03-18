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

UpdateGlobalSecondaryIndexAction::UpdateGlobalSecondaryIndexAction(JsonView jsonValue)
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
  if(jsonValue.ValueExists("OnDemandThroughput"))
  {
    m_onDemandThroughput = jsonValue.GetObject("OnDemandThroughput");
    m_onDemandThroughputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarmThroughput"))
  {
    m_warmThroughput = jsonValue.GetObject("WarmThroughput");
    m_warmThroughputHasBeenSet = true;
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

  if(m_onDemandThroughputHasBeenSet)
  {
   payload.WithObject("OnDemandThroughput", m_onDemandThroughput.Jsonize());

  }

  if(m_warmThroughputHasBeenSet)
  {
   payload.WithObject("WarmThroughput", m_warmThroughput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
