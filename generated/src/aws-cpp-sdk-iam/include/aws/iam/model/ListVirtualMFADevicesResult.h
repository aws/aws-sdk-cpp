/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/VirtualMFADevice.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListVirtualMFADevices.html">ListVirtualMFADevices</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListVirtualMFADevicesResponse">AWS
   * API Reference</a></p>
   */
  class ListVirtualMFADevicesResult
  {
  public:
    AWS_IAM_API ListVirtualMFADevicesResult() = default;
    AWS_IAM_API ListVirtualMFADevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListVirtualMFADevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline const Aws::Vector<VirtualMFADevice>& GetVirtualMFADevices() const { return m_virtualMFADevices; }
    template<typename VirtualMFADevicesT = Aws::Vector<VirtualMFADevice>>
    void SetVirtualMFADevices(VirtualMFADevicesT&& value) { m_virtualMFADevicesHasBeenSet = true; m_virtualMFADevices = std::forward<VirtualMFADevicesT>(value); }
    template<typename VirtualMFADevicesT = Aws::Vector<VirtualMFADevice>>
    ListVirtualMFADevicesResult& WithVirtualMFADevices(VirtualMFADevicesT&& value) { SetVirtualMFADevices(std::forward<VirtualMFADevicesT>(value)); return *this;}
    template<typename VirtualMFADevicesT = VirtualMFADevice>
    ListVirtualMFADevicesResult& AddVirtualMFADevices(VirtualMFADevicesT&& value) { m_virtualMFADevicesHasBeenSet = true; m_virtualMFADevices.emplace_back(std::forward<VirtualMFADevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListVirtualMFADevicesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListVirtualMFADevicesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListVirtualMFADevicesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualMFADevice> m_virtualMFADevices;
    bool m_virtualMFADevicesHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
