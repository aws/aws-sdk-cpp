/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruSecurity
{
namespace Model
{

Resource::Resource() : 
    m_idHasBeenSet(false),
    m_subResourceIdHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_subResourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subResourceId"))
  {
    m_subResourceId = jsonValue.GetString("subResourceId");

    m_subResourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_subResourceIdHasBeenSet)
  {
   payload.WithString("subResourceId", m_subResourceId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
