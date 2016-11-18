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
#include <aws/s3/model/ListPartsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPartsRequest::ListPartsRequest() : 
    m_bucketHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_maxParts(0),
    m_maxPartsHasBeenSet(false),
    m_partNumberMarker(0),
    m_partNumberMarkerHasBeenSet(false),
    m_uploadIdHasBeenSet(false),
    m_requestPayer(RequestPayer::NOT_SET),
    m_requestPayerHasBeenSet(false)
{
}

Aws::String ListPartsRequest::SerializePayload() const
{
  return "";
}

void ListPartsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxPartsHasBeenSet)
    {
      ss << m_maxParts;
      uri.AddQueryStringParameter("max-parts", ss.str());
      ss.str("");
    }

    if(m_partNumberMarkerHasBeenSet)
    {
      ss << m_partNumberMarker;
      uri.AddQueryStringParameter("part-number-marker", ss.str());
      ss.str("");
    }

    if(m_uploadIdHasBeenSet)
    {
      ss << m_uploadId;
      uri.AddQueryStringParameter("uploadId", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection ListPartsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_requestPayerHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("x-amz-request-payer", RequestPayerMapper::GetNameForRequestPayer(m_requestPayer)));
  }

  return headers;
}
