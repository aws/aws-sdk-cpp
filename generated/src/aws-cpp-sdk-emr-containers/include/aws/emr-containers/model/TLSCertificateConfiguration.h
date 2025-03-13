/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/CertificateProviderType.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>Configurations related to the TLS certificate for the security
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/TLSCertificateConfiguration">AWS
   * API Reference</a></p>
   */
  class TLSCertificateConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration() = default;
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline CertificateProviderType GetCertificateProviderType() const { return m_certificateProviderType; }
    inline bool CertificateProviderTypeHasBeenSet() const { return m_certificateProviderTypeHasBeenSet; }
    inline void SetCertificateProviderType(CertificateProviderType value) { m_certificateProviderTypeHasBeenSet = true; m_certificateProviderType = value; }
    inline TLSCertificateConfiguration& WithCertificateProviderType(CertificateProviderType value) { SetCertificateProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline const Aws::String& GetPublicCertificateSecretArn() const { return m_publicCertificateSecretArn; }
    inline bool PublicCertificateSecretArnHasBeenSet() const { return m_publicCertificateSecretArnHasBeenSet; }
    template<typename PublicCertificateSecretArnT = Aws::String>
    void SetPublicCertificateSecretArn(PublicCertificateSecretArnT&& value) { m_publicCertificateSecretArnHasBeenSet = true; m_publicCertificateSecretArn = std::forward<PublicCertificateSecretArnT>(value); }
    template<typename PublicCertificateSecretArnT = Aws::String>
    TLSCertificateConfiguration& WithPublicCertificateSecretArn(PublicCertificateSecretArnT&& value) { SetPublicCertificateSecretArn(std::forward<PublicCertificateSecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline const Aws::String& GetPrivateCertificateSecretArn() const { return m_privateCertificateSecretArn; }
    inline bool PrivateCertificateSecretArnHasBeenSet() const { return m_privateCertificateSecretArnHasBeenSet; }
    template<typename PrivateCertificateSecretArnT = Aws::String>
    void SetPrivateCertificateSecretArn(PrivateCertificateSecretArnT&& value) { m_privateCertificateSecretArnHasBeenSet = true; m_privateCertificateSecretArn = std::forward<PrivateCertificateSecretArnT>(value); }
    template<typename PrivateCertificateSecretArnT = Aws::String>
    TLSCertificateConfiguration& WithPrivateCertificateSecretArn(PrivateCertificateSecretArnT&& value) { SetPrivateCertificateSecretArn(std::forward<PrivateCertificateSecretArnT>(value)); return *this;}
    ///@}
  private:

    CertificateProviderType m_certificateProviderType{CertificateProviderType::NOT_SET};
    bool m_certificateProviderTypeHasBeenSet = false;

    Aws::String m_publicCertificateSecretArn;
    bool m_publicCertificateSecretArnHasBeenSet = false;

    Aws::String m_privateCertificateSecretArn;
    bool m_privateCertificateSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
