/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GitPullRequestFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

GitPullRequestFilter::GitPullRequestFilter() : 
    m_eventsHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
}

GitPullRequestFilter::GitPullRequestFilter(JsonView jsonValue) : 
    m_eventsHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_filePathsHasBeenSet(false)
{
  *this = jsonValue;
}

GitPullRequestFilter& GitPullRequestFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(GitPullRequestEventTypeMapper::GetGitPullRequestEventTypeForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branches"))
  {
    m_branches = jsonValue.GetObject("branches");

    m_branchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filePaths"))
  {
    m_filePaths = jsonValue.GetObject("filePaths");

    m_filePathsHasBeenSet = true;
  }

  return *this;
}

JsonValue GitPullRequestFilter::Jsonize() const
{
  JsonValue payload;

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(GitPullRequestEventTypeMapper::GetNameForGitPullRequestEventType(m_events[eventsIndex]));
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_branchesHasBeenSet)
  {
   payload.WithObject("branches", m_branches.Jsonize());

  }

  if(m_filePathsHasBeenSet)
  {
   payload.WithObject("filePaths", m_filePaths.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
