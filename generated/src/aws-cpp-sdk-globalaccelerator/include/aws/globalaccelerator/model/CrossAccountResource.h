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
    AWS_GLOBALACCELERATOR_API CrossAccountResource();
    AWS_GLOBALACCELERATOR_API CrossAccountResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CrossAccountResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline CrossAccountResource& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline CrossAccountResource& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The endpoint ID for the endpoint that is listed in a cross-account attachment
     * and can be added to an accelerator by specified principals.</p>
     */
    inline CrossAccountResource& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline CrossAccountResource& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline CrossAccountResource& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>An IP address range, in CIDR format, that is specified as an Amazon Web
     * Services resource. The address must be provisioned and advertised in Global
     * Accelerator by following the bring your own IP address (BYOIP) process for
     * Global Accelerator.</p> <p> For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the Global Accelerator Developer Guide.</p>
     */
    inline CrossAccountResource& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline const Aws::String& GetAttachmentArn() const{ return m_attachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline bool AttachmentArnHasBeenSet() const { return m_attachmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline void SetAttachmentArn(const Aws::String& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline void SetAttachmentArn(Aws::String&& value) { m_attachmentArnHasBeenSet = true; m_attachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline void SetAttachmentArn(const char* value) { m_attachmentArnHasBeenSet = true; m_attachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline CrossAccountResource& WithAttachmentArn(const Aws::String& value) { SetAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline CrossAccountResource& WithAttachmentArn(Aws::String&& value) { SetAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cross-account attachment that specifies
     * the resources (endpoints or CIDR range) that can be added to accelerators and
     * principals that have permission to add them.</p>
     */
    inline CrossAccountResource& WithAttachmentArn(const char* value) { SetAttachmentArn(value); return *this;}

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
