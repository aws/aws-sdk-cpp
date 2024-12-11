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
    AWS_ARTIFACT_API CustomerAgreementSummary();
    AWS_ARTIFACT_API CustomerAgreementSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API CustomerAgreementSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomerAgreementSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomerAgreementSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CustomerAgreementSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CustomerAgreementSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the customer-agreement resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CustomerAgreementSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CustomerAgreementSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the agreement resource the customer-agreement resource represents.</p>
     */
    inline const Aws::String& GetAgreementArn() const{ return m_agreementArn; }
    inline bool AgreementArnHasBeenSet() const { return m_agreementArnHasBeenSet; }
    inline void SetAgreementArn(const Aws::String& value) { m_agreementArnHasBeenSet = true; m_agreementArn = value; }
    inline void SetAgreementArn(Aws::String&& value) { m_agreementArnHasBeenSet = true; m_agreementArn = std::move(value); }
    inline void SetAgreementArn(const char* value) { m_agreementArnHasBeenSet = true; m_agreementArn.assign(value); }
    inline CustomerAgreementSummary& WithAgreementArn(const Aws::String& value) { SetAgreementArn(value); return *this;}
    inline CustomerAgreementSummary& WithAgreementArn(Aws::String&& value) { SetAgreementArn(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithAgreementArn(const char* value) { SetAgreementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS account Id that owns the resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CustomerAgreementSummary& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CustomerAgreementSummary& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the organization that owns the resource.</p>
     */
    inline const Aws::String& GetOrganizationArn() const{ return m_organizationArn; }
    inline bool OrganizationArnHasBeenSet() const { return m_organizationArnHasBeenSet; }
    inline void SetOrganizationArn(const Aws::String& value) { m_organizationArnHasBeenSet = true; m_organizationArn = value; }
    inline void SetOrganizationArn(Aws::String&& value) { m_organizationArnHasBeenSet = true; m_organizationArn = std::move(value); }
    inline void SetOrganizationArn(const char* value) { m_organizationArnHasBeenSet = true; m_organizationArn.assign(value); }
    inline CustomerAgreementSummary& WithOrganizationArn(const Aws::String& value) { SetOrganizationArn(value); return *this;}
    inline CustomerAgreementSummary& WithOrganizationArn(Aws::String&& value) { SetOrganizationArn(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithOrganizationArn(const char* value) { SetOrganizationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the agreement became effective.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveStart() const{ return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    inline void SetEffectiveStart(const Aws::Utils::DateTime& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = value; }
    inline void SetEffectiveStart(Aws::Utils::DateTime&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::move(value); }
    inline CustomerAgreementSummary& WithEffectiveStart(const Aws::Utils::DateTime& value) { SetEffectiveStart(value); return *this;}
    inline CustomerAgreementSummary& WithEffectiveStart(Aws::Utils::DateTime&& value) { SetEffectiveStart(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the agreement was terminated.</p>
     */
    inline const Aws::Utils::DateTime& GetEffectiveEnd() const{ return m_effectiveEnd; }
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }
    inline void SetEffectiveEnd(const Aws::Utils::DateTime& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = value; }
    inline void SetEffectiveEnd(Aws::Utils::DateTime&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::move(value); }
    inline CustomerAgreementSummary& WithEffectiveEnd(const Aws::Utils::DateTime& value) { SetEffectiveEnd(value); return *this;}
    inline CustomerAgreementSummary& WithEffectiveEnd(Aws::Utils::DateTime&& value) { SetEffectiveEnd(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the resource.</p>
     */
    inline const CustomerAgreementState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CustomerAgreementState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CustomerAgreementState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline CustomerAgreementSummary& WithState(const CustomerAgreementState& value) { SetState(value); return *this;}
    inline CustomerAgreementSummary& WithState(CustomerAgreementState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomerAgreementSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomerAgreementSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomerAgreementSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Terms required to accept the agreement resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceptanceTerms() const{ return m_acceptanceTerms; }
    inline bool AcceptanceTermsHasBeenSet() const { return m_acceptanceTermsHasBeenSet; }
    inline void SetAcceptanceTerms(const Aws::Vector<Aws::String>& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms = value; }
    inline void SetAcceptanceTerms(Aws::Vector<Aws::String>&& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms = std::move(value); }
    inline CustomerAgreementSummary& WithAcceptanceTerms(const Aws::Vector<Aws::String>& value) { SetAcceptanceTerms(value); return *this;}
    inline CustomerAgreementSummary& WithAcceptanceTerms(Aws::Vector<Aws::String>&& value) { SetAcceptanceTerms(std::move(value)); return *this;}
    inline CustomerAgreementSummary& AddAcceptanceTerms(const Aws::String& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms.push_back(value); return *this; }
    inline CustomerAgreementSummary& AddAcceptanceTerms(Aws::String&& value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms.push_back(std::move(value)); return *this; }
    inline CustomerAgreementSummary& AddAcceptanceTerms(const char* value) { m_acceptanceTermsHasBeenSet = true; m_acceptanceTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Terms required to terminate the customer-agreement resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTerminateTerms() const{ return m_terminateTerms; }
    inline bool TerminateTermsHasBeenSet() const { return m_terminateTermsHasBeenSet; }
    inline void SetTerminateTerms(const Aws::Vector<Aws::String>& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms = value; }
    inline void SetTerminateTerms(Aws::Vector<Aws::String>&& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms = std::move(value); }
    inline CustomerAgreementSummary& WithTerminateTerms(const Aws::Vector<Aws::String>& value) { SetTerminateTerms(value); return *this;}
    inline CustomerAgreementSummary& WithTerminateTerms(Aws::Vector<Aws::String>&& value) { SetTerminateTerms(std::move(value)); return *this;}
    inline CustomerAgreementSummary& AddTerminateTerms(const Aws::String& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms.push_back(value); return *this; }
    inline CustomerAgreementSummary& AddTerminateTerms(Aws::String&& value) { m_terminateTermsHasBeenSet = true; m_terminateTerms.push_back(std::move(value)); return *this; }
    inline CustomerAgreementSummary& AddTerminateTerms(const char* value) { m_terminateTermsHasBeenSet = true; m_terminateTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Type of the customer-agreement resource.</p>
     */
    inline const AgreementType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const AgreementType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(AgreementType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CustomerAgreementSummary& WithType(const AgreementType& value) { SetType(value); return *this;}
    inline CustomerAgreementSummary& WithType(AgreementType&& value) { SetType(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    Aws::Utils::DateTime m_effectiveEnd;
    bool m_effectiveEndHasBeenSet = false;

    CustomerAgreementState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceptanceTerms;
    bool m_acceptanceTermsHasBeenSet = false;

    Aws::Vector<Aws::String> m_terminateTerms;
    bool m_terminateTermsHasBeenSet = false;

    AgreementType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
