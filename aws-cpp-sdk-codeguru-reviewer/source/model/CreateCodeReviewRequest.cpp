/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/CreateCodeReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCodeReviewRequest::CreateCodeReviewRequest() : 
    m_nameHasBeenSet(false),
    m_repositoryAssociationArnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateCodeReviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_repositoryAssociationArnHasBeenSet)
  {
   payload.WithString("RepositoryAssociationArn", m_repositoryAssociationArn);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




