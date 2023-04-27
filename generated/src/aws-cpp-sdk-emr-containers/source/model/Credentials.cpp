/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/Credentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

Credentials::Credentials() : 
    m_tokenHasBeenSet(false)
{
}

Credentials::Credentials(JsonView jsonValue) : 
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

Credentials& Credentials::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue Credentials::Jsonize() const
{
  JsonValue payload;

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
