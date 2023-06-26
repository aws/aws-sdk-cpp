/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/Query.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

Query::Query() : 
    m_queryIdHasBeenSet(false),
    m_queryStatus(QueryStatus::NOT_SET),
    m_queryStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

Query::Query(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_queryStatus(QueryStatus::NOT_SET),
    m_queryStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Query& Query::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QueryId"))
  {
    m_queryId = jsonValue.GetString("QueryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryStatus"))
  {
    m_queryStatus = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("QueryStatus"));

    m_queryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Query::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("QueryId", m_queryId);

  }

  if(m_queryStatusHasBeenSet)
  {
   payload.WithString("QueryStatus", QueryStatusMapper::GetNameForQueryStatus(m_queryStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
