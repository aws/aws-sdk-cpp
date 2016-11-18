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
#include <aws/ec2/model/DescribeIdFormatRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeIdFormatRequest::DescribeIdFormatRequest() : 
    m_resourceHasBeenSet(false)
{
}

Aws::String DescribeIdFormatRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeIdFormat&";
  if(m_resourceHasBeenSet)
  {
    ss << "Resource=" << StringUtils::URLEncode(m_resource.c_str()) << "&";
  }

  ss << "Version=2015-10-01";
  return ss.str();
}

