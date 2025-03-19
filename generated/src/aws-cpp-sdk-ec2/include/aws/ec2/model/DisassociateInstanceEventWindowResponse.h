/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceEventWindow.h>
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
  class DisassociateInstanceEventWindowResponse
  {
  public:
    AWS_EC2_API DisassociateInstanceEventWindowResponse() = default;
    AWS_EC2_API DisassociateInstanceEventWindowResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateInstanceEventWindowResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the event window.</p>
     */
    inline const InstanceEventWindow& GetInstanceEventWindow() const { return m_instanceEventWindow; }
    template<typename InstanceEventWindowT = InstanceEventWindow>
    void SetInstanceEventWindow(InstanceEventWindowT&& value) { m_instanceEventWindowHasBeenSet = true; m_instanceEventWindow = std::forward<InstanceEventWindowT>(value); }
    template<typename InstanceEventWindowT = InstanceEventWindow>
    DisassociateInstanceEventWindowResponse& WithInstanceEventWindow(InstanceEventWindowT&& value) { SetInstanceEventWindow(std::forward<InstanceEventWindowT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisassociateInstanceEventWindowResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceEventWindow m_instanceEventWindow;
    bool m_instanceEventWindowHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
