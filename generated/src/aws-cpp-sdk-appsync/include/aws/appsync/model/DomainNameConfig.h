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
    AWS_APPSYNC_API DomainNameConfig();
    AWS_APPSYNC_API DomainNameConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API DomainNameConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainNameConfig& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainNameConfig& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainNameConfig& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the <code>DomainName</code> configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DomainNameConfig& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DomainNameConfig& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DomainNameConfig& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the certificate. This can be an Certificate
     * Manager (ACM) certificate or an Identity and Access Management (IAM) server
     * certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline DomainNameConfig& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline DomainNameConfig& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline DomainNameConfig& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that AppSync provides.</p>
     */
    inline const Aws::String& GetAppsyncDomainName() const{ return m_appsyncDomainName; }
    inline bool AppsyncDomainNameHasBeenSet() const { return m_appsyncDomainNameHasBeenSet; }
    inline void SetAppsyncDomainName(const Aws::String& value) { m_appsyncDomainNameHasBeenSet = true; m_appsyncDomainName = value; }
    inline void SetAppsyncDomainName(Aws::String&& value) { m_appsyncDomainNameHasBeenSet = true; m_appsyncDomainName = std::move(value); }
    inline void SetAppsyncDomainName(const char* value) { m_appsyncDomainNameHasBeenSet = true; m_appsyncDomainName.assign(value); }
    inline DomainNameConfig& WithAppsyncDomainName(const Aws::String& value) { SetAppsyncDomainName(value); return *this;}
    inline DomainNameConfig& WithAppsyncDomainName(Aws::String&& value) { SetAppsyncDomainName(std::move(value)); return *this;}
    inline DomainNameConfig& WithAppsyncDomainName(const char* value) { SetAppsyncDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of your Amazon Route 53 hosted zone.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId.assign(value); }
    inline DomainNameConfig& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline DomainNameConfig& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline DomainNameConfig& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
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
