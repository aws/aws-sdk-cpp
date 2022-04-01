/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/GetProgrammaticAccessCredentialsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetProgrammaticAccessCredentialsRequest::GetProgrammaticAccessCredentialsRequest() : 
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

Aws::String GetProgrammaticAccessCredentialsRequest::SerializePayload() const
{
  return {};
}

void GetProgrammaticAccessCredentialsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_durationInMinutesHasBeenSet)
    {
      ss << m_durationInMinutes;
      uri.AddQueryStringParameter("durationInMinutes", ss.str());
      ss.str("");
    }

    if(m_environmentIdHasBeenSet)
    {
      ss << m_environmentId;
      uri.AddQueryStringParameter("environmentId", ss.str());
      ss.str("");
    }

}



