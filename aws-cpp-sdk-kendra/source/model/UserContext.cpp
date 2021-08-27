/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/UserContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

UserContext::UserContext() : 
    m_tokenHasBeenSet(false)
{
}

UserContext::UserContext(JsonView jsonValue) : 
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

UserContext& UserContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Token"))
  {
    m_token = jsonValue.GetString("Token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue UserContext::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("Token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
