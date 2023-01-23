/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuthorizerSummary.h>
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

AuthorizerSummary::AuthorizerSummary() : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false)
{
}

AuthorizerSummary::AuthorizerSummary(JsonView jsonValue) : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizerSummary& AuthorizerSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizerName"))
  {
    m_authorizerName = jsonValue.GetString("authorizerName");

    m_authorizerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerArn"))
  {
    m_authorizerArn = jsonValue.GetString("authorizerArn");

    m_authorizerArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizerSummary::Jsonize() const
{
  JsonValue payload;

  if(m_authorizerNameHasBeenSet)
  {
   payload.WithString("authorizerName", m_authorizerName);

  }

  if(m_authorizerArnHasBeenSet)
  {
   payload.WithString("authorizerArn", m_authorizerArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
