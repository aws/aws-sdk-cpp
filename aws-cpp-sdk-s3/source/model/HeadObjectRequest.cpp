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
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

HeadObjectRequest::HeadObjectRequest() : 
    m_bucketHasBeenSet(false),
    m_ifMatchHasBeenSet(false),
    m_ifModifiedSinceHasBeenSet(false),
    m_ifNoneMatchHasBeenSet(false),
    m_ifUnmodifiedSinceHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_rangeHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_sSECustomerAlgorithmHasBeenSet(false),
    m_sSECustomerKeyHasBeenSet(false),
    m_sSECustomerKeyMD5HasBeenSet(false),
    m_requestPayer(RequestPayer::NOT_SET),
    m_requestPayerHasBeenSet(false),
    m_partNumber(0),
    m_partNumberHasBeenSet(false)
{
}

Aws::String HeadObjectRequest::SerializePayload() const
{
  return "";
}

void HeadObjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionIdHasBeenSet)
    {
      ss << m_versionId;
      uri.AddQueryStringParameter("versionId", ss.str());
      ss.str("");
    }

    if(m_partNumberHasBeenSet)
    {
      ss << m_partNumber;
      uri.AddQueryStringParameter("partNumber", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection HeadObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.insert(Aws::Http::HeaderValuePair("if-match", ss.str()));
    ss.str("");
  }

  if(m_ifModifiedSinceHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("if-modified-since", m_ifModifiedSince.ToGmtString(DateFormat::RFC822)));
  }

  if(m_ifNoneMatchHasBeenSet)
  {
    ss << m_ifNoneMatch;
    headers.insert(Aws::Http::HeaderValuePair("if-none-match", ss.str()));
    ss.str("");
  }

  if(m_ifUnmodifiedSinceHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("if-unmodified-since", m_ifUnmodifiedSince.ToGmtString(DateFormat::RFC822)));
  }

  if(m_rangeHasBeenSet)
  {
    ss << m_range;
    headers.insert(Aws::Http::HeaderValuePair("range", ss.str()));
    ss.str("");
  }

  if(m_sSECustomerAlgorithmHasBeenSet)
  {
    ss << m_sSECustomerAlgorithm;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-server-side-encryption-customer-algorithm", ss.str()));
    ss.str("");
  }

  if(m_sSECustomerKeyHasBeenSet)
  {
    ss << m_sSECustomerKey;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-server-side-encryption-customer-key", ss.str()));
    ss.str("");
  }

  if(m_sSECustomerKeyMD5HasBeenSet)
  {
    ss << m_sSECustomerKeyMD5;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-server-side-encryption-customer-key-md5", ss.str()));
    ss.str("");
  }

  if(m_requestPayerHasBeenSet)
  {
    headers.insert(Aws::Http::HeaderValuePair("x-amz-request-payer", RequestPayerMapper::GetNameForRequestPayer(m_requestPayer)));
  }

  return headers;
}
