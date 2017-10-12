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

#include <aws/elasticbeanstalk/model/UpdateTagsForResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

UpdateTagsForResourceRequest::UpdateTagsForResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagsToAddHasBeenSet(false),
    m_tagsToRemoveHasBeenSet(false)
{
}

Aws::String UpdateTagsForResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateTagsForResource&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_tagsToAddHasBeenSet)
  {
    unsigned tagsToAddCount = 1;
    for(auto& item : m_tagsToAdd)
    {
      item.OutputToStream(ss, "TagsToAdd.member.", tagsToAddCount, "");
      tagsToAddCount++;
    }
  }

  if(m_tagsToRemoveHasBeenSet)
  {
    unsigned tagsToRemoveCount = 1;
    for(auto& item : m_tagsToRemove)
    {
      ss << "TagsToRemove.member." << tagsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagsToRemoveCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateTagsForResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
