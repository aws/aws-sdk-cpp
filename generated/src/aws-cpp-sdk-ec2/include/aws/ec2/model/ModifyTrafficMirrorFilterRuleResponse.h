/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorFilterRule.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class ModifyTrafficMirrorFilterRuleResponse
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse() = default;
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     *  <p>Tags are not returned for ModifyTrafficMirrorFilterRule.</p> 
     * <p>A Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorFilterRule& GetTrafficMirrorFilterRule() const { return m_trafficMirrorFilterRule; }
    template<typename TrafficMirrorFilterRuleT = TrafficMirrorFilterRule>
    void SetTrafficMirrorFilterRule(TrafficMirrorFilterRuleT&& value) { m_trafficMirrorFilterRuleHasBeenSet = true; m_trafficMirrorFilterRule = std::forward<TrafficMirrorFilterRuleT>(value); }
    template<typename TrafficMirrorFilterRuleT = TrafficMirrorFilterRule>
    ModifyTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRule(TrafficMirrorFilterRuleT&& value) { SetTrafficMirrorFilterRule(std::forward<TrafficMirrorFilterRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyTrafficMirrorFilterRuleResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TrafficMirrorFilterRule m_trafficMirrorFilterRule;
    bool m_trafficMirrorFilterRuleHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
