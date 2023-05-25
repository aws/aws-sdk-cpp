/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/Session.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

Session::Session() : 
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPrimary"))
  {
    m_isPrimary = jsonValue.GetBool("isPrimary");

    m_isPrimaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_isPrimaryHasBeenSet)
  {
   payload.WithBool("isPrimary", m_isPrimary);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
