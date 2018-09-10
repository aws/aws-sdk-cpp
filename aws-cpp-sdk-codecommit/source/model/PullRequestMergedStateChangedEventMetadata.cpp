﻿/*
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

#include <aws/codecommit/model/PullRequestMergedStateChangedEventMetadata.h>
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

PullRequestMergedStateChangedEventMetadata::PullRequestMergedStateChangedEventMetadata() : 
    m_repositoryNameHasBeenSet(false),
    m_destinationReferenceHasBeenSet(false),
    m_mergeMetadataHasBeenSet(false)
{
}

PullRequestMergedStateChangedEventMetadata::PullRequestMergedStateChangedEventMetadata(JsonView jsonValue) : 
    m_repositoryNameHasBeenSet(false),
    m_destinationReferenceHasBeenSet(false),
    m_mergeMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

PullRequestMergedStateChangedEventMetadata& PullRequestMergedStateChangedEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationReference"))
  {
    m_destinationReference = jsonValue.GetString("destinationReference");

    m_destinationReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mergeMetadata"))
  {
    m_mergeMetadata = jsonValue.GetObject("mergeMetadata");

    m_mergeMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue PullRequestMergedStateChangedEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_destinationReferenceHasBeenSet)
  {
   payload.WithString("destinationReference", m_destinationReference);

  }

  if(m_mergeMetadataHasBeenSet)
  {
   payload.WithObject("mergeMetadata", m_mergeMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
