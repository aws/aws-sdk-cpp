/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/UsernamePassword.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/GovernanceType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Spark EMR properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SparkEmrPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class SparkEmrPropertiesOutput
  {
  public:
    AWS_DATAZONE_API SparkEmrPropertiesOutput();
    AWS_DATAZONE_API SparkEmrPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkEmrPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute ARN of the Spark EMR.</p>
     */
    inline const Aws::String& GetComputeArn() const{ return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    inline void SetComputeArn(const Aws::String& value) { m_computeArnHasBeenSet = true; m_computeArn = value; }
    inline void SetComputeArn(Aws::String&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::move(value); }
    inline void SetComputeArn(const char* value) { m_computeArnHasBeenSet = true; m_computeArn.assign(value); }
    inline SparkEmrPropertiesOutput& WithComputeArn(const Aws::String& value) { SetComputeArn(value); return *this;}
    inline SparkEmrPropertiesOutput& WithComputeArn(Aws::String&& value) { SetComputeArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithComputeArn(const char* value) { SetComputeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials of the Spark EMR.</p>
     */
    inline const UsernamePassword& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const UsernamePassword& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(UsernamePassword&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline SparkEmrPropertiesOutput& WithCredentials(const UsernamePassword& value) { SetCredentials(value); return *this;}
    inline SparkEmrPropertiesOutput& WithCredentials(UsernamePassword&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credential expiration of the Spark EMR.</p>
     */
    inline const Aws::Utils::DateTime& GetCredentialsExpiration() const{ return m_credentialsExpiration; }
    inline bool CredentialsExpirationHasBeenSet() const { return m_credentialsExpirationHasBeenSet; }
    inline void SetCredentialsExpiration(const Aws::Utils::DateTime& value) { m_credentialsExpirationHasBeenSet = true; m_credentialsExpiration = value; }
    inline void SetCredentialsExpiration(Aws::Utils::DateTime&& value) { m_credentialsExpirationHasBeenSet = true; m_credentialsExpiration = std::move(value); }
    inline SparkEmrPropertiesOutput& WithCredentialsExpiration(const Aws::Utils::DateTime& value) { SetCredentialsExpiration(value); return *this;}
    inline SparkEmrPropertiesOutput& WithCredentialsExpiration(Aws::Utils::DateTime&& value) { SetCredentialsExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The governance type of the Spark EMR.</p>
     */
    inline const GovernanceType& GetGovernanceType() const{ return m_governanceType; }
    inline bool GovernanceTypeHasBeenSet() const { return m_governanceTypeHasBeenSet; }
    inline void SetGovernanceType(const GovernanceType& value) { m_governanceTypeHasBeenSet = true; m_governanceType = value; }
    inline void SetGovernanceType(GovernanceType&& value) { m_governanceTypeHasBeenSet = true; m_governanceType = std::move(value); }
    inline SparkEmrPropertiesOutput& WithGovernanceType(const GovernanceType& value) { SetGovernanceType(value); return *this;}
    inline SparkEmrPropertiesOutput& WithGovernanceType(GovernanceType&& value) { SetGovernanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN of the Spark EMR.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const{ return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    inline void SetInstanceProfileArn(const Aws::String& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = value; }
    inline void SetInstanceProfileArn(Aws::String&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::move(value); }
    inline void SetInstanceProfileArn(const char* value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn.assign(value); }
    inline SparkEmrPropertiesOutput& WithInstanceProfileArn(const Aws::String& value) { SetInstanceProfileArn(value); return *this;}
    inline SparkEmrPropertiesOutput& WithInstanceProfileArn(Aws::String&& value) { SetInstanceProfileArn(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithInstanceProfileArn(const char* value) { SetInstanceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const{ return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    inline void SetJavaVirtualEnv(const Aws::String& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = value; }
    inline void SetJavaVirtualEnv(Aws::String&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::move(value); }
    inline void SetJavaVirtualEnv(const char* value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv.assign(value); }
    inline SparkEmrPropertiesOutput& WithJavaVirtualEnv(const Aws::String& value) { SetJavaVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesOutput& WithJavaVirtualEnv(Aws::String&& value) { SetJavaVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithJavaVirtualEnv(const char* value) { SetJavaVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The livy endpoint of the Spark EMR.</p>
     */
    inline const Aws::String& GetLivyEndpoint() const{ return m_livyEndpoint; }
    inline bool LivyEndpointHasBeenSet() const { return m_livyEndpointHasBeenSet; }
    inline void SetLivyEndpoint(const Aws::String& value) { m_livyEndpointHasBeenSet = true; m_livyEndpoint = value; }
    inline void SetLivyEndpoint(Aws::String&& value) { m_livyEndpointHasBeenSet = true; m_livyEndpoint = std::move(value); }
    inline void SetLivyEndpoint(const char* value) { m_livyEndpointHasBeenSet = true; m_livyEndpoint.assign(value); }
    inline SparkEmrPropertiesOutput& WithLivyEndpoint(const Aws::String& value) { SetLivyEndpoint(value); return *this;}
    inline SparkEmrPropertiesOutput& WithLivyEndpoint(Aws::String&& value) { SetLivyEndpoint(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithLivyEndpoint(const char* value) { SetLivyEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log URI of the Spark EMR.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline SparkEmrPropertiesOutput& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline SparkEmrPropertiesOutput& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const{ return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    inline void SetPythonVirtualEnv(const Aws::String& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = value; }
    inline void SetPythonVirtualEnv(Aws::String&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::move(value); }
    inline void SetPythonVirtualEnv(const char* value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv.assign(value); }
    inline SparkEmrPropertiesOutput& WithPythonVirtualEnv(const Aws::String& value) { SetPythonVirtualEnv(value); return *this;}
    inline SparkEmrPropertiesOutput& WithPythonVirtualEnv(Aws::String&& value) { SetPythonVirtualEnv(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithPythonVirtualEnv(const char* value) { SetPythonVirtualEnv(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime role of the Spark EMR.</p>
     */
    inline const Aws::String& GetRuntimeRole() const{ return m_runtimeRole; }
    inline bool RuntimeRoleHasBeenSet() const { return m_runtimeRoleHasBeenSet; }
    inline void SetRuntimeRole(const Aws::String& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = value; }
    inline void SetRuntimeRole(Aws::String&& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = std::move(value); }
    inline void SetRuntimeRole(const char* value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole.assign(value); }
    inline SparkEmrPropertiesOutput& WithRuntimeRole(const Aws::String& value) { SetRuntimeRole(value); return *this;}
    inline SparkEmrPropertiesOutput& WithRuntimeRole(Aws::String&& value) { SetRuntimeRole(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithRuntimeRole(const char* value) { SetRuntimeRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trusted certificate S3 URL of the Spark EMR.</p>
     */
    inline const Aws::String& GetTrustedCertificatesS3Uri() const{ return m_trustedCertificatesS3Uri; }
    inline bool TrustedCertificatesS3UriHasBeenSet() const { return m_trustedCertificatesS3UriHasBeenSet; }
    inline void SetTrustedCertificatesS3Uri(const Aws::String& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = value; }
    inline void SetTrustedCertificatesS3Uri(Aws::String&& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = std::move(value); }
    inline void SetTrustedCertificatesS3Uri(const char* value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri.assign(value); }
    inline SparkEmrPropertiesOutput& WithTrustedCertificatesS3Uri(const Aws::String& value) { SetTrustedCertificatesS3Uri(value); return *this;}
    inline SparkEmrPropertiesOutput& WithTrustedCertificatesS3Uri(Aws::String&& value) { SetTrustedCertificatesS3Uri(std::move(value)); return *this;}
    inline SparkEmrPropertiesOutput& WithTrustedCertificatesS3Uri(const char* value) { SetTrustedCertificatesS3Uri(value); return *this;}
    ///@}
  private:

    Aws::String m_computeArn;
    bool m_computeArnHasBeenSet = false;

    UsernamePassword m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::Utils::DateTime m_credentialsExpiration;
    bool m_credentialsExpirationHasBeenSet = false;

    GovernanceType m_governanceType;
    bool m_governanceTypeHasBeenSet = false;

    Aws::String m_instanceProfileArn;
    bool m_instanceProfileArnHasBeenSet = false;

    Aws::String m_javaVirtualEnv;
    bool m_javaVirtualEnvHasBeenSet = false;

    Aws::String m_livyEndpoint;
    bool m_livyEndpointHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_pythonVirtualEnv;
    bool m_pythonVirtualEnvHasBeenSet = false;

    Aws::String m_runtimeRole;
    bool m_runtimeRoleHasBeenSet = false;

    Aws::String m_trustedCertificatesS3Uri;
    bool m_trustedCertificatesS3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
