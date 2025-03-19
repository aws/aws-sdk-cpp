/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/TrafficSourceState.h>
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
namespace AutoScaling
{
namespace Model
{
  class DescribeTrafficSourcesResult
  {
  public:
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult() = default;
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API DescribeTrafficSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the traffic sources.</p>
     */
    inline const Aws::Vector<TrafficSourceState>& GetTrafficSources() const { return m_trafficSources; }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceState>>
    void SetTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::forward<TrafficSourcesT>(value); }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceState>>
    DescribeTrafficSourcesResult& WithTrafficSources(TrafficSourcesT&& value) { SetTrafficSources(std::forward<TrafficSourcesT>(value)); return *this;}
    template<typename TrafficSourcesT = TrafficSourceState>
    DescribeTrafficSourcesResult& AddTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.emplace_back(std::forward<TrafficSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This string indicates that the response contains more items than can be
     * returned in a single response. To receive additional items, specify this string
     * for the <code>NextToken</code> value when requesting the next set of items. This
     * value is null when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrafficSourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTrafficSourcesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficSourceState> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
