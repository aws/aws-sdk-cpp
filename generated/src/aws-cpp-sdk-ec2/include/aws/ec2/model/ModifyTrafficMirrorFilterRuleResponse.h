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
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse();
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTrafficMirrorFilterRuleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Modifies a Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorFilterRule& GetTrafficMirrorFilterRule() const{ return m_trafficMirrorFilterRule; }

    /**
     * <p>Modifies a Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRule(const TrafficMirrorFilterRule& value) { m_trafficMirrorFilterRule = value; }

    /**
     * <p>Modifies a Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRule(TrafficMirrorFilterRule&& value) { m_trafficMirrorFilterRule = std::move(value); }

    /**
     * <p>Modifies a Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRule(const TrafficMirrorFilterRule& value) { SetTrafficMirrorFilterRule(value); return *this;}

    /**
     * <p>Modifies a Traffic Mirror rule.</p>
     */
    inline ModifyTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRule(TrafficMirrorFilterRule&& value) { SetTrafficMirrorFilterRule(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTrafficMirrorFilterRuleResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTrafficMirrorFilterRuleResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TrafficMirrorFilterRule m_trafficMirrorFilterRule;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
