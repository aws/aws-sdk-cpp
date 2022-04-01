/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/SendApiAssetRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataExchange::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

SendApiAssetRequest::SendApiAssetRequest() : 
    m_queryStringParametersHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_requestHeadersHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}


void SendApiAssetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_queryStringParametersHasBeenSet)
    {
      for(auto& item : m_queryStringParameters)
      {
        ss << item.second;
        uri.AddQueryStringParameter(item.first.c_str(), ss.str());
        ss.str("");
      }
    }

}

Aws::Http::HeaderValueCollection SendApiAssetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_assetIdHasBeenSet)
  {
    ss << m_assetId;
    headers.emplace("x-amzn-dataexchange-asset-id",  ss.str());
    ss.str("");
  }

  if(m_dataSetIdHasBeenSet)
  {
    ss << m_dataSetId;
    headers.emplace("x-amzn-dataexchange-data-set-id",  ss.str());
    ss.str("");
  }

  if(m_requestHeadersHasBeenSet)
  {
    for(const auto& item : m_requestHeaders)
    {
      ss << "x-amzn-dataexchange-header-" << item.first;
      headers.emplace(ss.str(), item.second);
      ss.str("");
    }
  }

  if(m_methodHasBeenSet)
  {
    ss << m_method;
    headers.emplace("x-amzn-dataexchange-http-method",  ss.str());
    ss.str("");
  }

  if(m_pathHasBeenSet)
  {
    ss << m_path;
    headers.emplace("x-amzn-dataexchange-path",  ss.str());
    ss.str("");
  }

  if(m_revisionIdHasBeenSet)
  {
    ss << m_revisionId;
    headers.emplace("x-amzn-dataexchange-revision-id",  ss.str());
    ss.str("");
  }

  return headers;

}
