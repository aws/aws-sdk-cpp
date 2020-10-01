/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ApiKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

ApiKey::ApiKey() : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false),
    m_deletes(0),
    m_deletesHasBeenSet(false)
{
}

ApiKey::ApiKey(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expires(0),
    m_expiresHasBeenSet(false),
    m_deletes(0),
    m_deletesHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKey& ApiKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expires"))
  {
    m_expires = jsonValue.GetInt64("expires");

    m_expiresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletes"))
  {
    m_deletes = jsonValue.GetInt64("deletes");

    m_deletesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKey::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expiresHasBeenSet)
  {
   payload.WithInt64("expires", m_expires);

  }

  if(m_deletesHasBeenSet)
  {
   payload.WithInt64("deletes", m_deletes);

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
