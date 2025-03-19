/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/EnvironmentStatus.h>
#include <aws/finspace/model/FederationMode.h>
#include <aws/finspace/model/FederationParameters.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>Represents an FinSpace environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_FINSPACE_API Environment() = default;
    AWS_FINSPACE_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Environment& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    Environment& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    Environment& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline EnvironmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Environment& WithStatus(EnvironmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in URL for the web application of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentUrl() const { return m_environmentUrl; }
    inline bool EnvironmentUrlHasBeenSet() const { return m_environmentUrlHasBeenSet; }
    template<typename EnvironmentUrlT = Aws::String>
    void SetEnvironmentUrl(EnvironmentUrlT&& value) { m_environmentUrlHasBeenSet = true; m_environmentUrl = std::forward<EnvironmentUrlT>(value); }
    template<typename EnvironmentUrlT = Aws::String>
    Environment& WithEnvironmentUrl(EnvironmentUrlT&& value) { SetEnvironmentUrl(std::forward<EnvironmentUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Environment& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    Environment& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline const Aws::String& GetSageMakerStudioDomainUrl() const { return m_sageMakerStudioDomainUrl; }
    inline bool SageMakerStudioDomainUrlHasBeenSet() const { return m_sageMakerStudioDomainUrlHasBeenSet; }
    template<typename SageMakerStudioDomainUrlT = Aws::String>
    void SetSageMakerStudioDomainUrl(SageMakerStudioDomainUrlT&& value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl = std::forward<SageMakerStudioDomainUrlT>(value); }
    template<typename SageMakerStudioDomainUrlT = Aws::String>
    Environment& WithSageMakerStudioDomainUrl(SageMakerStudioDomainUrlT&& value) { SetSageMakerStudioDomainUrl(std::forward<SageMakerStudioDomainUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Environment& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const { return m_dedicatedServiceAccountId; }
    inline bool DedicatedServiceAccountIdHasBeenSet() const { return m_dedicatedServiceAccountIdHasBeenSet; }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    void SetDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::forward<DedicatedServiceAccountIdT>(value); }
    template<typename DedicatedServiceAccountIdT = Aws::String>
    Environment& WithDedicatedServiceAccountId(DedicatedServiceAccountIdT&& value) { SetDedicatedServiceAccountId(std::forward<DedicatedServiceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline FederationMode GetFederationMode() const { return m_federationMode; }
    inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }
    inline void SetFederationMode(FederationMode value) { m_federationModeHasBeenSet = true; m_federationMode = value; }
    inline Environment& WithFederationMode(FederationMode value) { SetFederationMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline const FederationParameters& GetFederationParameters() const { return m_federationParameters; }
    inline bool FederationParametersHasBeenSet() const { return m_federationParametersHasBeenSet; }
    template<typename FederationParametersT = FederationParameters>
    void SetFederationParameters(FederationParametersT&& value) { m_federationParametersHasBeenSet = true; m_federationParameters = std::forward<FederationParametersT>(value); }
    template<typename FederationParametersT = FederationParameters>
    Environment& WithFederationParameters(FederationParametersT&& value) { SetFederationParameters(std::forward<FederationParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    EnvironmentStatus m_status{EnvironmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_environmentUrl;
    bool m_environmentUrlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_sageMakerStudioDomainUrl;
    bool m_sageMakerStudioDomainUrlHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_dedicatedServiceAccountId;
    bool m_dedicatedServiceAccountIdHasBeenSet = false;

    FederationMode m_federationMode{FederationMode::NOT_SET};
    bool m_federationModeHasBeenSet = false;

    FederationParameters m_federationParameters;
    bool m_federationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
