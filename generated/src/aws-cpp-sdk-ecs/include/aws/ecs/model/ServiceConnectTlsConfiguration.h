/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceConnectTlsCertificateAuthority.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The key that encrypts and decrypts your resources for Service Connect
   * TLS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceConnectTlsConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceConnectTlsConfiguration
  {
  public:
    AWS_ECS_API ServiceConnectTlsConfiguration() = default;
    AWS_ECS_API ServiceConnectTlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signer certificate authority.</p>
     */
    inline const ServiceConnectTlsCertificateAuthority& GetIssuerCertificateAuthority() const { return m_issuerCertificateAuthority; }
    inline bool IssuerCertificateAuthorityHasBeenSet() const { return m_issuerCertificateAuthorityHasBeenSet; }
    template<typename IssuerCertificateAuthorityT = ServiceConnectTlsCertificateAuthority>
    void SetIssuerCertificateAuthority(IssuerCertificateAuthorityT&& value) { m_issuerCertificateAuthorityHasBeenSet = true; m_issuerCertificateAuthority = std::forward<IssuerCertificateAuthorityT>(value); }
    template<typename IssuerCertificateAuthorityT = ServiceConnectTlsCertificateAuthority>
    ServiceConnectTlsConfiguration& WithIssuerCertificateAuthority(IssuerCertificateAuthorityT&& value) { SetIssuerCertificateAuthority(std::forward<IssuerCertificateAuthorityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service key.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    ServiceConnectTlsConfiguration& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that's associated with the
     * Service Connect TLS.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ServiceConnectTlsConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    ServiceConnectTlsCertificateAuthority m_issuerCertificateAuthority;
    bool m_issuerCertificateAuthorityHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
