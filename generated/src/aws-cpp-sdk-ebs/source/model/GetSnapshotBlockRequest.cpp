/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/GetSnapshotBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSnapshotBlockRequest::GetSnapshotBlockRequest() : 
    m_snapshotIdHasBeenSet(false),
    m_blockIndex(0),
    m_blockIndexHasBeenSet(false),
    m_blockTokenHasBeenSet(false)
{
}

Aws::String GetSnapshotBlockRequest::SerializePayload() const
{
  return {};
}

void GetSnapshotBlockRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_blockTokenHasBeenSet)
    {
      ss << m_blockToken;
      uri.AddQueryStringParameter("blockToken", ss.str());
      ss.str("");
    }

}



