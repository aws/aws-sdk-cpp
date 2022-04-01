/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/GetLensVersionDifferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLensVersionDifferenceRequest::GetLensVersionDifferenceRequest() : 
    m_lensAliasHasBeenSet(false),
    m_baseLensVersionHasBeenSet(false),
    m_targetLensVersionHasBeenSet(false)
{
}

Aws::String GetLensVersionDifferenceRequest::SerializePayload() const
{
  return {};
}

void GetLensVersionDifferenceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_baseLensVersionHasBeenSet)
    {
      ss << m_baseLensVersion;
      uri.AddQueryStringParameter("BaseLensVersion", ss.str());
      ss.str("");
    }

    if(m_targetLensVersionHasBeenSet)
    {
      ss << m_targetLensVersion;
      uri.AddQueryStringParameter("TargetLensVersion", ss.str());
      ss.str("");
    }

}



