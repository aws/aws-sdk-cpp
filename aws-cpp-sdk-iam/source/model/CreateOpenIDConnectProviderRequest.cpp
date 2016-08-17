/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/CreateOpenIDConnectProviderRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

CreateOpenIDConnectProviderRequest::CreateOpenIDConnectProviderRequest() : 
    m_urlHasBeenSet(false),
    m_clientIDListHasBeenSet(false),
    m_thumbprintListHasBeenSet(false)
{
}

Aws::String CreateOpenIDConnectProviderRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateOpenIDConnectProvider&";
  if(m_urlHasBeenSet)
  {
    ss << "Url=" << StringUtils::URLEncode(m_url.c_str()) << "&";
  }

  if(m_clientIDListHasBeenSet)
  {
    unsigned clientIDListCount = 1;
    for(auto& item : m_clientIDList)
    {
      ss << "ClientIDList.member." << clientIDListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      clientIDListCount++;
    }
  }

  if(m_thumbprintListHasBeenSet)
  {
    unsigned thumbprintListCount = 1;
    for(auto& item : m_thumbprintList)
    {
      ss << "ThumbprintList.member." << thumbprintListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      thumbprintListCount++;
    }
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

