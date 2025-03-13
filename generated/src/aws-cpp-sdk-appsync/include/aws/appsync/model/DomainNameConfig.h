/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
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
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a configuration for a custom domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/DomainNameConfig">AWS
   * API Reference</a></p>
   */
  class DomainNameConfig
  {
  public:
    AWS_APPSYNC_API DomainNameConfig() = default;
    AWS_APPSYNC_API DomainNameConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DomainNameConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainNameConfig& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the <code>DomainName</code> configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DomainNameConfig& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate. This can be an Certificate
     * Manager (ACM) certificate or an Identity and Access Management (IAM) server
     * certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    DomainNameConfig& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that AppSync provides.</p>
     */
    inline const Aws::String& GetAppsyncDomainName() const { return m_appsyncDomainName; }
    inline bool AppsyncDomainNameHasBeenSet() const { return m_appsyncDomainNameHasBeenSet; }
    template<typename AppsyncDomainNameT = Aws::String>
    void SetAppsyncDomainName(AppsyncDomainNameT&& value) { m_appsyncDomainNameHasBeenSet = true; m_appsyncDomainName = std::forward<AppsyncDomainNameT>(value); }
    template<typename AppsyncDomainNameT = Aws::String>
    DomainNameConfig& WithAppsyncDomainName(AppsyncDomainNameT&& value) { SetAppsyncDomainName(std::forward<AppsyncDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of your Amazon Route 53 hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    DomainNameConfig& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_appsyncDomainName;
    bool m_appsyncDomainNameHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
