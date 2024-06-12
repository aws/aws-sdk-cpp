/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorFilterRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateTrafficMirrorFilterRuleResponse
  {
  public:
    AWS_EC2_API CreateTrafficMirrorFilterRuleResponse();
    AWS_EC2_API CreateTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTrafficMirrorFilterRuleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Traffic Mirror rule.</p>
     */
    inline const TrafficMirrorFilterRule& GetTrafficMirrorFilterRule() const{ return m_trafficMirrorFilterRule; }
    inline void SetTrafficMirrorFilterRule(const TrafficMirrorFilterRule& value) { m_trafficMirrorFilterRule = value; }
    inline void SetTrafficMirrorFilterRule(TrafficMirrorFilterRule&& value) { m_trafficMirrorFilterRule = std::move(value); }
    inline CreateTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRule(const TrafficMirrorFilterRule& value) { SetTrafficMirrorFilterRule(value); return *this;}
    inline CreateTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRule(TrafficMirrorFilterRule&& value) { SetTrafficMirrorFilterRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline CreateTrafficMirrorFilterRuleResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTrafficMirrorFilterRuleResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterRuleResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateTrafficMirrorFilterRuleResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateTrafficMirrorFilterRuleResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    TrafficMirrorFilterRule m_trafficMirrorFilterRule;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
