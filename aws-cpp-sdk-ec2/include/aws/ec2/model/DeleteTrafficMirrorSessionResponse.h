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
  class DeleteTrafficMirrorSessionResponse
  {
  public:
    AWS_EC2_API DeleteTrafficMirrorSessionResponse();
    AWS_EC2_API DeleteTrafficMirrorSessionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTrafficMirrorSessionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const{ return m_trafficMirrorSessionId; }

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const Aws::String& value) { m_trafficMirrorSessionId = value; }

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(Aws::String&& value) { m_trafficMirrorSessionId = std::move(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const char* value) { m_trafficMirrorSessionId.assign(value); }

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline DeleteTrafficMirrorSessionResponse& WithTrafficMirrorSessionId(const Aws::String& value) { SetTrafficMirrorSessionId(value); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline DeleteTrafficMirrorSessionResponse& WithTrafficMirrorSessionId(Aws::String&& value) { SetTrafficMirrorSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted Traffic Mirror session.</p>
     */
    inline DeleteTrafficMirrorSessionResponse& WithTrafficMirrorSessionId(const char* value) { SetTrafficMirrorSessionId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTrafficMirrorSessionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTrafficMirrorSessionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_trafficMirrorSessionId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
