/**
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
  class DescribeElasticGpusResponse
  {
  public:
    AWS_EC2_API DescribeElasticGpusResponse() = default;
    AWS_EC2_API DescribeElasticGpusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeElasticGpusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Elastic Graphics accelerators.</p>
     */
    inline const Aws::Vector<ElasticGpus>& GetElasticGpuSet() const { return m_elasticGpuSet; }
    template<typename ElasticGpuSetT = Aws::Vector<ElasticGpus>>
    void SetElasticGpuSet(ElasticGpuSetT&& value) { m_elasticGpuSetHasBeenSet = true; m_elasticGpuSet = std::forward<ElasticGpuSetT>(value); }
    template<typename ElasticGpuSetT = Aws::Vector<ElasticGpus>>
    DescribeElasticGpusResponse& WithElasticGpuSet(ElasticGpuSetT&& value) { SetElasticGpuSet(std::forward<ElasticGpuSetT>(value)); return *this;}
    template<typename ElasticGpuSetT = ElasticGpus>
    DescribeElasticGpusResponse& AddElasticGpuSet(ElasticGpuSetT&& value) { m_elasticGpuSetHasBeenSet = true; m_elasticGpuSet.emplace_back(std::forward<ElasticGpuSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of items to return. If the total number of items available
     * is more than the value specified in max-items then a Next-Token will be provided
     * in the output that you can use to resume pagination.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeElasticGpusResponse& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeElasticGpusResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeElasticGpusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ElasticGpus> m_elasticGpuSet;
    bool m_elasticGpuSetHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
