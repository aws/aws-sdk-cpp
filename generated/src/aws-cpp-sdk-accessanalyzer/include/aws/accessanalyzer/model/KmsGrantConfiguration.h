/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/KmsGrantConstraints.h>
#include <aws/accessanalyzer/model/KmsGrantOperation.h>
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
   * <p>A proposed grant configuration for a KMS key. For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateGrant.html">CreateGrant</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/KmsGrantConfiguration">AWS
   * API Reference</a></p>
   */
  class KmsGrantConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API KmsGrantConfiguration() = default;
    AWS_ACCESSANALYZER_API KmsGrantConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API KmsGrantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline const Aws::Vector<KmsGrantOperation>& GetOperations() const { return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    template<typename OperationsT = Aws::Vector<KmsGrantOperation>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<KmsGrantOperation>>
    KmsGrantConfiguration& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    inline KmsGrantConfiguration& AddOperations(KmsGrantOperation value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const { return m_granteePrincipal; }
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }
    template<typename GranteePrincipalT = Aws::String>
    void SetGranteePrincipal(GranteePrincipalT&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::forward<GranteePrincipalT>(value); }
    template<typename GranteePrincipalT = Aws::String>
    KmsGrantConfiguration& WithGranteePrincipal(GranteePrincipalT&& value) { SetGranteePrincipal(std::forward<GranteePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const { return m_retiringPrincipal; }
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }
    template<typename RetiringPrincipalT = Aws::String>
    void SetRetiringPrincipal(RetiringPrincipalT&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::forward<RetiringPrincipalT>(value); }
    template<typename RetiringPrincipalT = Aws::String>
    KmsGrantConfiguration& WithRetiringPrincipal(RetiringPrincipalT&& value) { SetRetiringPrincipal(std::forward<RetiringPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline const KmsGrantConstraints& GetConstraints() const { return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    template<typename ConstraintsT = KmsGrantConstraints>
    void SetConstraints(ConstraintsT&& value) { m_constraintsHasBeenSet = true; m_constraints = std::forward<ConstraintsT>(value); }
    template<typename ConstraintsT = KmsGrantConstraints>
    KmsGrantConfiguration& WithConstraints(ConstraintsT&& value) { SetConstraints(std::forward<ConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account under which the grant was issued. The
     * account is used to propose KMS grants issued by accounts other than the owner of
     * the key.</p>
     */
    inline const Aws::String& GetIssuingAccount() const { return m_issuingAccount; }
    inline bool IssuingAccountHasBeenSet() const { return m_issuingAccountHasBeenSet; }
    template<typename IssuingAccountT = Aws::String>
    void SetIssuingAccount(IssuingAccountT&& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = std::forward<IssuingAccountT>(value); }
    template<typename IssuingAccountT = Aws::String>
    KmsGrantConfiguration& WithIssuingAccount(IssuingAccountT&& value) { SetIssuingAccount(std::forward<IssuingAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KmsGrantOperation> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet = false;

    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet = false;

    KmsGrantConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    Aws::String m_issuingAccount;
    bool m_issuingAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
