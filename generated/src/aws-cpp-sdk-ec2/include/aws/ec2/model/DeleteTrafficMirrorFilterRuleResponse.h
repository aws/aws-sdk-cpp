/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class DeleteTrafficMirrorFilterRuleResponse
  {
  public:
    AWS_EC2_API DeleteTrafficMirrorFilterRuleResponse();
    AWS_EC2_API DeleteTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTrafficMirrorFilterRuleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterRuleId() const{ return m_trafficMirrorFilterRuleId; }

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(const Aws::String& value) { m_trafficMirrorFilterRuleId = value; }

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(Aws::String&& value) { m_trafficMirrorFilterRuleId = std::move(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline void SetTrafficMirrorFilterRuleId(const char* value) { m_trafficMirrorFilterRuleId.assign(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline DeleteTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRuleId(const Aws::String& value) { SetTrafficMirrorFilterRuleId(value); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline DeleteTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRuleId(Aws::String&& value) { SetTrafficMirrorFilterRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror rule.</p>
     */
    inline DeleteTrafficMirrorFilterRuleResponse& WithTrafficMirrorFilterRuleId(const char* value) { SetTrafficMirrorFilterRuleId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTrafficMirrorFilterRuleResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTrafficMirrorFilterRuleResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_trafficMirrorFilterRuleId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
