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

#include <aws/sns/model/UntagResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UntagResource&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  UntagResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
