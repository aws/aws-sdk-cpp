/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TrafficMirrorFilterRule.h>
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
  class DescribeTrafficMirrorFilterRulesResponse
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorFilterRulesResponse();
    AWS_EC2_API DescribeTrafficMirrorFilterRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTrafficMirrorFilterRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Traffic mirror rules.</p>
     */
    inline const Aws::Vector<TrafficMirrorFilterRule>& GetTrafficMirrorFilterRules() const{ return m_trafficMirrorFilterRules; }
    inline void SetTrafficMirrorFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { m_trafficMirrorFilterRules = value; }
    inline void SetTrafficMirrorFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { m_trafficMirrorFilterRules = std::move(value); }
    inline DescribeTrafficMirrorFilterRulesResponse& WithTrafficMirrorFilterRules(const Aws::Vector<TrafficMirrorFilterRule>& value) { SetTrafficMirrorFilterRules(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesResponse& WithTrafficMirrorFilterRules(Aws::Vector<TrafficMirrorFilterRule>&& value) { SetTrafficMirrorFilterRules(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesResponse& AddTrafficMirrorFilterRules(const TrafficMirrorFilterRule& value) { m_trafficMirrorFilterRules.push_back(value); return *this; }
    inline DescribeTrafficMirrorFilterRulesResponse& AddTrafficMirrorFilterRules(TrafficMirrorFilterRule&& value) { m_trafficMirrorFilterRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTrafficMirrorFilterRulesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTrafficMirrorFilterRulesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficMirrorFilterRule> m_trafficMirrorFilterRules;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
