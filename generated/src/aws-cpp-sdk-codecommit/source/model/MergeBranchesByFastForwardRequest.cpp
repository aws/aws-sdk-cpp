/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/MergeBranchesByFastForwardRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

MergeBranchesByFastForwardRequest::MergeBranchesByFastForwardRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_sourceCommitSpecifierHasBeenSet(false),
    m_destinationCommitSpecifierHasBeenSet(false),
    m_targetBranchHasBeenSet(false)
{
}

Aws::String MergeBranchesByFastForwardRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_sourceCommitSpecifierHasBeenSet)
  {
   payload.WithString("sourceCommitSpecifier", m_sourceCommitSpecifier);

  }

  if(m_destinationCommitSpecifierHasBeenSet)
  {
   payload.WithString("destinationCommitSpecifier", m_destinationCommitSpecifier);

  }

  if(m_targetBranchHasBeenSet)
  {
   payload.WithString("targetBranch", m_targetBranch);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection MergeBranchesByFastForwardRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.MergeBranchesByFastForward"));
  return headers;

}




