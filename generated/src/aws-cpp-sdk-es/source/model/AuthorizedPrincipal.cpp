/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AuthorizedPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AuthorizedPrincipal::AuthorizedPrincipal() : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

AuthorizedPrincipal::AuthorizedPrincipal(JsonView jsonValue) : 
    m_principalType(PrincipalType::NOT_SET),
    m_principalTypeHasBeenSet(false),
    m_principalHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizedPrincipal& AuthorizedPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));

    m_principalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetString("Principal");

    m_principalHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizedPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
