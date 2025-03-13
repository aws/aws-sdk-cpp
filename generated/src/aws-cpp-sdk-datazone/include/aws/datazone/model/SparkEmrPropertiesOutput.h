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
    AWS_DATAZONE_API SparkEmrPropertiesOutput() = default;
    AWS_DATAZONE_API SparkEmrPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SparkEmrPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute ARN of the Spark EMR.</p>
     */
    inline const Aws::String& GetComputeArn() const { return m_computeArn; }
    inline bool ComputeArnHasBeenSet() const { return m_computeArnHasBeenSet; }
    template<typename ComputeArnT = Aws::String>
    void SetComputeArn(ComputeArnT&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::forward<ComputeArnT>(value); }
    template<typename ComputeArnT = Aws::String>
    SparkEmrPropertiesOutput& WithComputeArn(ComputeArnT&& value) { SetComputeArn(std::forward<ComputeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials of the Spark EMR.</p>
     */
    inline const UsernamePassword& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = UsernamePassword>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = UsernamePassword>
    SparkEmrPropertiesOutput& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credential expiration of the Spark EMR.</p>
     */
    inline const Aws::Utils::DateTime& GetCredentialsExpiration() const { return m_credentialsExpiration; }
    inline bool CredentialsExpirationHasBeenSet() const { return m_credentialsExpirationHasBeenSet; }
    template<typename CredentialsExpirationT = Aws::Utils::DateTime>
    void SetCredentialsExpiration(CredentialsExpirationT&& value) { m_credentialsExpirationHasBeenSet = true; m_credentialsExpiration = std::forward<CredentialsExpirationT>(value); }
    template<typename CredentialsExpirationT = Aws::Utils::DateTime>
    SparkEmrPropertiesOutput& WithCredentialsExpiration(CredentialsExpirationT&& value) { SetCredentialsExpiration(std::forward<CredentialsExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The governance type of the Spark EMR.</p>
     */
    inline GovernanceType GetGovernanceType() const { return m_governanceType; }
    inline bool GovernanceTypeHasBeenSet() const { return m_governanceTypeHasBeenSet; }
    inline void SetGovernanceType(GovernanceType value) { m_governanceTypeHasBeenSet = true; m_governanceType = value; }
    inline SparkEmrPropertiesOutput& WithGovernanceType(GovernanceType value) { SetGovernanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance profile ARN of the Spark EMR.</p>
     */
    inline const Aws::String& GetInstanceProfileArn() const { return m_instanceProfileArn; }
    inline bool InstanceProfileArnHasBeenSet() const { return m_instanceProfileArnHasBeenSet; }
    template<typename InstanceProfileArnT = Aws::String>
    void SetInstanceProfileArn(InstanceProfileArnT&& value) { m_instanceProfileArnHasBeenSet = true; m_instanceProfileArn = std::forward<InstanceProfileArnT>(value); }
    template<typename InstanceProfileArnT = Aws::String>
    SparkEmrPropertiesOutput& WithInstanceProfileArn(InstanceProfileArnT&& value) { SetInstanceProfileArn(std::forward<InstanceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Java virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetJavaVirtualEnv() const { return m_javaVirtualEnv; }
    inline bool JavaVirtualEnvHasBeenSet() const { return m_javaVirtualEnvHasBeenSet; }
    template<typename JavaVirtualEnvT = Aws::String>
    void SetJavaVirtualEnv(JavaVirtualEnvT&& value) { m_javaVirtualEnvHasBeenSet = true; m_javaVirtualEnv = std::forward<JavaVirtualEnvT>(value); }
    template<typename JavaVirtualEnvT = Aws::String>
    SparkEmrPropertiesOutput& WithJavaVirtualEnv(JavaVirtualEnvT&& value) { SetJavaVirtualEnv(std::forward<JavaVirtualEnvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The livy endpoint of the Spark EMR.</p>
     */
    inline const Aws::String& GetLivyEndpoint() const { return m_livyEndpoint; }
    inline bool LivyEndpointHasBeenSet() const { return m_livyEndpointHasBeenSet; }
    template<typename LivyEndpointT = Aws::String>
    void SetLivyEndpoint(LivyEndpointT&& value) { m_livyEndpointHasBeenSet = true; m_livyEndpoint = std::forward<LivyEndpointT>(value); }
    template<typename LivyEndpointT = Aws::String>
    SparkEmrPropertiesOutput& WithLivyEndpoint(LivyEndpointT&& value) { SetLivyEndpoint(std::forward<LivyEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log URI of the Spark EMR.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    SparkEmrPropertiesOutput& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Python virtual env of the Spark EMR.</p>
     */
    inline const Aws::String& GetPythonVirtualEnv() const { return m_pythonVirtualEnv; }
    inline bool PythonVirtualEnvHasBeenSet() const { return m_pythonVirtualEnvHasBeenSet; }
    template<typename PythonVirtualEnvT = Aws::String>
    void SetPythonVirtualEnv(PythonVirtualEnvT&& value) { m_pythonVirtualEnvHasBeenSet = true; m_pythonVirtualEnv = std::forward<PythonVirtualEnvT>(value); }
    template<typename PythonVirtualEnvT = Aws::String>
    SparkEmrPropertiesOutput& WithPythonVirtualEnv(PythonVirtualEnvT&& value) { SetPythonVirtualEnv(std::forward<PythonVirtualEnvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime role of the Spark EMR.</p>
     */
    inline const Aws::String& GetRuntimeRole() const { return m_runtimeRole; }
    inline bool RuntimeRoleHasBeenSet() const { return m_runtimeRoleHasBeenSet; }
    template<typename RuntimeRoleT = Aws::String>
    void SetRuntimeRole(RuntimeRoleT&& value) { m_runtimeRoleHasBeenSet = true; m_runtimeRole = std::forward<RuntimeRoleT>(value); }
    template<typename RuntimeRoleT = Aws::String>
    SparkEmrPropertiesOutput& WithRuntimeRole(RuntimeRoleT&& value) { SetRuntimeRole(std::forward<RuntimeRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trusted certificate S3 URL of the Spark EMR.</p>
     */
    inline const Aws::String& GetTrustedCertificatesS3Uri() const { return m_trustedCertificatesS3Uri; }
    inline bool TrustedCertificatesS3UriHasBeenSet() const { return m_trustedCertificatesS3UriHasBeenSet; }
    template<typename TrustedCertificatesS3UriT = Aws::String>
    void SetTrustedCertificatesS3Uri(TrustedCertificatesS3UriT&& value) { m_trustedCertificatesS3UriHasBeenSet = true; m_trustedCertificatesS3Uri = std::forward<TrustedCertificatesS3UriT>(value); }
    template<typename TrustedCertificatesS3UriT = Aws::String>
    SparkEmrPropertiesOutput& WithTrustedCertificatesS3Uri(TrustedCertificatesS3UriT&& value) { SetTrustedCertificatesS3Uri(std::forward<TrustedCertificatesS3UriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeArn;
    bool m_computeArnHasBeenSet = false;

    UsernamePassword m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::Utils::DateTime m_credentialsExpiration{};
    bool m_credentialsExpirationHasBeenSet = false;

    GovernanceType m_governanceType{GovernanceType::NOT_SET};
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
