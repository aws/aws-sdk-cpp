/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/StoredQueryMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

StoredQueryMetadata::StoredQueryMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

StoredQueryMetadata& StoredQueryMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");
    m_queryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryArn"))
  {
    m_queryArn = jsonValue.GetString("QueryArn");
    m_queryArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("QueryName"))
  {
    m_queryName = jsonValue.GetString("QueryName");
    m_queryNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue StoredQueryMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryArnHasBeenSet)
  {
   payload.WithString("QueryArn", m_queryArn);

  }

  if(m_queryNameHasBeenSet)
  {
   payload.WithString("QueryName", m_queryName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
