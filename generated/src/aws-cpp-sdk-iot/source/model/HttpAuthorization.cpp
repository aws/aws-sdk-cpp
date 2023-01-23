/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/HttpAuthorization.h>
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

HttpAuthorization::HttpAuthorization() : 
    m_sigv4HasBeenSet(false)
{
}

HttpAuthorization::HttpAuthorization(JsonView jsonValue) : 
    m_sigv4HasBeenSet(false)
{
  *this = jsonValue;
}

HttpAuthorization& HttpAuthorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sigv4"))
  {
    m_sigv4 = jsonValue.GetObject("sigv4");

    m_sigv4HasBeenSet = true;
  }

  return *this;
}

JsonValue HttpAuthorization::Jsonize() const
{
  JsonValue payload;

  if(m_sigv4HasBeenSet)
  {
   payload.WithObject("sigv4", m_sigv4.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
