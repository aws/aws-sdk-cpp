/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

SearchedLogStream::SearchedLogStream(const JsonValue& jsonValue) : 
    m_logStreamNameHasBeenSet(false),
    m_searchedCompletely(false),
    m_searchedCompletelyHasBeenSet(false)
{
  *this = jsonValue;
}

SearchedLogStream& SearchedLogStream::operator =(const JsonValue& jsonValue)
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