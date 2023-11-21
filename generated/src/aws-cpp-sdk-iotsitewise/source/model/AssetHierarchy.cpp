/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/AssetHierarchy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

AssetHierarchy::AssetHierarchy() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

AssetHierarchy::AssetHierarchy(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

AssetHierarchy& AssetHierarchy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetHierarchy::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
