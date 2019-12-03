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

#include <aws/codeguru-reviewer/model/Repository.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

Repository::Repository() : 
    m_codeCommitHasBeenSet(false)
{
}

Repository::Repository(JsonView jsonValue) : 
    m_codeCommitHasBeenSet(false)
{
  *this = jsonValue;
}

Repository& Repository::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeCommit"))
  {
    m_codeCommit = jsonValue.GetObject("CodeCommit");

    m_codeCommitHasBeenSet = true;
  }

  return *this;
}

JsonValue Repository::Jsonize() const
{
  JsonValue payload;

  if(m_codeCommitHasBeenSet)
  {
   payload.WithObject("CodeCommit", m_codeCommit.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
