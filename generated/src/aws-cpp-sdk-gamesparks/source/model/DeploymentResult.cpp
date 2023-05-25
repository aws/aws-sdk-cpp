/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/DeploymentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameSparks
{
namespace Model
{

DeploymentResult::DeploymentResult() : 
    m_messageHasBeenSet(false),
    m_resultCode(ResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false)
{
}

DeploymentResult::DeploymentResult(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resultCode(ResultCode::NOT_SET),
    m_resultCodeHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentResult& DeploymentResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultCode"))
  {
    m_resultCode = ResultCodeMapper::GetResultCodeForName(jsonValue.GetString("ResultCode"));

    m_resultCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentResult::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_resultCodeHasBeenSet)
  {
   payload.WithString("ResultCode", ResultCodeMapper::GetNameForResultCode(m_resultCode));
  }

  return payload;
}

} // namespace Model
} // namespace GameSparks
} // namespace Aws
