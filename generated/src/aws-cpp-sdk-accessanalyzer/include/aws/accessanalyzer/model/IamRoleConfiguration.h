/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
   * <p>The proposed access control configuration for an IAM role. You can propose a
   * configuration for a new IAM role or an existing IAM role that you own by
   * specifying the trust policy. If the configuration is for a new IAM role, you
   * must specify the trust policy. If the configuration is for an existing IAM role
   * that you own and you do not propose the trust policy, the access preview uses
   * the existing trust policy for the role. The proposed trust policy cannot be an
   * empty string. For more information about role trust policy limits, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_iam-quotas.html">IAM
   * and STS quotas</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/IamRoleConfiguration">AWS
   * API Reference</a></p>
   */
  class IamRoleConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API IamRoleConfiguration() = default;
    AWS_ACCESSANALYZER_API IamRoleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API IamRoleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed trust policy for the IAM role.</p>
     */
    inline const Aws::String& GetTrustPolicy() const { return m_trustPolicy; }
    inline bool TrustPolicyHasBeenSet() const { return m_trustPolicyHasBeenSet; }
    template<typename TrustPolicyT = Aws::String>
    void SetTrustPolicy(TrustPolicyT&& value) { m_trustPolicyHasBeenSet = true; m_trustPolicy = std::forward<TrustPolicyT>(value); }
    template<typename TrustPolicyT = Aws::String>
    IamRoleConfiguration& WithTrustPolicy(TrustPolicyT&& value) { SetTrustPolicy(std::forward<TrustPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trustPolicy;
    bool m_trustPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
