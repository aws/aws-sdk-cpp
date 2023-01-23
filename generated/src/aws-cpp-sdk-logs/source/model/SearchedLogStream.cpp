/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/SearchedLogStream.h>
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

SearchedLogStream::SearchedLogStream() : 
    m_logStreamNameHasBeenSet(false),
    m_searchedCompletely(false),
    m_searchedCompletelyHasBeenSet(false)
{
}

SearchedLogStream::SearchedLogStream(JsonView jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_searchedCompletely(false),
    m_searchedCompletelyHasBeenSet(false)
{
  *this = jsonValue;
}

SearchedLogStream& SearchedLogStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logStreamName"))
  {
    m_logStreamName = jsonValue.GetString("logStreamName");

    m_logStreamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("searchedCompletely"))
  {
    m_searchedCompletely = jsonValue.GetBool("searchedCompletely");

    m_searchedCompletelyHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchedLogStream::Jsonize() const
{
  JsonValue payload;

  if(m_logStreamNameHasBeenSet)
  {
   payload.WithString("logStreamName", m_logStreamName);

  }

  if(m_searchedCompletelyHasBeenSet)
  {
   payload.WithBool("searchedCompletely", m_searchedCompletely);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
