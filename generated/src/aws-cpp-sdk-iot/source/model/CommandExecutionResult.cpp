/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CommandExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CommandExecutionResult::CommandExecutionResult(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandExecutionResult& CommandExecutionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S"))
  {
    m_s = jsonValue.GetString("S");
    m_sHasBeenSet = true;
  }
  if(jsonValue.ValueExists("B"))
  {
    m_b = jsonValue.GetBool("B");
    m_bHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BIN"))
  {
    m_bIN = HashingUtils::Base64Decode(jsonValue.GetString("BIN"));
    m_bINHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandExecutionResult::Jsonize() const
{
  JsonValue payload;

  if(m_sHasBeenSet)
  {
   payload.WithString("S", m_s);

  }

  if(m_bHasBeenSet)
  {
   payload.WithBool("B", m_b);

  }

  if(m_bINHasBeenSet)
  {
   payload.WithString("BIN", HashingUtils::Base64Encode(m_bIN));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
