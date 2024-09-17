/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorFilter.h>
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
  class CreateTrafficMirrorFilterResponse
  {
  public:
    AWS_EC2_API CreateTrafficMirrorFilterResponse();
    AWS_EC2_API CreateTrafficMirrorFilterResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTrafficMirrorFilterResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Traffic Mirror filter.</p>
     */
    inline const TrafficMirrorFilter& GetTrafficMirrorFilter() const{ return m_trafficMirrorFilter; }
    inline void SetTrafficMirrorFilter(const TrafficMirrorFilter& value) { m_trafficMirrorFilter = value; }
    inline void SetTrafficMirrorFilter(TrafficMirrorFilter&& value) { m_trafficMirrorFilter = std::move(value); }
    inline CreateTrafficMirrorFilterResponse& WithTrafficMirrorFilter(const TrafficMirrorFilter& value) { SetTrafficMirrorFilter(value); return *this;}
    inline CreateTrafficMirrorFilterResponse& WithTrafficMirrorFilter(TrafficMirrorFilter&& value) { SetTrafficMirrorFilter(std::move(value)); return *this;}
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
    inline CreateTrafficMirrorFilterResponse& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTrafficMirrorFilterResponse& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTrafficMirrorFilterResponse& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateTrafficMirrorFilterResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateTrafficMirrorFilterResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    TrafficMirrorFilter m_trafficMirrorFilter;

    Aws::String m_clientToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
