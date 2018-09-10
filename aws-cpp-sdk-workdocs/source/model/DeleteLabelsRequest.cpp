﻿/*
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

#include <aws/workdocs/model/DeleteLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteLabelsRequest::DeleteLabelsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_authenticationTokenHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_deleteAll(false),
    m_deleteAllHasBeenSet(false)
{
}

Aws::String DeleteLabelsRequest::SerializePayload() const
{
  return "";
}

Aws::Http::HeaderValueCollection DeleteLabelsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void DeleteLabelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_labelsHasBeenSet)
    {
      for(const auto& item : m_labels)
      {
        ss << item;
        uri.AddQueryStringParameter("labels", ss.str());
        ss.str("");
      }
    }

    if(m_deleteAllHasBeenSet)
    {
      ss << m_deleteAll;
      uri.AddQueryStringParameter("deleteAll", ss.str());
      ss.str("");
    }

}



