/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class UpdateCustomRoutingAcceleratorRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateCustomRoutingAcceleratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCustomRoutingAccelerator"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const{ return m_acceleratorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline void SetAcceleratorArn(const Aws::String& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline void SetAcceleratorArn(Aws::String&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline void SetAcceleratorArn(const char* value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithAcceleratorArn(const Aws::String& value) { SetAcceleratorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithAcceleratorArn(Aws::String&& value) { SetAcceleratorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator to update.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithAcceleratorArn(const char* value) { SetAcceleratorArn(value); return *this;}


    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the accelerator. The name can have a maximum of 64 characters,
     * must contain only alphanumeric characters, periods (.), or hyphens (-), and must
     * not begin or end with a hyphen or period.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline UpdateCustomRoutingAcceleratorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
