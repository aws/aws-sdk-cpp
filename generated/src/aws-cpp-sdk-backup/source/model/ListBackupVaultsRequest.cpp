/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListBackupVaultsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListBackupVaultsRequest::ListBackupVaultsRequest() : 
    m_byVaultType(VaultType::NOT_SET),
    m_byVaultTypeHasBeenSet(false),
    m_byShared(false),
    m_bySharedHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListBackupVaultsRequest::SerializePayload() const
{
  return {};
}

void ListBackupVaultsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_byVaultTypeHasBeenSet)
    {
      ss << VaultTypeMapper::GetNameForVaultType(m_byVaultType);
      uri.AddQueryStringParameter("vaultType", ss.str());
      ss.str("");
    }

    if(m_bySharedHasBeenSet)
    {
      ss << m_byShared;
      uri.AddQueryStringParameter("shared", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



