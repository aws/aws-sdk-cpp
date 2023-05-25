/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorSession.h>
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
  class ModifyTrafficMirrorSessionResponse
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorSessionResponse();
    AWS_EC2_API ModifyTrafficMirrorSessionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTrafficMirrorSessionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline const TrafficMirrorSession& GetTrafficMirrorSession() const{ return m_trafficMirrorSession; }

    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSession(const TrafficMirrorSession& value) { m_trafficMirrorSession = value; }

    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSession(TrafficMirrorSession&& value) { m_trafficMirrorSession = std::move(value); }

    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionResponse& WithTrafficMirrorSession(const TrafficMirrorSession& value) { SetTrafficMirrorSession(value); return *this;}

    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionResponse& WithTrafficMirrorSession(TrafficMirrorSession&& value) { SetTrafficMirrorSession(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTrafficMirrorSessionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTrafficMirrorSessionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TrafficMirrorSession m_trafficMirrorSession;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
