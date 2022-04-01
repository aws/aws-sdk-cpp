/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/UninitializedAccountException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

UninitializedAccountException::UninitializedAccountException() : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

UninitializedAccountException::UninitializedAccountException(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

UninitializedAccountException& UninitializedAccountException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue UninitializedAccountException::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
