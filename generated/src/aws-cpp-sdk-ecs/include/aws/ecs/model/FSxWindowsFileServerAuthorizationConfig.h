/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
   * <p>The authorization configuration details for Amazon FSx for Windows File
   * Server file system. See <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_FSxWindowsFileServerVolumeConfiguration.html">FSxWindowsFileServerVolumeConfiguration</a>
   * in the <i>Amazon ECS API Reference</i>.</p> <p>For more information and the
   * input format, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/wfsx-volumes.html">Amazon
   * FSx for Windows File Server Volumes</a> in the <i>Amazon Elastic Container
   * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/FSxWindowsFileServerAuthorizationConfig">AWS
   * API Reference</a></p>
   */
  class FSxWindowsFileServerAuthorizationConfig
  {
  public:
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig();
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline const Aws::String& GetCredentialsParameter() const{ return m_credentialsParameter; }

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline void SetCredentialsParameter(const Aws::String& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = value; }

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline void SetCredentialsParameter(Aws::String&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::move(value); }

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline void SetCredentialsParameter(const char* value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter.assign(value); }

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithCredentialsParameter(const Aws::String& value) { SetCredentialsParameter(value); return *this;}

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithCredentialsParameter(Aws::String&& value) { SetCredentialsParameter(std::move(value)); return *this;}

    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithCredentialsParameter(const char* value) { SetCredentialsParameter(value); return *this;}


    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline FSxWindowsFileServerAuthorizationConfig& WithDomain(const char* value) { SetDomain(value); return *this;}

  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
