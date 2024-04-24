/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/TLSCertificateConfiguration.h>
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
   * <p>Configurations related to in-transit encryption for the security
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/InTransitEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class InTransitEncryptionConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API InTransitEncryptionConfiguration();
    AWS_EMRCONTAINERS_API InTransitEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API InTransitEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline const TLSCertificateConfiguration& GetTlsCertificateConfiguration() const{ return m_tlsCertificateConfiguration; }

    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline bool TlsCertificateConfigurationHasBeenSet() const { return m_tlsCertificateConfigurationHasBeenSet; }

    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline void SetTlsCertificateConfiguration(const TLSCertificateConfiguration& value) { m_tlsCertificateConfigurationHasBeenSet = true; m_tlsCertificateConfiguration = value; }

    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline void SetTlsCertificateConfiguration(TLSCertificateConfiguration&& value) { m_tlsCertificateConfigurationHasBeenSet = true; m_tlsCertificateConfiguration = std::move(value); }

    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline InTransitEncryptionConfiguration& WithTlsCertificateConfiguration(const TLSCertificateConfiguration& value) { SetTlsCertificateConfiguration(value); return *this;}

    /**
     * <p>TLS certificate-related configuration input for the security
     * configuration.</p>
     */
    inline InTransitEncryptionConfiguration& WithTlsCertificateConfiguration(TLSCertificateConfiguration&& value) { SetTlsCertificateConfiguration(std::move(value)); return *this;}

  private:

    TLSCertificateConfiguration m_tlsCertificateConfiguration;
    bool m_tlsCertificateConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
