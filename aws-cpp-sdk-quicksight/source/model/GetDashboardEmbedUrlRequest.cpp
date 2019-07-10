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

#include <aws/quicksight/model/GetDashboardEmbedUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDashboardEmbedUrlRequest::GetDashboardEmbedUrlRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_sessionLifetimeInMinutes(0),
    m_sessionLifetimeInMinutesHasBeenSet(false),
    m_undoRedoDisabled(false),
    m_undoRedoDisabledHasBeenSet(false),
    m_resetDisabled(false),
    m_resetDisabledHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

Aws::String GetDashboardEmbedUrlRequest::SerializePayload() const
{
  return {};
}

void GetDashboardEmbedUrlRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identityTypeHasBeenSet)
    {
      ss << IdentityTypeMapper::GetNameForIdentityType(m_identityType);
      uri.AddQueryStringParameter("creds-type", ss.str());
      ss.str("");
    }

    if(m_sessionLifetimeInMinutesHasBeenSet)
    {
      ss << m_sessionLifetimeInMinutes;
      uri.AddQueryStringParameter("session-lifetime", ss.str());
      ss.str("");
    }

    if(m_undoRedoDisabledHasBeenSet)
    {
      ss << m_undoRedoDisabled;
      uri.AddQueryStringParameter("undo-redo-disabled", ss.str());
      ss.str("");
    }

    if(m_resetDisabledHasBeenSet)
    {
      ss << m_resetDisabled;
      uri.AddQueryStringParameter("reset-disabled", ss.str());
      ss.str("");
    }

    if(m_userArnHasBeenSet)
    {
      ss << m_userArn;
      uri.AddQueryStringParameter("user-arn", ss.str());
      ss.str("");
    }

}



