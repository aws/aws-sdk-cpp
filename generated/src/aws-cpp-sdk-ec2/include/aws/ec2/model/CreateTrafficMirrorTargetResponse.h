/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorTarget.h>
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
  class CreateTrafficMirrorTargetResponse
  {
  public:
    AWS_EC2_API CreateTrafficMirrorTargetResponse();
    AWS_EC2_API CreateTrafficMirrorTargetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTrafficMirrorTargetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Traffic Mirror target.</p>
     */
    inline const TrafficMirrorTarget& GetTrafficMirrorTarget() const{ return m_trafficMirrorTarget; }
    inline void SetTrafficMirrorTarget(const TrafficMirrorTarget& value) { m_trafficMirrorTarget = value; }
    inline void SetTrafficMirrorTarget(TrafficMirrorTarget&& value) { m_trafficMirrorTarget = std::move(value); }
    inline CreateTrafficMirrorTargetResponse& WithTrafficMirrorTarget(const TrafficMirrorTarget& value) { SetTrafficMirrorTarget(value); return *this;}
    inline CreateTrafficMirrorTargetResponse& WithTrafficMirrorTarget(TrafficMirrorTarget&& value) { SetTrafficMirrorTarget(std::move(value)); return *this;}
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
    inline CreateTrafficMirrorTargetResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTrafficMirrorTargetResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTrafficMirrorTargetResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateTrafficMirrorTargetResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateTrafficMirrorTargetResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    TrafficMirrorTarget m_trafficMirrorTarget;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
