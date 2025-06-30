/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/VirtualMFADevice.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateVirtualMFADevice.html">CreateVirtualMFADevice</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADeviceResponse">AWS
   * API Reference</a></p>
   */
  class CreateVirtualMFADeviceResult
  {
  public:
    AWS_IAM_API CreateVirtualMFADeviceResult() = default;
    AWS_IAM_API CreateVirtualMFADeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API CreateVirtualMFADeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline const VirtualMFADevice& GetVirtualMFADevice() const { return m_virtualMFADevice; }
    template<typename VirtualMFADeviceT = VirtualMFADevice>
    void SetVirtualMFADevice(VirtualMFADeviceT&& value) { m_virtualMFADeviceHasBeenSet = true; m_virtualMFADevice = std::forward<VirtualMFADeviceT>(value); }
    template<typename VirtualMFADeviceT = VirtualMFADevice>
    CreateVirtualMFADeviceResult& WithVirtualMFADevice(VirtualMFADeviceT&& value) { SetVirtualMFADevice(std::forward<VirtualMFADeviceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVirtualMFADeviceResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VirtualMFADevice m_virtualMFADevice;
    bool m_virtualMFADeviceHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
