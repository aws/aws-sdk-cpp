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
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration();
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API TLSCertificateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline const CertificateProviderType& GetCertificateProviderType() const{ return m_certificateProviderType; }

    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline bool CertificateProviderTypeHasBeenSet() const { return m_certificateProviderTypeHasBeenSet; }

    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline void SetCertificateProviderType(const CertificateProviderType& value) { m_certificateProviderTypeHasBeenSet = true; m_certificateProviderType = value; }

    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline void SetCertificateProviderType(CertificateProviderType&& value) { m_certificateProviderTypeHasBeenSet = true; m_certificateProviderType = std::move(value); }

    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline TLSCertificateConfiguration& WithCertificateProviderType(const CertificateProviderType& value) { SetCertificateProviderType(value); return *this;}

    /**
     * <p>The TLS certificate type. Acceptable values: <code>PEM</code> or
     * <code>Custom</code>.</p>
     */
    inline TLSCertificateConfiguration& WithCertificateProviderType(CertificateProviderType&& value) { SetCertificateProviderType(std::move(value)); return *this;}


    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline const Aws::String& GetPublicCertificateSecretArn() const{ return m_publicCertificateSecretArn; }

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline bool PublicCertificateSecretArnHasBeenSet() const { return m_publicCertificateSecretArnHasBeenSet; }

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPublicCertificateSecretArn(const Aws::String& value) { m_publicCertificateSecretArnHasBeenSet = true; m_publicCertificateSecretArn = value; }

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPublicCertificateSecretArn(Aws::String&& value) { m_publicCertificateSecretArnHasBeenSet = true; m_publicCertificateSecretArn = std::move(value); }

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPublicCertificateSecretArn(const char* value) { m_publicCertificateSecretArnHasBeenSet = true; m_publicCertificateSecretArn.assign(value); }

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPublicCertificateSecretArn(const Aws::String& value) { SetPublicCertificateSecretArn(value); return *this;}

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPublicCertificateSecretArn(Aws::String&& value) { SetPublicCertificateSecretArn(std::move(value)); return *this;}

    /**
     * <p>Secrets Manager ARN that contains the public TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPublicCertificateSecretArn(const char* value) { SetPublicCertificateSecretArn(value); return *this;}


    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline const Aws::String& GetPrivateCertificateSecretArn() const{ return m_privateCertificateSecretArn; }

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline bool PrivateCertificateSecretArnHasBeenSet() const { return m_privateCertificateSecretArnHasBeenSet; }

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPrivateCertificateSecretArn(const Aws::String& value) { m_privateCertificateSecretArnHasBeenSet = true; m_privateCertificateSecretArn = value; }

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPrivateCertificateSecretArn(Aws::String&& value) { m_privateCertificateSecretArnHasBeenSet = true; m_privateCertificateSecretArn = std::move(value); }

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline void SetPrivateCertificateSecretArn(const char* value) { m_privateCertificateSecretArnHasBeenSet = true; m_privateCertificateSecretArn.assign(value); }

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPrivateCertificateSecretArn(const Aws::String& value) { SetPrivateCertificateSecretArn(value); return *this;}

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPrivateCertificateSecretArn(Aws::String&& value) { SetPrivateCertificateSecretArn(std::move(value)); return *this;}

    /**
     * <p>Secrets Manager ARN that contains the private TLS certificate contents, used
     * for communication between the user job and the system job.</p>
     */
    inline TLSCertificateConfiguration& WithPrivateCertificateSecretArn(const char* value) { SetPrivateCertificateSecretArn(value); return *this;}

  private:

    CertificateProviderType m_certificateProviderType;
    bool m_certificateProviderTypeHasBeenSet = false;

    Aws::String m_publicCertificateSecretArn;
    bool m_publicCertificateSecretArnHasBeenSet = false;

    Aws::String m_privateCertificateSecretArn;
    bool m_privateCertificateSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
