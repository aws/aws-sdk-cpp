/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/DeployTargetEventContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

DeployTargetEventContext::DeployTargetEventContext(JsonView jsonValue)
{
  *this = jsonValue;
}

DeployTargetEventContext& DeployTargetEventContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ssmCommandId"))
  {
    m_ssmCommandId = jsonValue.GetString("ssmCommandId");
    m_ssmCommandIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue DeployTargetEventContext::Jsonize() const
{
  JsonValue payload;

  if(m_ssmCommandIdHasBeenSet)
  {
   payload.WithString("ssmCommandId", m_ssmCommandId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
