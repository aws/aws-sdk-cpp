/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>An endpoint (Amazon Web Services resource) or an IP address range, in CIDR
   * format, that is listed in a cross-account attachment. A cross-account resource
   * can be added to an accelerator by specified principals, which are also listed in
   * the attachment.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/cross-account-resources.html">
   * Working with cross-account attachments and resources in Global Accelerator</a>
   * in the <i> Global Accelerator Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CrossAccountResource">AWS
   * API Reference</a></p>
   */
  class CrossAccountResource
  {
  public:
    AWS_GLOBALACCELERATOR_API CrossAccountResource() = default;
    AWS_GLOBALACCELERATOR_API CrossAccountResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CrossAccountResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    CrossAccountResource& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    CrossAccountResource& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline const Aws::String& GetAttachmentArn() const { return m_attachmentArn; }
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }
    template<typename AttachmentArnT = Aws::String>
    void SetAttachmentArn(AttachmentArnT&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::forward<AttachmentArnT>(value); }
    template<typename AttachmentArnT = Aws::String>
    CrossAccountResource& WithAttachmentArn(AttachmentArnT&& value) { SetAttachmentArn(std::forward<AttachmentArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_attachmentArn;
    bool m_attachmentArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
