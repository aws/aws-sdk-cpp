/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/ExternalId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

ExternalId::ExternalId() : 
    m_issuerHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

ExternalId::ExternalId(JsonView jsonValue) : 
    m_issuerHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalId& ExternalId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Issuer"))
  {
    m_issuer = jsonValue.GetString("Issuer");

    m_issuerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalId::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("Issuer", m_issuer);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
