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
#include <aws/s3/model/GetBucketMetricsConfigurationRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

GetBucketMetricsConfigurationRequest::GetBucketMetricsConfigurationRequest() : 
    m_bucketHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String GetBucketMetricsConfigurationRequest::SerializePayload() const
{
  return "";
}

void GetBucketMetricsConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_idHasBeenSet)
    {
      ss << m_id;
      uri.AddQueryStringParameter("id", ss.str());
      ss.str("");
    }

}

