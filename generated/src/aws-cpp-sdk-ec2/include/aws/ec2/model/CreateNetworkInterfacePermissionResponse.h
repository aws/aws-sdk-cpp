/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInterfacePermission.h>
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
  /**
   * <p>Contains the output of CreateNetworkInterfacePermission.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateNetworkInterfacePermissionResult">AWS
   * API Reference</a></p>
   */
  class CreateNetworkInterfacePermissionResponse
  {
  public:
    AWS_EC2_API CreateNetworkInterfacePermissionResponse() = default;
    AWS_EC2_API CreateNetworkInterfacePermissionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateNetworkInterfacePermissionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the permission for the network interface.</p>
     */
    inline const NetworkInterfacePermission& GetInterfacePermission() const { return m_interfacePermission; }
    template<typename InterfacePermissionT = NetworkInterfacePermission>
    void SetInterfacePermission(InterfacePermissionT&& value) { m_interfacePermissionHasBeenSet = true; m_interfacePermission = std::forward<InterfacePermissionT>(value); }
    template<typename InterfacePermissionT = NetworkInterfacePermission>
    CreateNetworkInterfacePermissionResponse& WithInterfacePermission(InterfacePermissionT&& value) { SetInterfacePermission(std::forward<InterfacePermissionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateNetworkInterfacePermissionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInterfacePermission m_interfacePermission;
    bool m_interfacePermissionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
