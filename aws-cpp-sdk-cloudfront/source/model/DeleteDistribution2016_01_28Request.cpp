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
#include <aws/cloudfront/model/DeleteDistribution2016_01_28Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

DeleteDistribution2016_01_28Request::DeleteDistribution2016_01_28Request() : 
    m_idHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String DeleteDistribution2016_01_28Request::SerializePayload() const
{
  return "";
}


Aws::Http::HeaderValueCollection DeleteDistribution2016_01_28Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.insert(Aws::Http::HeaderValuePair("if-match", ss.str()));
    ss.str("");
  }

  return headers;
}
