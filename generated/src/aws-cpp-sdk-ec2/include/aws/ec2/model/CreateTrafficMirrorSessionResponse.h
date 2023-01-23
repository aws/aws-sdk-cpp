/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorSession.h>
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
  class CreateTrafficMirrorSessionResponse
  {
  public:
    AWS_EC2_API CreateTrafficMirrorSessionResponse();
    AWS_EC2_API CreateTrafficMirrorSessionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTrafficMirrorSessionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline CreateTrafficMirrorSessionResponse& WithTrafficMirrorSession(const TrafficMirrorSession& value) { SetTrafficMirrorSession(value); return *this;}

    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionResponse& WithTrafficMirrorSession(TrafficMirrorSession&& value) { SetTrafficMirrorSession(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTrafficMirrorSessionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTrafficMirrorSessionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TrafficMirrorSession m_trafficMirrorSession;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
