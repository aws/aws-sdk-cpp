﻿/*
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

