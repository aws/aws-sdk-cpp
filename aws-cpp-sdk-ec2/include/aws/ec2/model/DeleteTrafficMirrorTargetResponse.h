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
  class AWS_EC2_API DeleteTrafficMirrorTargetResponse
  {
  public:
    DeleteTrafficMirrorTargetResponse();
    DeleteTrafficMirrorTargetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteTrafficMirrorTargetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetId = value; }

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetId = std::move(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetId.assign(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetResponse& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetResponse& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline DeleteTrafficMirrorTargetResponse& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTrafficMirrorTargetResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTrafficMirrorTargetResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_trafficMirrorTargetId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
