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


    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline Environment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline Environment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline Environment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline Environment& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline Environment& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account in which the FinSpace environment is created.</p>
     */
    inline Environment& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline const EnvironmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline void SetStatus(const EnvironmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline void SetStatus(EnvironmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline Environment& WithStatus(const EnvironmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of creation of the FinSpace environment.</p>
     */
    inline Environment& WithStatus(EnvironmentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentUrl() const{ return m_environmentUrl; }

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline bool EnvironmentUrlHasBeenSet() const { return m_environmentUrlHasBeenSet; }

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline void SetEnvironmentUrl(const Aws::String& value) { m_environmentUrlHasBeenSet = true; m_environmentUrl = value; }

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline void SetEnvironmentUrl(Aws::String&& value) { m_environmentUrlHasBeenSet = true; m_environmentUrl = std::move(value); }

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline void SetEnvironmentUrl(const char* value) { m_environmentUrlHasBeenSet = true; m_environmentUrl.assign(value); }

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentUrl(const Aws::String& value) { SetEnvironmentUrl(value); return *this;}

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentUrl(Aws::String&& value) { SetEnvironmentUrl(std::move(value)); return *this;}

    /**
     * <p>The sign-in url for the web application of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentUrl(const char* value) { SetEnvironmentUrl(value); return *this;}


    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline Environment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline Environment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the FinSpace environment.</p>
     */
    inline Environment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const{ return m_environmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline void SetEnvironmentArn(const Aws::String& value) { m_environmentArnHasBeenSet = true; m_environmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline void SetEnvironmentArn(Aws::String&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline void SetEnvironmentArn(const char* value) { m_environmentArnHasBeenSet = true; m_environmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentArn(const Aws::String& value) { SetEnvironmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentArn(Aws::String&& value) { SetEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of your FinSpace environment.</p>
     */
    inline Environment& WithEnvironmentArn(const char* value) { SetEnvironmentArn(value); return *this;}


    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline const Aws::String& GetSageMakerStudioDomainUrl() const{ return m_sageMakerStudioDomainUrl; }

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline bool SageMakerStudioDomainUrlHasBeenSet() const { return m_sageMakerStudioDomainUrlHasBeenSet; }

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline void SetSageMakerStudioDomainUrl(const Aws::String& value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl = value; }

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline void SetSageMakerStudioDomainUrl(Aws::String&& value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl = std::move(value); }

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline void SetSageMakerStudioDomainUrl(const char* value) { m_sageMakerStudioDomainUrlHasBeenSet = true; m_sageMakerStudioDomainUrl.assign(value); }

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline Environment& WithSageMakerStudioDomainUrl(const Aws::String& value) { SetSageMakerStudioDomainUrl(value); return *this;}

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline Environment& WithSageMakerStudioDomainUrl(Aws::String&& value) { SetSageMakerStudioDomainUrl(std::move(value)); return *this;}

    /**
     * <p>The url of the integrated FinSpace notebook environment in your web
     * application.</p>
     */
    inline Environment& WithSageMakerStudioDomainUrl(const char* value) { SetSageMakerStudioDomainUrl(value); return *this;}


    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline Environment& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline Environment& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key id used to encrypt in the FinSpace environment.</p>
     */
    inline Environment& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline const Aws::String& GetDedicatedServiceAccountId() const{ return m_dedicatedServiceAccountId; }

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline bool DedicatedServiceAccountIdHasBeenSet() const { return m_dedicatedServiceAccountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline void SetDedicatedServiceAccountId(const Aws::String& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = value; }

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline void SetDedicatedServiceAccountId(Aws::String&& value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId = std::move(value); }

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline void SetDedicatedServiceAccountId(const char* value) { m_dedicatedServiceAccountIdHasBeenSet = true; m_dedicatedServiceAccountId.assign(value); }

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline Environment& WithDedicatedServiceAccountId(const Aws::String& value) { SetDedicatedServiceAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline Environment& WithDedicatedServiceAccountId(Aws::String&& value) { SetDedicatedServiceAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the dedicated service account associated with your
     * FinSpace environment.</p>
     */
    inline Environment& WithDedicatedServiceAccountId(const char* value) { SetDedicatedServiceAccountId(value); return *this;}


    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline const FederationMode& GetFederationMode() const{ return m_federationMode; }

    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline bool FederationModeHasBeenSet() const { return m_federationModeHasBeenSet; }

    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline void SetFederationMode(const FederationMode& value) { m_federationModeHasBeenSet = true; m_federationMode = value; }

    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline void SetFederationMode(FederationMode&& value) { m_federationModeHasBeenSet = true; m_federationMode = std::move(value); }

    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline Environment& WithFederationMode(const FederationMode& value) { SetFederationMode(value); return *this;}

    /**
     * <p>The authentication mode for the environment.</p>
     */
    inline Environment& WithFederationMode(FederationMode&& value) { SetFederationMode(std::move(value)); return *this;}


    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline const FederationParameters& GetFederationParameters() const{ return m_federationParameters; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline bool FederationParametersHasBeenSet() const { return m_federationParametersHasBeenSet; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline void SetFederationParameters(const FederationParameters& value) { m_federationParametersHasBeenSet = true; m_federationParameters = value; }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline void SetFederationParameters(FederationParameters&& value) { m_federationParametersHasBeenSet = true; m_federationParameters = std::move(value); }

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline Environment& WithFederationParameters(const FederationParameters& value) { SetFederationParameters(value); return *this;}

    /**
     * <p>Configuration information when authentication mode is FEDERATED.</p>
     */
    inline Environment& WithFederationParameters(FederationParameters&& value) { SetFederationParameters(std::move(value)); return *this;}

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
