﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class CreateCustomRoutingAcceleratorRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingAcceleratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomRoutingAccelerator"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of a custom routing accelerator. The name can have a maximum of 64
     * characters, must contain only alphanumeric characters or hyphens (-), and must
     * not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateCustomRoutingAcceleratorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateCustomRoutingAcceleratorRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose an IPv4 address from your own pool to use for the
     * accelerator's static IPv4 address when you create an accelerator. </p> <p>After
     * you bring an address range to Amazon Web Services, it appears in your account as
     * an address pool. When you create an accelerator, you can assign one IPv4 address
     * from your range to it. Global Accelerator assigns you a second static IPv4
     * address from an Amazon IP address range. If you bring two IPv4 address ranges to
     * Amazon Web Services, you can assign one IPv4 address from each range to your
     * accelerator. This restriction is because Global Accelerator assigns each address
     * range to a different network zone, for high availability.</p> <p>You can specify
     * one or two addresses, separated by a space. Do not include the /32 suffix.</p>
     * <p>Note that you can't update IP addresses for an existing accelerator. To
     * change them, you must create a new accelerator with the new addresses.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * your own IP addresses (BYOIP)</a> in the <i>Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }
    inline CreateCustomRoutingAcceleratorRequest& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }
    inline CreateCustomRoutingAcceleratorRequest& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }
    inline CreateCustomRoutingAcceleratorRequest& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, an accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateCustomRoutingAcceleratorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline CreateCustomRoutingAcceleratorRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in Global Accelerator</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateCustomRoutingAcceleratorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateCustomRoutingAcceleratorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateCustomRoutingAcceleratorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
