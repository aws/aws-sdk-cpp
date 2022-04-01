/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/UpgradeLensReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpgradeLensReviewRequest::UpgradeLensReviewRequest() : 
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_milestoneNameHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

Aws::String UpgradeLensReviewRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_milestoneNameHasBeenSet)
  {
   payload.WithString("MilestoneName", m_milestoneName);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




