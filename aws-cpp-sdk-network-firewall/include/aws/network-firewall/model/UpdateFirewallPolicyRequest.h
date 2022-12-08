/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallPolicy.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <utility>

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

  /**
   */
  class UpdateFirewallPolicyRequest : public NetworkFirewallRequest
  {
  public:
    AWS_NETWORKFIREWALL_API UpdateFirewallPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallPolicy"; }

    AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

    AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const{ return m_updateToken; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const Aws::String& value) { m_updateTokenHasBeenSet = true; m_updateToken = value; }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(Aws::String&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::move(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline void SetUpdateToken(const char* value) { m_updateTokenHasBeenSet = true; m_updateToken.assign(value); }

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateFirewallPolicyRequest& WithUpdateToken(const Aws::String& value) { SetUpdateToken(value); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateFirewallPolicyRequest& WithUpdateToken(Aws::String&& value) { SetUpdateToken(std::move(value)); return *this;}

    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the firewall policy. The token marks the state of the
     * policy resource at the time of the request. </p> <p>To make changes to the
     * policy, you provide the token in your request. Network Firewall uses the token
     * to ensure that the policy hasn't changed since you last retrieved it. If it has
     * changed, the operation fails with an <code>InvalidTokenException</code>. If this
     * happens, retrieve the firewall policy again to get a current copy of it with
     * current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline UpdateFirewallPolicyRequest& WithUpdateToken(const char* value) { SetUpdateToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const{ return m_firewallPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline bool FirewallPolicyArnHasBeenSet() const { return m_firewallPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(const Aws::String& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(Aws::String&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyArn(const char* value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyArn(const Aws::String& value) { SetFirewallPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyArn(Aws::String&& value) { SetFirewallPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p> <p>You must
     * specify the ARN or the name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyArn(const char* value) { SetFirewallPolicyArn(value); return *this;}


    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline const Aws::String& GetFirewallPolicyName() const{ return m_firewallPolicyName; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline bool FirewallPolicyNameHasBeenSet() const { return m_firewallPolicyNameHasBeenSet; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(const Aws::String& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = value; }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(Aws::String&& value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName = std::move(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline void SetFirewallPolicyName(const char* value) { m_firewallPolicyNameHasBeenSet = true; m_firewallPolicyName.assign(value); }

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyName(const Aws::String& value) { SetFirewallPolicyName(value); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyName(Aws::String&& value) { SetFirewallPolicyName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the firewall policy. You can't change the name of a
     * firewall policy after you create it.</p> <p>You must specify the ARN or the
     * name, and you can specify both. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicyName(const char* value) { SetFirewallPolicyName(value); return *this;}


    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline const FirewallPolicy& GetFirewallPolicy() const{ return m_firewallPolicy; }

    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline bool FirewallPolicyHasBeenSet() const { return m_firewallPolicyHasBeenSet; }

    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline void SetFirewallPolicy(const FirewallPolicy& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = value; }

    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline void SetFirewallPolicy(FirewallPolicy&& value) { m_firewallPolicyHasBeenSet = true; m_firewallPolicy = std::move(value); }

    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicy(const FirewallPolicy& value) { SetFirewallPolicy(value); return *this;}

    /**
     * <p>The updated firewall policy to use for the firewall. </p>
     */
    inline UpdateFirewallPolicyRequest& WithFirewallPolicy(FirewallPolicy&& value) { SetFirewallPolicy(std::move(value)); return *this;}


    /**
     * <p>A description of the firewall policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline UpdateFirewallPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline UpdateFirewallPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the firewall policy.</p>
     */
    inline UpdateFirewallPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Indicates whether you want Network Firewall to just check the validity of the
     * request, rather than run the request. </p> <p>If set to <code>TRUE</code>,
     * Network Firewall checks whether the request can run successfully, but doesn't
     * actually make the requested changes. The call returns the value that the request
     * would return if you ran it with dry run set to <code>FALSE</code>, but doesn't
     * make additions or changes to your resources. This option allows you to make sure
     * that you have the required permissions to run the request and that your request
     * parameters are valid. </p> <p>If set to <code>FALSE</code>, Network Firewall
     * makes the requested changes to your resources. </p>
     */
    inline UpdateFirewallPolicyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline UpdateFirewallPolicyRequest& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains settings for encryption of your firewall policy
     * resources.</p>
     */
    inline UpdateFirewallPolicyRequest& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_firewallPolicyName;
    bool m_firewallPolicyNameHasBeenSet = false;

    FirewallPolicy m_firewallPolicy;
    bool m_firewallPolicyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
