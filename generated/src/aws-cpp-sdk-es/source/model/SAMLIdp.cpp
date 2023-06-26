/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/SAMLIdp.h>
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

SAMLIdp::SAMLIdp() : 
    m_metadataContentHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
}

SAMLIdp::SAMLIdp(JsonView jsonValue) : 
    m_metadataContentHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
  *this = jsonValue;
}

SAMLIdp& SAMLIdp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MetadataContent"))
  {
    m_metadataContent = jsonValue.GetString("MetadataContent");

    m_metadataContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SAMLIdp::Jsonize() const
{
  JsonValue payload;

  if(m_metadataContentHasBeenSet)
  {
   payload.WithString("MetadataContent", m_metadataContent);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
