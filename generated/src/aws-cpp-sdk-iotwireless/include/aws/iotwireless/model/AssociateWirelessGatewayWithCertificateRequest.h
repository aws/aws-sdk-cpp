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
    AWS_IOTWIRELESS_API AssociateWirelessGatewayWithCertificateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWirelessGatewayWithCertificate"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the resource to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AssociateWirelessGatewayWithCertificateRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the certificate to associate with the wireless gateway.</p>
     */
    inline const Aws::String& GetIotCertificateId() const { return m_iotCertificateId; }
    inline bool IotCertificateIdHasBeenSet() const { return m_iotCertificateIdHasBeenSet; }
    template<typename IotCertificateIdT = Aws::String>
    void SetIotCertificateId(IotCertificateIdT&& value) { m_iotCertificateIdHasBeenSet = true; m_iotCertificateId = std::forward<IotCertificateIdT>(value); }
    template<typename IotCertificateIdT = Aws::String>
    AssociateWirelessGatewayWithCertificateRequest& WithIotCertificateId(IotCertificateIdT&& value) { SetIotCertificateId(std::forward<IotCertificateIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_iotCertificateId;
    bool m_iotCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
