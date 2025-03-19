/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class UpdateAcceleratorRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccelerator"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    UpdateAcceleratorRequest& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAcceleratorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a standard accelerator,
     * the value can be IPV4 or DUAL_STACK.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline UpdateAcceleratorRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses for an accelerator.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const { return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    void SetIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::forward<IpAddressesT>(value); }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    UpdateAcceleratorRequest& WithIpAddresses(IpAddressesT&& value) { SetIpAddresses(std::forward<IpAddressesT>(value)); return *this;}
    template<typename IpAddressesT = Aws::String>
    UpdateAcceleratorRequest& AddIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UpdateAcceleratorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
