﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/VpcEndpointSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for response parameters to the <code><a>ListVpcEndpoints</a></code>
   * operation. Returns a list containing summarized details of the VPC
   * endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointsResponse">AWS
   * API Reference</a></p>
   */
  class ListVpcEndpointsResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsResult();
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each endpoint.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaryList() const{ return m_vpcEndpointSummaryList; }
    inline void SetVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { m_vpcEndpointSummaryList = value; }
    inline void SetVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { m_vpcEndpointSummaryList = std::move(value); }
    inline ListVpcEndpointsResult& WithVpcEndpointSummaryList(const Aws::Vector<VpcEndpointSummary>& value) { SetVpcEndpointSummaryList(value); return *this;}
    inline ListVpcEndpointsResult& WithVpcEndpointSummaryList(Aws::Vector<VpcEndpointSummary>&& value) { SetVpcEndpointSummaryList(std::move(value)); return *this;}
    inline ListVpcEndpointsResult& AddVpcEndpointSummaryList(const VpcEndpointSummary& value) { m_vpcEndpointSummaryList.push_back(value); return *this; }
    inline ListVpcEndpointsResult& AddVpcEndpointSummaryList(VpcEndpointSummary&& value) { m_vpcEndpointSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListVpcEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListVpcEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListVpcEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListVpcEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListVpcEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListVpcEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
