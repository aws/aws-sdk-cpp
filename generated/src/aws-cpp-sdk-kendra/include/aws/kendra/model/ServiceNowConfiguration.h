/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/ServiceNowBuildVersionType.h>
#include <aws/kendra/model/ServiceNowKnowledgeArticleConfiguration.h>
#include <aws/kendra/model/ServiceNowServiceCatalogConfiguration.h>
#include <aws/kendra/model/ServiceNowAuthenticationType.h>
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
   * <p>Provides the configuration information to connect to ServiceNow as your data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServiceNowConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceNowConfiguration
  {
  public:
    AWS_KENDRA_API ServiceNowConfiguration() = default;
    AWS_KENDRA_API ServiceNowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ServiceNowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <i>{instance}.service-now.com.</i> </p>
     */
    inline const Aws::String& GetHostUrl() const { return m_hostUrl; }
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }
    template<typename HostUrlT = Aws::String>
    void SetHostUrl(HostUrlT&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::forward<HostUrlT>(value); }
    template<typename HostUrlT = Aws::String>
    ServiceNowConfiguration& WithHostUrl(HostUrlT&& value) { SetHostUrl(std::forward<HostUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance. You
     * can also provide OAuth authentication credentials of user name, password, client
     * ID, and client secret. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-servicenow.html">Using
     * a ServiceNow data source</a>.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    ServiceNowConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline ServiceNowBuildVersionType GetServiceNowBuildVersion() const { return m_serviceNowBuildVersion; }
    inline bool ServiceNowBuildVersionHasBeenSet() const { return m_serviceNowBuildVersionHasBeenSet; }
    inline void SetServiceNowBuildVersion(ServiceNowBuildVersionType value) { m_serviceNowBuildVersionHasBeenSet = true; m_serviceNowBuildVersion = value; }
    inline ServiceNowConfiguration& WithServiceNowBuildVersion(ServiceNowBuildVersionType value) { SetServiceNowBuildVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for crawling knowledge articles in the ServiceNow
     * site.</p>
     */
    inline const ServiceNowKnowledgeArticleConfiguration& GetKnowledgeArticleConfiguration() const { return m_knowledgeArticleConfiguration; }
    inline bool KnowledgeArticleConfigurationHasBeenSet() const { return m_knowledgeArticleConfigurationHasBeenSet; }
    template<typename KnowledgeArticleConfigurationT = ServiceNowKnowledgeArticleConfiguration>
    void SetKnowledgeArticleConfiguration(KnowledgeArticleConfigurationT&& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = std::forward<KnowledgeArticleConfigurationT>(value); }
    template<typename KnowledgeArticleConfigurationT = ServiceNowKnowledgeArticleConfiguration>
    ServiceNowConfiguration& WithKnowledgeArticleConfiguration(KnowledgeArticleConfigurationT&& value) { SetKnowledgeArticleConfiguration(std::forward<KnowledgeArticleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for crawling service catalogs in the ServiceNow
     * site.</p>
     */
    inline const ServiceNowServiceCatalogConfiguration& GetServiceCatalogConfiguration() const { return m_serviceCatalogConfiguration; }
    inline bool ServiceCatalogConfigurationHasBeenSet() const { return m_serviceCatalogConfigurationHasBeenSet; }
    template<typename ServiceCatalogConfigurationT = ServiceNowServiceCatalogConfiguration>
    void SetServiceCatalogConfiguration(ServiceCatalogConfigurationT&& value) { m_serviceCatalogConfigurationHasBeenSet = true; m_serviceCatalogConfiguration = std::forward<ServiceCatalogConfigurationT>(value); }
    template<typename ServiceCatalogConfigurationT = ServiceNowServiceCatalogConfiguration>
    ServiceNowConfiguration& WithServiceCatalogConfiguration(ServiceCatalogConfigurationT&& value) { SetServiceCatalogConfiguration(std::forward<ServiceCatalogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of authentication used to connect to the ServiceNow instance. If you
     * choose <code>HTTP_BASIC</code>, Amazon Kendra is authenticated using the user
     * name and password provided in the Secrets Manager secret in the
     * <code>SecretArn</code> field. If you choose <code>OAUTH2</code>, Amazon Kendra
     * is authenticated using the credentials of client ID, client secret, user name
     * and password.</p> <p>When you use <code>OAUTH2</code> authentication, you must
     * generate a token and a client secret using the ServiceNow console. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/data-source-servicenow.html">Using
     * a ServiceNow data source</a>.</p>
     */
    inline ServiceNowAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(ServiceNowAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline ServiceNowConfiguration& WithAuthenticationType(ServiceNowAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}
  private:

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    ServiceNowBuildVersionType m_serviceNowBuildVersion{ServiceNowBuildVersionType::NOT_SET};
    bool m_serviceNowBuildVersionHasBeenSet = false;

    ServiceNowKnowledgeArticleConfiguration m_knowledgeArticleConfiguration;
    bool m_knowledgeArticleConfigurationHasBeenSet = false;

    ServiceNowServiceCatalogConfiguration m_serviceCatalogConfiguration;
    bool m_serviceCatalogConfigurationHasBeenSet = false;

    ServiceNowAuthenticationType m_authenticationType{ServiceNowAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
