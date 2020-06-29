/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/IngestEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

IngestEndpoint::IngestEndpoint() : 
    m_idHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

IngestEndpoint::IngestEndpoint(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
  *this = jsonValue;
}

IngestEndpoint& IngestEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("password"))
  {
    m_password = jsonValue.GetString("password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

    m_usernameHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
