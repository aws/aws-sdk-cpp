/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceEventWindowStateChange.h>
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
  class DeleteInstanceEventWindowResponse
  {
  public:
    AWS_EC2_API DeleteInstanceEventWindowResponse() = default;
    AWS_EC2_API DeleteInstanceEventWindowResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteInstanceEventWindowResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The state of the event window.</p>
     */
    inline const InstanceEventWindowStateChange& GetInstanceEventWindowState() const { return m_instanceEventWindowState; }
    template<typename InstanceEventWindowStateT = InstanceEventWindowStateChange>
    void SetInstanceEventWindowState(InstanceEventWindowStateT&& value) { m_instanceEventWindowStateHasBeenSet = true; m_instanceEventWindowState = std::forward<InstanceEventWindowStateT>(value); }
    template<typename InstanceEventWindowStateT = InstanceEventWindowStateChange>
    DeleteInstanceEventWindowResponse& WithInstanceEventWindowState(InstanceEventWindowStateT&& value) { SetInstanceEventWindowState(std::forward<InstanceEventWindowStateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteInstanceEventWindowResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceEventWindowStateChange m_instanceEventWindowState;
    bool m_instanceEventWindowStateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
