/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/CreateSourceRepositoryBranchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSourceRepositoryBranchRequest::CreateSourceRepositoryBranchRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_sourceRepositoryNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_headCommitIdHasBeenSet(false)
{
}

Aws::String CreateSourceRepositoryBranchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_headCommitIdHasBeenSet)
  {
   payload.WithString("headCommitId", m_headCommitId);

  }

  return payload.View().WriteReadable();
}




