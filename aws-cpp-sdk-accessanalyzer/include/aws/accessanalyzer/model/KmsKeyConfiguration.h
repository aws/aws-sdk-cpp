/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/KmsGrantConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Proposed access control configuration for a KMS key. You can propose a
   * configuration for a new KMS key or an existing KMS key that you own by
   * specifying the key policy and KMS grant configuration. If the configuration is
   * for an existing key and you do not specify the key policy, the access preview
   * uses the existing policy for the key. If the access preview is for a new
   * resource and you do not specify the key policy, then the access preview uses the
   * default key policy. The proposed key policy cannot be an empty string. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
   * key policy</a>. For more information about key policy limits, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/resource-limits.html">Resource
   * quotas</a>.</p> <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/KmsKeyConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API KmsKeyConfiguration
  {
  public:
    KmsKeyConfiguration();
    KmsKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    KmsKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline const Aws::Vector<KmsGrantConfiguration>& GetGrants() const{ return m_grants; }

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline void SetGrants(const Aws::Vector<KmsGrantConfiguration>& value) { m_grantsHasBeenSet = true; m_grants = value; }

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline void SetGrants(Aws::Vector<KmsGrantConfiguration>&& value) { m_grantsHasBeenSet = true; m_grants = std::move(value); }

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline KmsKeyConfiguration& WithGrants(const Aws::Vector<KmsGrantConfiguration>& value) { SetGrants(value); return *this;}

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline KmsKeyConfiguration& WithGrants(Aws::Vector<KmsGrantConfiguration>&& value) { SetGrants(std::move(value)); return *this;}

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline KmsKeyConfiguration& AddGrants(const KmsGrantConfiguration& value) { m_grantsHasBeenSet = true; m_grants.push_back(value); return *this; }

    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline KmsKeyConfiguration& AddGrants(KmsGrantConfiguration&& value) { m_grantsHasBeenSet = true; m_grants.push_back(std::move(value)); return *this; }


    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyPolicies() const{ return m_keyPolicies; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline bool KeyPoliciesHasBeenSet() const { return m_keyPoliciesHasBeenSet; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline void SetKeyPolicies(const Aws::Map<Aws::String, Aws::String>& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies = value; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline void SetKeyPolicies(Aws::Map<Aws::String, Aws::String>&& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies = std::move(value); }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& WithKeyPolicies(const Aws::Map<Aws::String, Aws::String>& value) { SetKeyPolicies(value); return *this;}

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& WithKeyPolicies(Aws::Map<Aws::String, Aws::String>&& value) { SetKeyPolicies(std::move(value)); return *this;}

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(const Aws::String& key, const Aws::String& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(key, value); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(Aws::String&& key, const Aws::String& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(std::move(key), value); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(const Aws::String& key, Aws::String&& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(Aws::String&& key, Aws::String&& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(const char* key, Aws::String&& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(Aws::String&& key, const char* value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(std::move(key), value); return *this; }

    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline KmsKeyConfiguration& AddKeyPolicies(const char* key, const char* value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(key, value); return *this; }

  private:

    Aws::Vector<KmsGrantConfiguration> m_grants;
    bool m_grantsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_keyPolicies;
    bool m_keyPoliciesHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
