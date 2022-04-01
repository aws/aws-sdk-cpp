/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/QueryInfo.h>
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

QueryInfo::QueryInfo() : 
    m_queryIdHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_status(QueryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
}

QueryInfo::QueryInfo(JsonView jsonValue) : 
    m_queryIdHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_status(QueryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createTime(0),
    m_createTimeHasBeenSet(false),
    m_logGroupNameHasBeenSet(false)
{
  *this = jsonValue;
}

QueryInfo& QueryInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queryId"))
  {
    m_queryId = jsonValue.GetString("queryId");

    m_queryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryString"))
  {
    m_queryString = jsonValue.GetString("queryString");

    m_queryStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = QueryStatusMapper::GetQueryStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetInt64("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryInfo::Jsonize() const
{
  JsonValue payload;

  if(m_queryIdHasBeenSet)
  {
   payload.WithString("queryId", m_queryId);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", QueryStatusMapper::GetNameForQueryStatus(m_status));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithInt64("createTime", m_createTime);

  }

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
