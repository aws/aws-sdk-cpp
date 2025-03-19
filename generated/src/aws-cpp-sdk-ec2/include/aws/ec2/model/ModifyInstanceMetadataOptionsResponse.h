/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceMetadataOptionsResponse.h>
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
  class ModifyInstanceMetadataOptionsResponse
  {
  public:
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse() = default;
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyInstanceMetadataOptionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceMetadataOptionsResponse& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata options for the instance.</p>
     */
    inline const InstanceMetadataOptionsResponse& GetInstanceMetadataOptions() const { return m_instanceMetadataOptions; }
    template<typename InstanceMetadataOptionsT = InstanceMetadataOptionsResponse>
    void SetInstanceMetadataOptions(InstanceMetadataOptionsT&& value) { m_instanceMetadataOptionsHasBeenSet = true; m_instanceMetadataOptions = std::forward<InstanceMetadataOptionsT>(value); }
    template<typename InstanceMetadataOptionsT = InstanceMetadataOptionsResponse>
    ModifyInstanceMetadataOptionsResponse& WithInstanceMetadataOptions(InstanceMetadataOptionsT&& value) { SetInstanceMetadataOptions(std::forward<InstanceMetadataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyInstanceMetadataOptionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceMetadataOptionsResponse m_instanceMetadataOptions;
    bool m_instanceMetadataOptionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
