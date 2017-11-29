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

#include <aws/codedeploy/model/RawString.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

RawString::RawString() : 
    m_contentHasBeenSet(false),
    m_sha256HasBeenSet(false)
{
}

RawString::RawString(const JsonValue& jsonValue) : 
    m_contentHasBeenSet(false),
    m_sha256HasBeenSet(false)
{
  *this = jsonValue;
}

RawString& RawString::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sha256"))
  {
    m_sha256 = jsonValue.GetString("sha256");

    m_sha256HasBeenSet = true;
  }

  return *this;
}

JsonValue RawString::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_sha256HasBeenSet)
  {
   payload.WithString("sha256", m_sha256);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
