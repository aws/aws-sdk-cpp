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
    AWS_KENDRA_API OnPremiseConfiguration();
    AWS_KENDRA_API OnPremiseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API OnPremiseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline const Aws::String& GetHostUrl() const{ return m_hostUrl; }

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline void SetHostUrl(const Aws::String& value) { m_hostUrlHasBeenSet = true; m_hostUrl = value; }

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline void SetHostUrl(Aws::String&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::move(value); }

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline void SetHostUrl(const char* value) { m_hostUrlHasBeenSet = true; m_hostUrl.assign(value); }

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline OnPremiseConfiguration& WithHostUrl(const Aws::String& value) { SetHostUrl(value); return *this;}

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline OnPremiseConfiguration& WithHostUrl(Aws::String&& value) { SetHostUrl(std::move(value)); return *this;}

    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://on-prem-host-url/api/v3/</i> </p>
     */
    inline OnPremiseConfiguration& WithHostUrl(const char* value) { SetHostUrl(value); return *this;}


    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline const Aws::String& GetOrganizationName() const{ return m_organizationName; }

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline void SetOrganizationName(const Aws::String& value) { m_organizationNameHasBeenSet = true; m_organizationName = value; }

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline void SetOrganizationName(Aws::String&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::move(value); }

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline void SetOrganizationName(const char* value) { m_organizationNameHasBeenSet = true; m_organizationName.assign(value); }

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline OnPremiseConfiguration& WithOrganizationName(const Aws::String& value) { SetOrganizationName(value); return *this;}

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline OnPremiseConfiguration& WithOrganizationName(Aws::String&& value) { SetOrganizationName(std::move(value)); return *this;}

    /**
     * <p>The name of the organization of the GitHub Enterprise Server (in-premise)
     * account you want to connect to. You can find your organization name by logging
     * into GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline OnPremiseConfiguration& WithOrganizationName(const char* value) { SetOrganizationName(value); return *this;}


    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const{ return m_sslCertificateS3Path; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(const S3Path& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = value; }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline void SetSslCertificateS3Path(S3Path&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::move(value); }

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline OnPremiseConfiguration& WithSslCertificateS3Path(const S3Path& value) { SetSslCertificateS3Path(value); return *this;}

    /**
     * <p>The path to the SSL certificate stored in an Amazon S3 bucket. You use this
     * to connect to GitHub if you require a secure SSL connection.</p> <p>You can
     * simply generate a self-signed X509 certificate on any computer using OpenSSL.
     * For an example of using OpenSSL to create an X509 certificate, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/configuring-https-ssl.html">Create
     * and sign an X509 certificate</a>.</p>
     */
    inline OnPremiseConfiguration& WithSslCertificateS3Path(S3Path&& value) { SetSslCertificateS3Path(std::move(value)); return *this;}

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
