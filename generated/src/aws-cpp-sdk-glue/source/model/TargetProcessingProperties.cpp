/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TargetProcessingProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TargetProcessingProperties::TargetProcessingProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetProcessingProperties& TargetProcessingProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsArn"))
  {
    m_kmsArn = jsonValue.GetString("KmsArn");
    m_kmsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionName"))
  {
    m_connectionName = jsonValue.GetString("ConnectionName");
    m_connectionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("EventBusArn");
    m_eventBusArnHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetProcessingProperties::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_kmsArnHasBeenSet)
  {
   payload.WithString("KmsArn", m_kmsArn);

  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

  }

  if(m_eventBusArnHasBeenSet)
  {
   payload.WithString("EventBusArn", m_eventBusArn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
