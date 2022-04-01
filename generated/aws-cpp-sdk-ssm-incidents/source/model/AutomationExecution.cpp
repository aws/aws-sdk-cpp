/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/AutomationExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

AutomationExecution::AutomationExecution() : 
    m_ssmExecutionArnHasBeenSet(false)
{
}

AutomationExecution::AutomationExecution(JsonView jsonValue) : 
    m_ssmExecutionArnHasBeenSet(false)
{
  *this = jsonValue;
}

AutomationExecution& AutomationExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssmExecutionArn"))
  {
    m_ssmExecutionArn = jsonValue.GetString("ssmExecutionArn");

    m_ssmExecutionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomationExecution::Jsonize() const
{
  JsonValue payload;

  if(m_ssmExecutionArnHasBeenSet)
  {
   payload.WithString("ssmExecutionArn", m_ssmExecutionArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
