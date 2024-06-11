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
    AWS_FINSPACE_API Environment();
    AWS_FINSPACE_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Environment& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline Environment& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline Environment& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline Environment& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline Environment& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline Environment& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline Environment& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Environment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}
    inline Environment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sign-in URL for the web application of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentUrl() const{ return m_environmentUrl; }
    inline bool EnvironmentUrlHasBeenSet() const { return m_environmentUrlHasBeenSet; }
    inline void SetEnvironmentUrl(const Aws::String& value) { m_environmentUrlHasBeenSet = true; m_environmentUrl = value; }
    inline void SetEnvironmentUrl(Aws::String&& value) { m_environmentUrlHasBeenSet = true; m_environmentUrl = std::move(value); }
    inline void SetEnvironmentUrl(const char* value) { m_environmentUrlHasBeenSet = true; m_environmentUrl.assign(value); }
    inline Environment& WithEnvironmentUrl(const Aws::String& value) { SetEnvironmentUrl(value); return *this;}
    inline Environment& WithEnvironmentUrl(Aws::String&& value) { SetEnvironmentUrl(std::move(value)); return *this;}
    inline Environment& WithEnvironmentUrl(const char* value) { SetEnvironmentUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }
    inline Environment& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}
    inline Environment& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}
    inline Environment& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline const Aws::String& GetSageMakerStudioDomainUrl() const{ return m_sageMakerStudioDomainUrl; }
    inline bool SageMakerStudioDomainUrlHasBeenSet() const { return m_sageMakerStudioDomainUrlHasBeenSet; }
    inline void SetSageMakerStudioDomainUrl(const Aws::String& value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl = value; }
    inline void SetSageMakerStudioDomainUrl(Aws::String&& value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl = std::move(value); }
    inline void SetSageMakerStudioDomainUrl(const char* value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl.assign(value); }
    inline Environment& WithSageMakerStudioDomainUrl(const Aws::String& value) { SetSageMakerStudioDomainUrl(value); return *this;}
    inline Environment& WithSageMakerStudioDomainUrl(Aws::String&& value) { SetSageMakerStudioDomainUrl(std::move(value)); return *this;}
    inline Environment& WithSageMakerStudioDomainUrl(const char* value) { SetSageMakerStudioDomainUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline Environment& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline Environment& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline Environment& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const{ return m_dedicatedServiceAccountId; }
    inline bool DedicatedServiceAccountIdHasBeenSet() const { return m_dedicatedServiceAccountIdHasBeenSet; }
    inline void SetDedicatedServiceAccountId(const Aws::String& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = value; }
    inline void SetDedicatedServiceAccountId(Aws::String&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::move(value); }
    inline void SetDedicatedServiceAccountId(const char* value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId.assign(value); }
    inline Environment& WithDedicatedServiceAccountId(const Aws::String& value) { SetDedicatedServiceAccountId(value); return *this;}
    inline Environment& WithDedicatedServiceAccountId(Aws::String&& value) { SetDedicatedServiceAccountId(std::move(value)); return *this;}
    inline Environment& WithDedicatedServiceAccountId(const char* value) { SetDedicatedServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline const FederationMode& GetFederationMode() const{ return m_federationMode; }
    inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }
    inline void SetFederationMode(const FederationMode& value) { m_federationModeHasBeenSet = true; m_federationMode = value; }
    inline void SetFederationMode(FederationMode&& value) { m_federationModeHasBeenSet = true; m_federationMode = std::move(value); }
    inline Environment& WithFederationMode(const FederationMode& value) { SetFederationMode(value); return *this;}
    inline Environment& WithFederationMode(FederationMode&& value) { SetFederationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline const FederationParameters& GetFederationParameters() const{ return m_federationParameters; }
    inline bool FederationParametersHasBeenSet() const { return m_federationParametersHasBeenSet; }
    inline void SetFederationParameters(const FederationParameters& value) { m_federationParametersHasBeenSet = true; m_federationParameters = value; }
    inline void SetFederationParameters(FederationParameters&& value) { m_federationParametersHasBeenSet = true; m_federationParameters = std::move(value); }
    inline Environment& WithFederationParameters(const FederationParameters& value) { SetFederationParameters(value); return *this;}
    inline Environment& WithFederationParameters(FederationParameters&& value) { SetFederationParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    EnvironmentStatus m_status;
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

    FederationMode m_federationMode;
    bool m_federationModeHasBeenSet = false;

    FederationParameters m_federationParameters;
    bool m_federationParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
