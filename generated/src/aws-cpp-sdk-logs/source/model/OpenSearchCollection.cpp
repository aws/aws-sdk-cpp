/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/OpenSearchCollection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

OpenSearchCollection::OpenSearchCollection(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchCollection& OpenSearchCollection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collectionEndpoint"))
  {
    m_collectionEndpoint = jsonValue.GetString("collectionEndpoint");
    m_collectionEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collectionArn"))
  {
    m_collectionArn = jsonValue.GetString("collectionArn");
    m_collectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchCollection::Jsonize() const
{
  JsonValue payload;

  if(m_collectionEndpointHasBeenSet)
  {
   payload.WithString("collectionEndpoint", m_collectionEndpoint);

  }

  if(m_collectionArnHasBeenSet)
  {
   payload.WithString("collectionArn", m_collectionArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
