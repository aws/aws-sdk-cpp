/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/DiscoveredResource.h>
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

DiscoveredResource::DiscoveredResource() : 
    m_uRIHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

DiscoveredResource::DiscoveredResource(JsonView jsonValue) : 
    m_uRIHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

DiscoveredResource& DiscoveredResource::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue DiscoveredResource::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
