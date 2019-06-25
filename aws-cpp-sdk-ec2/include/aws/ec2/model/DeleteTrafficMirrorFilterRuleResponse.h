/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API DeleteTrafficMirrorFilterRuleResponse
  {
  public:
    DeleteTrafficMirrorFilterRuleResponse();
    DeleteTrafficMirrorFilterRuleResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteTrafficMirrorFilterRuleResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
