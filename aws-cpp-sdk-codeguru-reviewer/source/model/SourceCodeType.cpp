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

#include <aws/codeguru-reviewer/model/SourceCodeType.h>
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

SourceCodeType::SourceCodeType() : 
    m_commitDiffHasBeenSet(false)
{
}

SourceCodeType::SourceCodeType(JsonView jsonValue) : 
    m_commitDiffHasBeenSet(false)
{
  *this = jsonValue;
}

SourceCodeType& SourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CommitDiff"))
  {
    m_commitDiff = jsonValue.GetObject("CommitDiff");

    m_commitDiffHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_commitDiffHasBeenSet)
  {
   payload.WithObject("CommitDiff", m_commitDiff.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
