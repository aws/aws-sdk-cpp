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

#include <aws/codeguru-reviewer/model/CommitDiffSourceCodeType.h>
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

CommitDiffSourceCodeType::CommitDiffSourceCodeType() : 
    m_sourceCommitHasBeenSet(false),
    m_destinationCommitHasBeenSet(false)
{
}

CommitDiffSourceCodeType::CommitDiffSourceCodeType(JsonView jsonValue) : 
    m_sourceCommitHasBeenSet(false),
    m_destinationCommitHasBeenSet(false)
{
  *this = jsonValue;
}

CommitDiffSourceCodeType& CommitDiffSourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceCommit"))
  {
    m_sourceCommit = jsonValue.GetString("SourceCommit");

    m_sourceCommitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationCommit"))
  {
    m_destinationCommit = jsonValue.GetString("DestinationCommit");

    m_destinationCommitHasBeenSet = true;
  }

  return *this;
}

JsonValue CommitDiffSourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceCommitHasBeenSet)
  {
   payload.WithString("SourceCommit", m_sourceCommit);

  }

  if(m_destinationCommitHasBeenSet)
  {
   payload.WithString("DestinationCommit", m_destinationCommit);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
