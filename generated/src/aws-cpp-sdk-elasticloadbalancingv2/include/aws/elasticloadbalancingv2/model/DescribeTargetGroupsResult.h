/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/TargetGroup.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class DescribeTargetGroupsResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeTargetGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the target groups.</p>
     */
    inline const Aws::Vector<TargetGroup>& GetTargetGroups() const { return m_targetGroups; }
    template<typename TargetGroupsT = Aws::Vector<TargetGroup>>
    void SetTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups = std::forward<TargetGroupsT>(value); }
    template<typename TargetGroupsT = Aws::Vector<TargetGroup>>
    DescribeTargetGroupsResult& WithTargetGroups(TargetGroupsT&& value) { SetTargetGroups(std::forward<TargetGroupsT>(value)); return *this;}
    template<typename TargetGroupsT = TargetGroup>
    DescribeTargetGroupsResult& AddTargetGroups(TargetGroupsT&& value) { m_targetGroupsHasBeenSet = true; m_targetGroups.emplace_back(std::forward<TargetGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the marker for the next set of
     * results. Otherwise, this is null.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    DescribeTargetGroupsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTargetGroupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TargetGroup> m_targetGroups;
    bool m_targetGroupsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
