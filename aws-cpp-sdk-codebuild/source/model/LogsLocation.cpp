/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codebuild/model/LogsLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

LogsLocation::LogsLocation() : 
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_deepLinkHasBeenSet(false)
{
}

LogsLocation::LogsLocation(const JsonValue& jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_streamNameHasBeenSet(false),
    m_deepLinkHasBeenSet(false)
{
  *this = jsonValue;
}

LogsLocation& LogsLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("groupName"))
  {
    m_groupName = jsonValue.GetString("groupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamName"))
  {
    m_streamName = jsonValue.GetString("streamName");

    m_streamNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deepLink"))
  {
    m_deepLink = jsonValue.GetString("deepLink");

    m_deepLinkHasBeenSet = true;
  }

  return *this;
}

JsonValue LogsLocation::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("groupName", m_groupName);

  }

  if(m_streamNameHasBeenSet)
  {
   payload.WithString("streamName", m_streamName);

  }

  if(m_deepLinkHasBeenSet)
  {
   payload.WithString("deepLink", m_deepLink);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws