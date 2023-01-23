/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CollectorShortInfoResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

CollectorShortInfoResponse::CollectorShortInfoResponse() : 
    m_collectorReferencedIdHasBeenSet(false),
    m_collectorNameHasBeenSet(false)
{
}

CollectorShortInfoResponse::CollectorShortInfoResponse(JsonView jsonValue) : 
    m_collectorReferencedIdHasBeenSet(false),
    m_collectorNameHasBeenSet(false)
{
  *this = jsonValue;
}

CollectorShortInfoResponse& CollectorShortInfoResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectorReferencedId"))
  {
    m_collectorReferencedId = jsonValue.GetString("CollectorReferencedId");

    m_collectorReferencedIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollectorName"))
  {
    m_collectorName = jsonValue.GetString("CollectorName");

    m_collectorNameHasBeenSet = true;
  }

  return *this;
}

JsonValue CollectorShortInfoResponse::Jsonize() const
{
  JsonValue payload;

  if(m_collectorReferencedIdHasBeenSet)
  {
   payload.WithString("CollectorReferencedId", m_collectorReferencedId);

  }

  if(m_collectorNameHasBeenSet)
  {
   payload.WithString("CollectorName", m_collectorName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
