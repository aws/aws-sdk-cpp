/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetCoreNetworkPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetCoreNetworkPolicyRequest::GetCoreNetworkPolicyRequest() : 
    m_coreNetworkIdHasBeenSet(false),
    m_policyVersionId(0),
    m_policyVersionIdHasBeenSet(false),
    m_alias(CoreNetworkPolicyAlias::NOT_SET),
    m_aliasHasBeenSet(false)
{
}

Aws::String GetCoreNetworkPolicyRequest::SerializePayload() const
{
  return {};
}

void GetCoreNetworkPolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_policyVersionIdHasBeenSet)
    {
      ss << m_policyVersionId;
      uri.AddQueryStringParameter("policyVersionId", ss.str());
      ss.str("");
    }

    if(m_aliasHasBeenSet)
    {
      ss << CoreNetworkPolicyAliasMapper::GetNameForCoreNetworkPolicyAlias(m_alias);
      uri.AddQueryStringParameter("alias", ss.str());
      ss.str("");
    }

}



