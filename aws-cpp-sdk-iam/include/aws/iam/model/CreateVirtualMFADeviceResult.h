﻿/**
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
   * <p>Contains the response to a successful <a>CreateVirtualMFADevice</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/CreateVirtualMFADeviceResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API CreateVirtualMFADeviceResult
  {
  public:
    CreateVirtualMFADeviceResult();
    CreateVirtualMFADeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVirtualMFADeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline const VirtualMFADevice& GetVirtualMFADevice() const{ return m_virtualMFADevice; }

    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline void SetVirtualMFADevice(const VirtualMFADevice& value) { m_virtualMFADevice = value; }

    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline void SetVirtualMFADevice(VirtualMFADevice&& value) { m_virtualMFADevice = std::move(value); }

    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline CreateVirtualMFADeviceResult& WithVirtualMFADevice(const VirtualMFADevice& value) { SetVirtualMFADevice(value); return *this;}

    /**
     * <p>A structure containing details about the new virtual MFA device.</p>
     */
    inline CreateVirtualMFADeviceResult& WithVirtualMFADevice(VirtualMFADevice&& value) { SetVirtualMFADevice(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateVirtualMFADeviceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVirtualMFADeviceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VirtualMFADevice m_virtualMFADevice;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
