/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/DeleteNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteNodeRequest::DeleteNodeRequest() : 
    m_networkIdHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

Aws::String DeleteNodeRequest::SerializePayload() const
{
  return {};
}

void DeleteNodeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_memberIdHasBeenSet)
    {
      ss << m_memberId;
      uri.AddQueryStringParameter("memberId", ss.str());
      ss.str("");
    }

}



