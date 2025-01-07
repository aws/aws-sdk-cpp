/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceBandwidthWeighting.h>
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
  class ModifyInstanceNetworkPerformanceOptionsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceNetworkPerformanceOptionsResponse();
    AWS_EC2_API ModifyInstanceNetworkPerformanceOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceNetworkPerformanceOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The instance ID that was updated.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the updated configuration for bandwidth weighting on the specified
     * instance.</p>
     */
    inline const InstanceBandwidthWeighting& GetBandwidthWeighting() const{ return m_bandwidthWeighting; }
    inline void SetBandwidthWeighting(const InstanceBandwidthWeighting& value) { m_bandwidthWeighting = value; }
    inline void SetBandwidthWeighting(InstanceBandwidthWeighting&& value) { m_bandwidthWeighting = std::move(value); }
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithBandwidthWeighting(const InstanceBandwidthWeighting& value) { SetBandwidthWeighting(value); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithBandwidthWeighting(InstanceBandwidthWeighting&& value) { SetBandwidthWeighting(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyInstanceNetworkPerformanceOptionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;

    InstanceBandwidthWeighting m_bandwidthWeighting;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
