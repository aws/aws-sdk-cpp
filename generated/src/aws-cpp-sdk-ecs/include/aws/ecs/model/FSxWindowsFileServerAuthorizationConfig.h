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
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig() = default;
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API FSxWindowsFileServerAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The authorization credential option to use. The authorization credential
     * options can be provided using either the Amazon Resource Name (ARN) of an
     * Secrets Manager secret or SSM Parameter Store parameter. The ARN refers to the
     * stored credentials.</p>
     */
    inline const Aws::String& GetCredentialsParameter() const { return m_credentialsParameter; }
    inline bool CredentialsParameterHasBeenSet() const { return m_credentialsParameterHasBeenSet; }
    template<typename CredentialsParameterT = Aws::String>
    void SetCredentialsParameter(CredentialsParameterT&& value) { m_credentialsParameterHasBeenSet = true; m_credentialsParameter = std::forward<CredentialsParameterT>(value); }
    template<typename CredentialsParameterT = Aws::String>
    FSxWindowsFileServerAuthorizationConfig& WithCredentialsParameter(CredentialsParameterT&& value) { SetCredentialsParameter(std::forward<CredentialsParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fully qualified domain name hosted by an <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/directory_microsoft_ad.html">Directory
     * Service</a> Managed Microsoft AD (Active Directory) or self-hosted AD on Amazon
     * EC2.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    FSxWindowsFileServerAuthorizationConfig& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_credentialsParameter;
    bool m_credentialsParameterHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
