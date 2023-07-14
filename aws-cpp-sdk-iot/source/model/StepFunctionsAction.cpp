/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StepFunctionsAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StepFunctionsAction::StepFunctionsAction() : 
    m_executionNamePrefixHasBeenSet(false),
    m_stateMachineNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

StepFunctionsAction::StepFunctionsAction(JsonView jsonValue) : 
    m_executionNamePrefixHasBeenSet(false),
    m_stateMachineNameHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

StepFunctionsAction& StepFunctionsAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionNamePrefix"))
  {
    m_executionNamePrefix = jsonValue.GetString("executionNamePrefix");

    m_executionNamePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineName"))
  {
    m_stateMachineName = jsonValue.GetString("stateMachineName");

    m_stateMachineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue StepFunctionsAction::Jsonize() const
{
  JsonValue payload;

  if(m_executionNamePrefixHasBeenSet)
  {
   payload.WithString("executionNamePrefix", m_executionNamePrefix);

  }

  if(m_stateMachineNameHasBeenSet)
  {
   payload.WithString("stateMachineName", m_stateMachineName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
