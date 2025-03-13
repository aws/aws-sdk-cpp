/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/S3Path.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information to connect to GitHub Enterprise Server
   * (on premises).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/OnPremiseConfiguration">AWS
   * API Reference</a></p>
   */
  class OnPremiseConfiguration
  {
  public:
    AWS_KENDRA_API OnPremiseConfiguration() = default;
    AWS_KENDRA_API OnPremiseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API OnPremiseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline const Aws::String& GetHostUrl() const { return m_hostUrl; }
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }
    template<typename HostUrlT = Aws::String>
    void SetHostUrl(HostUrlT&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::forward<HostUrlT>(value); }
    template<typename HostUrlT = Aws::String>
    OnPremiseConfiguration& WithHostUrl(HostUrlT&& value) { SetHostUrl(std::forward<HostUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the organization of the GitHub Enterprise Server (on-premises)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
    template<typename OrganizationNameT = Aws::String>
    void SetOrganizationName(OrganizationNameT&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::forward<OrganizationNameT>(value); }
    template<typename OrganizationNameT = Aws::String>
    OnPremiseConfiguration& WithOrganizationName(OrganizationNameT&& value) { SetOrganizationName(std::forward<OrganizationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const { return m_sslCertificateS3Path; }
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }
    template<typename SslCertificateS3PathT = S3Path>
    void SetSslCertificateS3Path(SslCertificateS3PathT&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::forward<SslCertificateS3PathT>(value); }
    template<typename SslCertificateS3PathT = S3Path>
    OnPremiseConfiguration& WithSslCertificateS3Path(SslCertificateS3PathT&& value) { SetSslCertificateS3Path(std::forward<SslCertificateS3PathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet = false;

    Aws::String m_organizationName;
    bool m_organizationNameHasBeenSet = false;

    S3Path m_sslCertificateS3Path;
    bool m_sslCertificateS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
