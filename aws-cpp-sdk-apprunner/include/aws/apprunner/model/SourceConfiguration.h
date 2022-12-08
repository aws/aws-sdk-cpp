/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/CodeRepository.h>
#include <aws/apprunner/model/ImageRepository.h>
#include <aws/apprunner/model/AuthenticationConfiguration.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the source deployed to an App Runner service. It can be a code or
   * an image repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_APPRUNNER_API SourceConfiguration();
    AWS_APPRUNNER_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline const CodeRepository& GetCodeRepository() const{ return m_codeRepository; }

    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline bool CodeRepositoryHasBeenSet() const { return m_codeRepositoryHasBeenSet; }

    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline void SetCodeRepository(const CodeRepository& value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = value; }

    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline void SetCodeRepository(CodeRepository&& value) { m_codeRepositoryHasBeenSet = true; m_codeRepository = std::move(value); }

    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline SourceConfiguration& WithCodeRepository(const CodeRepository& value) { SetCodeRepository(value); return *this;}

    /**
     * <p>The description of a source code repository.</p> <p>You must provide either
     * this member or <code>ImageRepository</code> (but not both).</p>
     */
    inline SourceConfiguration& WithCodeRepository(CodeRepository&& value) { SetCodeRepository(std::move(value)); return *this;}


    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline const ImageRepository& GetImageRepository() const{ return m_imageRepository; }

    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline bool ImageRepositoryHasBeenSet() const { return m_imageRepositoryHasBeenSet; }

    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline void SetImageRepository(const ImageRepository& value) { m_imageRepositoryHasBeenSet = true; m_imageRepository = value; }

    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline void SetImageRepository(ImageRepository&& value) { m_imageRepositoryHasBeenSet = true; m_imageRepository = std::move(value); }

    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline SourceConfiguration& WithImageRepository(const ImageRepository& value) { SetImageRepository(value); return *this;}

    /**
     * <p>The description of a source image repository.</p> <p>You must provide either
     * this member or <code>CodeRepository</code> (but not both).</p>
     */
    inline SourceConfiguration& WithImageRepository(ImageRepository&& value) { SetImageRepository(std::move(value)); return *this;}


    /**
     * <p>If <code>true</code>, continuous integration from the source repository is
     * enabled for the App Runner service. Each repository change (including any source
     * code commit or new image version) starts a deployment.</p> <p>Default: App
     * Runner sets to <code>false</code> for a source image that uses an ECR Public
     * repository or an ECR repository that's in an Amazon Web Services account other
     * than the one that the service is in. App Runner sets to <code>true</code> in all
     * other cases (which currently include a source code repository or a source image
     * using a same-account ECR repository).</p>
     */
    inline bool GetAutoDeploymentsEnabled() const{ return m_autoDeploymentsEnabled; }

    /**
     * <p>If <code>true</code>, continuous integration from the source repository is
     * enabled for the App Runner service. Each repository change (including any source
     * code commit or new image version) starts a deployment.</p> <p>Default: App
     * Runner sets to <code>false</code> for a source image that uses an ECR Public
     * repository or an ECR repository that's in an Amazon Web Services account other
     * than the one that the service is in. App Runner sets to <code>true</code> in all
     * other cases (which currently include a source code repository or a source image
     * using a same-account ECR repository).</p>
     */
    inline bool AutoDeploymentsEnabledHasBeenSet() const { return m_autoDeploymentsEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, continuous integration from the source repository is
     * enabled for the App Runner service. Each repository change (including any source
     * code commit or new image version) starts a deployment.</p> <p>Default: App
     * Runner sets to <code>false</code> for a source image that uses an ECR Public
     * repository or an ECR repository that's in an Amazon Web Services account other
     * than the one that the service is in. App Runner sets to <code>true</code> in all
     * other cases (which currently include a source code repository or a source image
     * using a same-account ECR repository).</p>
     */
    inline void SetAutoDeploymentsEnabled(bool value) { m_autoDeploymentsEnabledHasBeenSet = true; m_autoDeploymentsEnabled = value; }

    /**
     * <p>If <code>true</code>, continuous integration from the source repository is
     * enabled for the App Runner service. Each repository change (including any source
     * code commit or new image version) starts a deployment.</p> <p>Default: App
     * Runner sets to <code>false</code> for a source image that uses an ECR Public
     * repository or an ECR repository that's in an Amazon Web Services account other
     * than the one that the service is in. App Runner sets to <code>true</code> in all
     * other cases (which currently include a source code repository or a source image
     * using a same-account ECR repository).</p>
     */
    inline SourceConfiguration& WithAutoDeploymentsEnabled(bool value) { SetAutoDeploymentsEnabled(value); return *this;}


    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline const AuthenticationConfiguration& GetAuthenticationConfiguration() const{ return m_authenticationConfiguration; }

    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline bool AuthenticationConfigurationHasBeenSet() const { return m_authenticationConfigurationHasBeenSet; }

    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline void SetAuthenticationConfiguration(const AuthenticationConfiguration& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = value; }

    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline void SetAuthenticationConfiguration(AuthenticationConfiguration&& value) { m_authenticationConfigurationHasBeenSet = true; m_authenticationConfiguration = std::move(value); }

    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline SourceConfiguration& WithAuthenticationConfiguration(const AuthenticationConfiguration& value) { SetAuthenticationConfiguration(value); return *this;}

    /**
     * <p>Describes the resources that are needed to authenticate access to some source
     * repositories.</p>
     */
    inline SourceConfiguration& WithAuthenticationConfiguration(AuthenticationConfiguration&& value) { SetAuthenticationConfiguration(std::move(value)); return *this;}

  private:

    CodeRepository m_codeRepository;
    bool m_codeRepositoryHasBeenSet = false;

    ImageRepository m_imageRepository;
    bool m_imageRepositoryHasBeenSet = false;

    bool m_autoDeploymentsEnabled;
    bool m_autoDeploymentsEnabledHasBeenSet = false;

    AuthenticationConfiguration m_authenticationConfiguration;
    bool m_authenticationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
