/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/artifact/model/CustomerAgreementState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/artifact/model/AgreementType.h>
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
namespace Artifact
{
namespace Model
{

  /**
   * <p>Summary for customer-agreement resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/CustomerAgreementSummary">AWS
   * API Reference</a></p>
   */
  class CustomerAgreementSummary
  {
  public:
    AWS_ARTIFACT_API CustomerAgreementSummary() = default;
    AWS_ARTIFACT_API CustomerAgreementSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API CustomerAgreementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CustomerAgreementSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CustomerAgreementSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CustomerAgreementSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the agreement resource the customer-agreement resource represents.</p>
     */
    inline const Aws::String& GetAgreementArn() const { return m_agreementArn; }
    inline bool AgreementArnHasBeenSet() const { return m_agreementArnHasBeenSet; }
    template<typename AgreementArnT = Aws::String>
    void SetAgreementArn(AgreementArnT&& value) { m_agreementArnHasBeenSet = true; m_agreementArn = std::forward<AgreementArnT>(value); }
    template<typename AgreementArnT = Aws::String>
    CustomerAgreementSummary& WithAgreementArn(AgreementArnT&& value) { SetAgreementArn(std::forward<AgreementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS account Id that owns the resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CustomerAgreementSummary& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the organization that owns the resource.</p>
     */
    inline const Aws::String& GetOrganizationArn() const { return m_organizationArn; }
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }
    template<typename OrganizationArnT = Aws::String>
    void SetOrganizationArn(OrganizationArnT&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::forward<OrganizationArnT>(value); }
    template<typename OrganizationArnT = Aws::String>
    CustomerAgreementSummary& WithOrganizationArn(OrganizationArnT&& value) { SetOrganizationArn(std::forward<OrganizationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the agreement became effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveStart() const { return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    template<typename EffectiveStartT = Aws::Utils::DateTime>
    void SetEffectiveStart(EffectiveStartT&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::forward<EffectiveStartT>(value); }
    template<typename EffectiveStartT = Aws::Utils::DateTime>
    CustomerAgreementSummary& WithEffectiveStart(EffectiveStartT&& value) { SetEffectiveStart(std::forward<EffectiveStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the agreement was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveEnd() const { return m_effectiveEnd; }
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }
    template<typename EffectiveEndT = Aws::Utils::DateTime>
    void SetEffectiveEnd(EffectiveEndT&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::forward<EffectiveEndT>(value); }
    template<typename EffectiveEndT = Aws::Utils::DateTime>
    CustomerAgreementSummary& WithEffectiveEnd(EffectiveEndT&& value) { SetEffectiveEnd(std::forward<EffectiveEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the resource.</p>
     */
    inline CustomerAgreementState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CustomerAgreementState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CustomerAgreementSummary& WithState(CustomerAgreementState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomerAgreementSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Terms required to accept the agreement resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceptanceTerms() const { return m_acceptanceTerms; }
    inline bool AcceptanceTermsHasBeenSet() const { return m_acceptanceTermsHasBeenSet; }
    template<typename AcceptanceTermsT = Aws::Vector<Aws::String>>
    void SetAcceptanceTerms(AcceptanceTermsT&& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms = std::forward<AcceptanceTermsT>(value); }
    template<typename AcceptanceTermsT = Aws::Vector<Aws::String>>
    CustomerAgreementSummary& WithAcceptanceTerms(AcceptanceTermsT&& value) { SetAcceptanceTerms(std::forward<AcceptanceTermsT>(value)); return *this;}
    template<typename AcceptanceTermsT = Aws::String>
    CustomerAgreementSummary& AddAcceptanceTerms(AcceptanceTermsT&& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms.emplace_back(std::forward<AcceptanceTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Terms required to terminate the customer-agreement resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminateTerms() const { return m_terminateTerms; }
    inline bool TerminateTermsHasBeenSet() const { return m_terminateTermsHasBeenSet; }
    template<typename TerminateTermsT = Aws::Vector<Aws::String>>
    void SetTerminateTerms(TerminateTermsT&& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms = std::forward<TerminateTermsT>(value); }
    template<typename TerminateTermsT = Aws::Vector<Aws::String>>
    CustomerAgreementSummary& WithTerminateTerms(TerminateTermsT&& value) { SetTerminateTerms(std::forward<TerminateTermsT>(value)); return *this;}
    template<typename TerminateTermsT = Aws::String>
    CustomerAgreementSummary& AddTerminateTerms(TerminateTermsT&& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms.emplace_back(std::forward<TerminateTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of the customer-agreement resource.</p>
     */
    inline AgreementType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AgreementType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CustomerAgreementSummary& WithType(AgreementType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_agreementArn;
    bool m_agreementArnHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_organizationArn;
    bool m_organizationArnHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveStart{};
    bool m_effectiveStartHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveEnd{};
    bool m_effectiveEndHasBeenSet = false;

    CustomerAgreementState m_state{CustomerAgreementState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceptanceTerms;
    bool m_acceptanceTermsHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminateTerms;
    bool m_terminateTermsHasBeenSet = false;

    AgreementType m_type{AgreementType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
