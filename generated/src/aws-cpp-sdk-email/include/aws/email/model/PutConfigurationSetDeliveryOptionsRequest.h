/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/DeliveryOptions.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>A request to modify the delivery options for a configuration
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutConfigurationSetDeliveryOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetDeliveryOptionsRequest : public SESRequest
  {
  public:
    AWS_SES_API PutConfigurationSetDeliveryOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetDeliveryOptions"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    PutConfigurationSetDeliveryOptionsRequest& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS).</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const { return m_deliveryOptions; }
    inline bool DeliveryOptionsHasBeenSet() const { return m_deliveryOptionsHasBeenSet; }
    template<typename DeliveryOptionsT = DeliveryOptions>
    void SetDeliveryOptions(DeliveryOptionsT&& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = std::forward<DeliveryOptionsT>(value); }
    template<typename DeliveryOptionsT = DeliveryOptions>
    PutConfigurationSetDeliveryOptionsRequest& WithDeliveryOptions(DeliveryOptionsT&& value) { SetDeliveryOptions(std::forward<DeliveryOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    DeliveryOptions m_deliveryOptions;
    bool m_deliveryOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
