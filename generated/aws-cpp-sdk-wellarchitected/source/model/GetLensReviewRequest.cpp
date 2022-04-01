/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetLensReviewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLensReviewRequest::GetLensReviewRequest() : 
    m_workloadIdHasBeenSet(false),
    m_lensAliasHasBeenSet(false),
    m_milestoneNumber(0),
    m_milestoneNumberHasBeenSet(false)
{
}

Aws::String GetLensReviewRequest::SerializePayload() const
{
  return {};
}

void GetLensReviewRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_milestoneNumberHasBeenSet)
    {
      ss << m_milestoneNumber;
      uri.AddQueryStringParameter("MilestoneNumber", ss.str());
      ss.str("");
    }

}



