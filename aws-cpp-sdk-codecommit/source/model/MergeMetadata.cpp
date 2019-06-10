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

#include <aws/codecommit/model/MergeMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

MergeMetadata::MergeMetadata() : 
    m_isMerged(false),
    m_isMergedHasBeenSet(false),
    m_mergedByHasBeenSet(false),
    m_mergeCommitIdHasBeenSet(false),
    m_mergeOption(MergeOptionTypeEnum::NOT_SET),
    m_mergeOptionHasBeenSet(false)
{
}

MergeMetadata::MergeMetadata(JsonView jsonValue) : 
    m_isMerged(false),
    m_isMergedHasBeenSet(false),
    m_mergedByHasBeenSet(false),
    m_mergeCommitIdHasBeenSet(false),
    m_mergeOption(MergeOptionTypeEnum::NOT_SET),
    m_mergeOptionHasBeenSet(false)
{
  *this = jsonValue;
}

MergeMetadata& MergeMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isMerged"))
  {
    m_isMerged = jsonValue.GetBool("isMerged");

    m_isMergedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergedBy"))
  {
    m_mergedBy = jsonValue.GetString("mergedBy");

    m_mergedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeCommitId"))
  {
    m_mergeCommitId = jsonValue.GetString("mergeCommitId");

    m_mergeCommitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeOption"))
  {
    m_mergeOption = MergeOptionTypeEnumMapper::GetMergeOptionTypeEnumForName(jsonValue.GetString("mergeOption"));

    m_mergeOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue MergeMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_isMergedHasBeenSet)
  {
   payload.WithBool("isMerged", m_isMerged);

  }

  if(m_mergedByHasBeenSet)
  {
   payload.WithString("mergedBy", m_mergedBy);

  }

  if(m_mergeCommitIdHasBeenSet)
  {
   payload.WithString("mergeCommitId", m_mergeCommitId);

  }

  if(m_mergeOptionHasBeenSet)
  {
   payload.WithString("mergeOption", MergeOptionTypeEnumMapper::GetNameForMergeOptionTypeEnum(m_mergeOption));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
