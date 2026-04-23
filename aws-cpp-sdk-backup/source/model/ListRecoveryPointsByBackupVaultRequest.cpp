/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_byCreatedAfterHasBeenSet(false)
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
      ss << m_byCreatedBefore.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("createdBefore", ss.str());
      ss.str("");
    }

    if(m_byCreatedAfterHasBeenSet)
    {
      ss << m_byCreatedAfter.ToGmtString(DateFormat::RFC822);
      uri.AddQueryStringParameter("createdAfter", ss.str());
      ss.str("");
    }

}



