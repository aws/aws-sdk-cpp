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
  class DeleteTrafficMirrorTargetResponse
  {
  public:
    AWS_EC2_API DeleteTrafficMirrorTargetResponse();
    AWS_EC2_API DeleteTrafficMirrorTargetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTrafficMirrorTargetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
