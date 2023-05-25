/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

Resource::Resource() : 
    m_uRIHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_uRIHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("URI"))
  {
    m_uRI = jsonValue.GetString("URI");

    m_uRIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_uRIHasBeenSet)
  {
   payload.WithString("URI", m_uRI);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
