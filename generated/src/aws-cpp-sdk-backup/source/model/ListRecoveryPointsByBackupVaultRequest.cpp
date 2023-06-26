/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRecoveryPointsByBackupVaultRequest::ListRecoveryPointsByBackupVaultRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_byResourceArnHasBeenSet(false),
    m_byResourceTypeHasBeenSet(false),
    m_byBackupPlanIdHasBeenSet(false),
    m_byCreatedBeforeHasBeenSet(false),
    m_byCreatedAfterHasBeenSet(false),
    m_byParentRecoveryPointArnHasBeenSet(false)
{
}

Aws::String ListRecoveryPointsByBackupVaultRequest::SerializePayload() const
{
  return {};
}

void ListRecoveryPointsByBackupVaultRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_byResourceArnHasBeenSet)
    {
      ss << m_byResourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

    if(m_byResourceTypeHasBeenSet)
    {
      ss << m_byResourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_byBackupPlanIdHasBeenSet)
    {
      ss << m_byBackupPlanId;
      uri.AddQueryStringParameter("backupPlanId", ss.str());
      ss.str("");
    }

    if(m_byCreatedBeforeHasBeenSet)
    {
      ss << m_byCreatedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_byCreatedAfterHasBeenSet)
    {
      ss << m_byCreatedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

    if(m_byParentRecoveryPointArnHasBeenSet)
    {
      ss << m_byParentRecoveryPointArn;
      uri.AddQueryStringParameter("parentRecoveryPointArn", ss.str());
      ss.str("");
    }

}



