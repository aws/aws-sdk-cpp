﻿/**
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
  class AWS_KENDRA_API OnPremiseConfiguration
  {
  public:
    OnPremiseConfiguration();
    OnPremiseConfiguration(Aws::Utils::Json::JsonView jsonValue);
    OnPremiseConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline const S3Path& GetSslCertificateS3Path() const{ return m_sslCertificateS3Path; }

    /**
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline bool SslCertificateS3PathHasBeenSet() const { return m_sslCertificateS3PathHasBeenSet; }

    /**
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline void SetSslCertificateS3Path(const S3Path& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = value; }

    /**
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline void SetSslCertificateS3Path(S3Path&& value) { m_sslCertificateS3PathHasBeenSet = true; m_sslCertificateS3Path = std::move(value); }

    /**
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline OnPremiseConfiguration& WithSslCertificateS3Path(const S3Path& value) { SetSslCertificateS3Path(value); return *this;}

    /**
     * <p>Information required to find a specific file in an Amazon S3 bucket.</p>
     */
    inline OnPremiseConfiguration& WithSslCertificateS3Path(S3Path&& value) { SetSslCertificateS3Path(std::move(value)); return *this;}

  private:

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet;

    Aws::String m_organizationName;
    bool m_organizationNameHasBeenSet;

    S3Path m_sslCertificateS3Path;
    bool m_sslCertificateS3PathHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
