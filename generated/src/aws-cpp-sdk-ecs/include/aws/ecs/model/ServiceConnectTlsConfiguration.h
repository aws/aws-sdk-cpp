﻿/**
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
    AWS_ECS_API ServiceConnectTlsConfiguration();
    AWS_ECS_API ServiceConnectTlsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceConnectTlsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signer certificate authority.</p>
     */
    inline const ServiceConnectTlsCertificateAuthority& GetIssuerCertificateAuthority() const{ return m_issuerCertificateAuthority; }
    inline bool IssuerCertificateAuthorityHasBeenSet() const { return m_issuerCertificateAuthorityHasBeenSet; }
    inline void SetIssuerCertificateAuthority(const ServiceConnectTlsCertificateAuthority& value) { m_issuerCertificateAuthorityHasBeenSet = true; m_issuerCertificateAuthority = value; }
    inline void SetIssuerCertificateAuthority(ServiceConnectTlsCertificateAuthority&& value) { m_issuerCertificateAuthorityHasBeenSet = true; m_issuerCertificateAuthority = std::move(value); }
    inline ServiceConnectTlsConfiguration& WithIssuerCertificateAuthority(const ServiceConnectTlsCertificateAuthority& value) { SetIssuerCertificateAuthority(value); return *this;}
    inline ServiceConnectTlsConfiguration& WithIssuerCertificateAuthority(ServiceConnectTlsCertificateAuthority&& value) { SetIssuerCertificateAuthority(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Key Management Service key.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline ServiceConnectTlsConfiguration& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline ServiceConnectTlsConfiguration& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline ServiceConnectTlsConfiguration& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that's associated with the
     * Service Connect TLS.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ServiceConnectTlsConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ServiceConnectTlsConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ServiceConnectTlsConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
