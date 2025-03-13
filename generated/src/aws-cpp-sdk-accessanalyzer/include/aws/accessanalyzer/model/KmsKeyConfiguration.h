/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/KmsGrantConfiguration.h>
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
  class KmsKeyConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API KmsKeyConfiguration() = default;
    AWS_ACCESSANALYZER_API KmsKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API KmsKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Resource policy configuration for the KMS key. The only valid value for the
     * name of the key policy is <code>default</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * key policy</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKeyPolicies() const { return m_keyPolicies; }
    inline bool KeyPoliciesHasBeenSet() const { return m_keyPoliciesHasBeenSet; }
    template<typename KeyPoliciesT = Aws::Map<Aws::String, Aws::String>>
    void SetKeyPolicies(KeyPoliciesT&& value) { m_keyPoliciesHasBeenSet = true; m_keyPolicies = std::forward<KeyPoliciesT>(value); }
    template<typename KeyPoliciesT = Aws::Map<Aws::String, Aws::String>>
    KmsKeyConfiguration& WithKeyPolicies(KeyPoliciesT&& value) { SetKeyPolicies(std::forward<KeyPoliciesT>(value)); return *this;}
    template<typename KeyPoliciesKeyT = Aws::String, typename KeyPoliciesValueT = Aws::String>
    KmsKeyConfiguration& AddKeyPolicies(KeyPoliciesKeyT&& key, KeyPoliciesValueT&& value) {
      m_keyPoliciesHasBeenSet = true; m_keyPolicies.emplace(std::forward<KeyPoliciesKeyT>(key), std::forward<KeyPoliciesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of proposed grant configurations for the KMS key. If the proposed
     * grant configuration is for an existing key, the access preview uses the proposed
     * list of grant configurations in place of the existing grants. Otherwise, the
     * access preview uses the existing grants for the key.</p>
     */
    inline const Aws::Vector<KmsGrantConfiguration>& GetGrants() const { return m_grants; }
    inline bool GrantsHasBeenSet() const { return m_grantsHasBeenSet; }
    template<typename GrantsT = Aws::Vector<KmsGrantConfiguration>>
    void SetGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants = std::forward<GrantsT>(value); }
    template<typename GrantsT = Aws::Vector<KmsGrantConfiguration>>
    KmsKeyConfiguration& WithGrants(GrantsT&& value) { SetGrants(std::forward<GrantsT>(value)); return *this;}
    template<typename GrantsT = KmsGrantConfiguration>
    KmsKeyConfiguration& AddGrants(GrantsT&& value) { m_grantsHasBeenSet = true; m_grants.emplace_back(std::forward<GrantsT>(value)); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_keyPolicies;
    bool m_keyPoliciesHasBeenSet = false;

    Aws::Vector<KmsGrantConfiguration> m_grants;
    bool m_grantsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
