/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/KmsGrantConstraints.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ACCESSANALYZER_API KmsGrantConfiguration
  {
  public:
    KmsGrantConfiguration();
    KmsGrantConfiguration(Aws::Utils::Json::JsonView jsonValue);
    KmsGrantConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline const KmsGrantConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline void SetConstraints(const KmsGrantConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline void SetConstraints(KmsGrantConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline KmsGrantConfiguration& WithConstraints(const KmsGrantConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>Use this structure to propose allowing <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operations</a> in the grant only when the operation request includes the
     * specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
     * context</a>.</p>
     */
    inline KmsGrantConfiguration& WithConstraints(KmsGrantConstraints&& value) { SetConstraints(std::move(value)); return *this;}


    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline const Aws::String& GetGranteePrincipal() const{ return m_granteePrincipal; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline bool GranteePrincipalHasBeenSet() const { return m_granteePrincipalHasBeenSet; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline void SetGranteePrincipal(const Aws::String& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = value; }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline void SetGranteePrincipal(Aws::String&& value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal = std::move(value); }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline void SetGranteePrincipal(const char* value) { m_granteePrincipalHasBeenSet = true; m_granteePrincipal.assign(value); }

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline KmsGrantConfiguration& WithGranteePrincipal(const Aws::String& value) { SetGranteePrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline KmsGrantConfiguration& WithGranteePrincipal(Aws::String&& value) { SetGranteePrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal that is given permission to perform the operations that the
     * grant permits.</p>
     */
    inline KmsGrantConfiguration& WithGranteePrincipal(const char* value) { SetGranteePrincipal(value); return *this;}


    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline const Aws::String& GetIssuingAccount() const{ return m_issuingAccount; }

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline bool IssuingAccountHasBeenSet() const { return m_issuingAccountHasBeenSet; }

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline void SetIssuingAccount(const Aws::String& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = value; }

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline void SetIssuingAccount(Aws::String&& value) { m_issuingAccountHasBeenSet = true; m_issuingAccount = std::move(value); }

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline void SetIssuingAccount(const char* value) { m_issuingAccountHasBeenSet = true; m_issuingAccount.assign(value); }

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline KmsGrantConfiguration& WithIssuingAccount(const Aws::String& value) { SetIssuingAccount(value); return *this;}

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline KmsGrantConfiguration& WithIssuingAccount(Aws::String&& value) { SetIssuingAccount(std::move(value)); return *this;}

    /**
     * <p> The AWS account under which the grant was issued. The account is used to
     * propose KMS grants issued by accounts other than the owner of the key.</p>
     */
    inline KmsGrantConfiguration& WithIssuingAccount(const char* value) { SetIssuingAccount(value); return *this;}


    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline const Aws::Vector<KmsGrantOperation>& GetOperations() const{ return m_operations; }

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline void SetOperations(const Aws::Vector<KmsGrantOperation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline void SetOperations(Aws::Vector<KmsGrantOperation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline KmsGrantConfiguration& WithOperations(const Aws::Vector<KmsGrantOperation>& value) { SetOperations(value); return *this;}

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline KmsGrantConfiguration& WithOperations(Aws::Vector<KmsGrantOperation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline KmsGrantConfiguration& AddOperations(const KmsGrantOperation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>A list of operations that the grant permits.</p>
     */
    inline KmsGrantConfiguration& AddOperations(KmsGrantOperation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline const Aws::String& GetRetiringPrincipal() const{ return m_retiringPrincipal; }

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline bool RetiringPrincipalHasBeenSet() const { return m_retiringPrincipalHasBeenSet; }

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline void SetRetiringPrincipal(const Aws::String& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = value; }

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline void SetRetiringPrincipal(Aws::String&& value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal = std::move(value); }

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline void SetRetiringPrincipal(const char* value) { m_retiringPrincipalHasBeenSet = true; m_retiringPrincipal.assign(value); }

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline KmsGrantConfiguration& WithRetiringPrincipal(const Aws::String& value) { SetRetiringPrincipal(value); return *this;}

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline KmsGrantConfiguration& WithRetiringPrincipal(Aws::String&& value) { SetRetiringPrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal that is given permission to retire the grant by using <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_RetireGrant.html">RetireGrant</a>
     * operation.</p>
     */
    inline KmsGrantConfiguration& WithRetiringPrincipal(const char* value) { SetRetiringPrincipal(value); return *this;}

  private:

    KmsGrantConstraints m_constraints;
    bool m_constraintsHasBeenSet;

    Aws::String m_granteePrincipal;
    bool m_granteePrincipalHasBeenSet;

    Aws::String m_issuingAccount;
    bool m_issuingAccountHasBeenSet;

    Aws::Vector<KmsGrantOperation> m_operations;
    bool m_operationsHasBeenSet;

    Aws::String m_retiringPrincipal;
    bool m_retiringPrincipalHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
