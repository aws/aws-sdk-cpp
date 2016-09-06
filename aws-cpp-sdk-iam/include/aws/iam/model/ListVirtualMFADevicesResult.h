/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/VirtualMFADevice.h>

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
   * <p>Contains the response to a successful <a>ListVirtualMFADevices</a> request.
   * </p>
   */
  class AWS_IAM_API ListVirtualMFADevicesResult
  {
  public:
    ListVirtualMFADevicesResult();
    ListVirtualMFADevicesResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListVirtualMFADevicesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline const Aws::Vector<VirtualMFADevice>& GetVirtualMFADevices() const{ return m_virtualMFADevices; }

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline void SetVirtualMFADevices(const Aws::Vector<VirtualMFADevice>& value) { m_virtualMFADevices = value; }

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline void SetVirtualMFADevices(Aws::Vector<VirtualMFADevice>&& value) { m_virtualMFADevices = value; }

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline ListVirtualMFADevicesResult& WithVirtualMFADevices(const Aws::Vector<VirtualMFADevice>& value) { SetVirtualMFADevices(value); return *this;}

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline ListVirtualMFADevicesResult& WithVirtualMFADevices(Aws::Vector<VirtualMFADevice>&& value) { SetVirtualMFADevices(value); return *this;}

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline ListVirtualMFADevicesResult& AddVirtualMFADevices(const VirtualMFADevice& value) { m_virtualMFADevices.push_back(value); return *this; }

    /**
     * <p> The list of virtual MFA devices in the current account that match the
     * <code>AssignmentStatus</code> value that was passed in the request.</p>
     */
    inline ListVirtualMFADevicesResult& AddVirtualMFADevices(VirtualMFADevice&& value) { m_virtualMFADevices.push_back(value); return *this; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline ListVirtualMFADevicesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListVirtualMFADevicesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListVirtualMFADevicesResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListVirtualMFADevicesResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListVirtualMFADevicesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListVirtualMFADevicesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<VirtualMFADevice> m_virtualMFADevices;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws