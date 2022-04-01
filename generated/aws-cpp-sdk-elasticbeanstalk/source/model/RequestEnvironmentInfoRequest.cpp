/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/RequestEnvironmentInfoRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

RequestEnvironmentInfoRequest::RequestEnvironmentInfoRequest() : 
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_infoType(EnvironmentInfoType::NOT_SET),
    m_infoTypeHasBeenSet(false)
{
}

Aws::String RequestEnvironmentInfoRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RequestEnvironmentInfo&";
  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_infoTypeHasBeenSet)
  {
    ss << "InfoType=" << EnvironmentInfoTypeMapper::GetNameForEnvironmentInfoType(m_infoType) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  RequestEnvironmentInfoRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
