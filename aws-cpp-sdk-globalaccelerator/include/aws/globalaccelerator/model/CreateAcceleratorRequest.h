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
  class AWS_GLOBALACCELERATOR_API CreateAcceleratorRequest : public GlobalAcceleratorRequest
  {
  public:
    CreateAcceleratorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccelerator"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline CreateAcceleratorRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline CreateAcceleratorRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of an accelerator. The name can have a maximum of 32 characters,
     * must contain only alphanumeric characters or hyphens (-), and must not begin or
     * end with a hyphen.</p>
     */
    inline CreateAcceleratorRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline CreateAcceleratorRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The value for the address type must be IPv4. </p>
     */
    inline CreateAcceleratorRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>Optionally, if you've added your own IP address pool to Global Accelerator
     * (BYOIP), you can choose IP addresses from your own pool to use for the
     * accelerator's static IP addresses when you create an accelerator. You can
     * specify one or two addresses, separated by a comma. Do not include the /32
     * suffix.</p> <p>Only one IP address from each of your IP address ranges can be
     * used for each accelerator. If you specify only one IP address from your IP
     * address range, Global Accelerator assigns a second static IP address for the
     * accelerator from the AWS IP address pool.</p> <p> Note that you can't update IP
     * addresses for an existing accelerator. To change them, you must create a new
     * accelerator with the new addresses.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/using-byoip.html">Bring
     * Your Own IP Addresses (BYOIP)</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }


    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, an accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, an accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, an accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether an accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, an accelerator
     * cannot be deleted. If set to false, the accelerator can be deleted.</p>
     */
    inline CreateAcceleratorRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline CreateAcceleratorRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline CreateAcceleratorRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of an accelerator.</p>
     */
    inline CreateAcceleratorRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Create tags for an accelerator.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/tagging-in-global-accelerator.html">Tagging
     * in AWS Global Accelerator</a> in the <i>AWS Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline CreateAcceleratorRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
