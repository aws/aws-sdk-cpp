/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorFilter.h>
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
  class DescribeTrafficMirrorFiltersResponse
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorFiltersResponse() = default;
    AWS_EC2_API DescribeTrafficMirrorFiltersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrafficMirrorFiltersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more Traffic Mirror filters.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilter>& GetTrafficMirrorFilters() const { return m_trafficMirrorFilters; }
    template<typename TrafficMirrorFiltersT = Aws::Vector<TrafficMirrorFilter>>
    void SetTrafficMirrorFilters(TrafficMirrorFiltersT&& value) { m_trafficMirrorFiltersHasBeenSet = true; m_trafficMirrorFilters = std::forward<TrafficMirrorFiltersT>(value); }
    template<typename TrafficMirrorFiltersT = Aws::Vector<TrafficMirrorFilter>>
    DescribeTrafficMirrorFiltersResponse& WithTrafficMirrorFilters(TrafficMirrorFiltersT&& value) { SetTrafficMirrorFilters(std::forward<TrafficMirrorFiltersT>(value)); return *this;}
    template<typename TrafficMirrorFiltersT = TrafficMirrorFilter>
    DescribeTrafficMirrorFiltersResponse& AddTrafficMirrorFilters(TrafficMirrorFiltersT&& value) { m_trafficMirrorFiltersHasBeenSet = true; m_trafficMirrorFilters.emplace_back(std::forward<TrafficMirrorFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrafficMirrorFiltersResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrafficMirrorFiltersResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficMirrorFilter> m_trafficMirrorFilters;
    bool m_trafficMirrorFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
