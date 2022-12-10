/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AssociateWirelessGatewayWithCertificateRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API AssociateWirelessGatewayWithCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWirelessGatewayWithCertificate"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource to update.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline const Aws::String& GetIotCertificateId() const{ return m_iotCertificateId; }

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline bool IotCertificateIdHasBeenSet() const { return m_iotCertificateIdHasBeenSet; }

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const Aws::String& value) { m_iotCertificateIdHasBeenSet = true; m_iotCertificateId = value; }

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(Aws::String&& value) { m_iotCertificateIdHasBeenSet = true; m_iotCertificateId = std::move(value); }

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline void SetIotCertificateId(const char* value) { m_iotCertificateIdHasBeenSet = true; m_iotCertificateId.assign(value); }

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithIotCertificateId(const Aws::String& value) { SetIotCertificateId(value); return *this;}

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithIotCertificateId(Aws::String&& value) { SetIotCertificateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline AssociateWirelessGatewayWithCertificateRequest& WithIotCertificateId(const char* value) { SetIotCertificateId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_iotCertificateId;
    bool m_iotCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
