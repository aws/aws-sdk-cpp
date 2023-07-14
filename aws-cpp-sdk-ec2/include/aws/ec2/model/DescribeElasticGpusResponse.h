﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ElasticGpus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribeElasticGpusResponse
  {
  public:
    DescribeElasticGpusResponse();
    DescribeElasticGpusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeElasticGpusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline const Aws::Vector<ElasticGpus>& GetElasticGpuSet() const{ return m_elasticGpuSet; }

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline void SetElasticGpuSet(const Aws::Vector<ElasticGpus>& value) { m_elasticGpuSet = value; }

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline void SetElasticGpuSet(Aws::Vector<ElasticGpus>&& value) { m_elasticGpuSet = std::move(value); }

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline DescribeElasticGpusResponse& WithElasticGpuSet(const Aws::Vector<ElasticGpus>& value) { SetElasticGpuSet(value); return *this;}

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline DescribeElasticGpusResponse& WithElasticGpuSet(Aws::Vector<ElasticGpus>&& value) { SetElasticGpuSet(std::move(value)); return *this;}

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline DescribeElasticGpusResponse& AddElasticGpuSet(const ElasticGpus& value) { m_elasticGpuSet.push_back(value); return *this; }

    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline DescribeElasticGpusResponse& AddElasticGpuSet(ElasticGpus&& value) { m_elasticGpuSet.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of items to return. If the total number of items available
     * is more than the value specified in max-items then a Next-Token will be provided
     * in the output that you can use to resume pagination.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return. If the total number of items available
     * is more than the value specified in max-items then a Next-Token will be provided
     * in the output that you can use to resume pagination.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>The total number of items to return. If the total number of items available
     * is more than the value specified in max-items then a Next-Token will be provided
     * in the output that you can use to resume pagination.</p>
     */
    inline DescribeElasticGpusResponse& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeElasticGpusResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeElasticGpusResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeElasticGpusResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeElasticGpusResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeElasticGpusResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ElasticGpus> m_elasticGpuSet;

    int m_maxResults;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
