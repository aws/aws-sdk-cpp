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
   * <p>Provides configuration information required to connect to a ServiceNow data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServiceNowConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ServiceNowConfiguration
  {
  public:
    ServiceNowConfiguration();
    ServiceNowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ServiceNowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline const Aws::String& GetHostUrl() const{ return m_hostUrl; }

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline void SetHostUrl(const Aws::String& value) { m_hostUrlHasBeenSet = true; m_hostUrl = value; }

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline void SetHostUrl(Aws::String&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::move(value); }

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline void SetHostUrl(const char* value) { m_hostUrlHasBeenSet = true; m_hostUrl.assign(value); }

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline ServiceNowConfiguration& WithHostUrl(const Aws::String& value) { SetHostUrl(value); return *this;}

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline ServiceNowConfiguration& WithHostUrl(Aws::String&& value) { SetHostUrl(std::move(value)); return *this;}

    /**
     * <p>The ServiceNow instance that the data source connects to. The host endpoint
     * should look like the following: <code>{instance}.service-now.com.</code> </p>
     */
    inline ServiceNowConfiguration& WithHostUrl(const char* value) { SetHostUrl(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline ServiceNowConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline ServiceNowConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Secret Manager secret that contains
     * the user name and password required to connect to the ServiceNow instance.</p>
     */
    inline ServiceNowConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline const ServiceNowBuildVersionType& GetServiceNowBuildVersion() const{ return m_serviceNowBuildVersion; }

    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline bool ServiceNowBuildVersionHasBeenSet() const { return m_serviceNowBuildVersionHasBeenSet; }

    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline void SetServiceNowBuildVersion(const ServiceNowBuildVersionType& value) { m_serviceNowBuildVersionHasBeenSet = true; m_serviceNowBuildVersion = value; }

    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline void SetServiceNowBuildVersion(ServiceNowBuildVersionType&& value) { m_serviceNowBuildVersionHasBeenSet = true; m_serviceNowBuildVersion = std::move(value); }

    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline ServiceNowConfiguration& WithServiceNowBuildVersion(const ServiceNowBuildVersionType& value) { SetServiceNowBuildVersion(value); return *this;}

    /**
     * <p>The identifier of the release that the ServiceNow host is running. If the
     * host is not running the <code>LONDON</code> release, use
     * <code>OTHERS</code>.</p>
     */
    inline ServiceNowConfiguration& WithServiceNowBuildVersion(ServiceNowBuildVersionType&& value) { SetServiceNowBuildVersion(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline const ServiceNowKnowledgeArticleConfiguration& GetKnowledgeArticleConfiguration() const{ return m_knowledgeArticleConfiguration; }

    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline bool KnowledgeArticleConfigurationHasBeenSet() const { return m_knowledgeArticleConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline void SetKnowledgeArticleConfiguration(const ServiceNowKnowledgeArticleConfiguration& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = value; }

    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline void SetKnowledgeArticleConfiguration(ServiceNowKnowledgeArticleConfiguration&& value) { m_knowledgeArticleConfigurationHasBeenSet = true; m_knowledgeArticleConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline ServiceNowConfiguration& WithKnowledgeArticleConfiguration(const ServiceNowKnowledgeArticleConfiguration& value) { SetKnowledgeArticleConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information for crawling knowledge articles in the
     * ServiceNow site.</p>
     */
    inline ServiceNowConfiguration& WithKnowledgeArticleConfiguration(ServiceNowKnowledgeArticleConfiguration&& value) { SetKnowledgeArticleConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline const ServiceNowServiceCatalogConfiguration& GetServiceCatalogConfiguration() const{ return m_serviceCatalogConfiguration; }

    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline bool ServiceCatalogConfigurationHasBeenSet() const { return m_serviceCatalogConfigurationHasBeenSet; }

    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline void SetServiceCatalogConfiguration(const ServiceNowServiceCatalogConfiguration& value) { m_serviceCatalogConfigurationHasBeenSet = true; m_serviceCatalogConfiguration = value; }

    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline void SetServiceCatalogConfiguration(ServiceNowServiceCatalogConfiguration&& value) { m_serviceCatalogConfigurationHasBeenSet = true; m_serviceCatalogConfiguration = std::move(value); }

    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline ServiceNowConfiguration& WithServiceCatalogConfiguration(const ServiceNowServiceCatalogConfiguration& value) { SetServiceCatalogConfiguration(value); return *this;}

    /**
     * <p>Provides configuration information for crawling service catalogs in the
     * ServiceNow site.</p>
     */
    inline ServiceNowConfiguration& WithServiceCatalogConfiguration(ServiceNowServiceCatalogConfiguration&& value) { SetServiceCatalogConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet;

    ServiceNowBuildVersionType m_serviceNowBuildVersion;
    bool m_serviceNowBuildVersionHasBeenSet;

    ServiceNowKnowledgeArticleConfiguration m_knowledgeArticleConfiguration;
    bool m_knowledgeArticleConfigurationHasBeenSet;

    ServiceNowServiceCatalogConfiguration m_serviceCatalogConfiguration;
    bool m_serviceCatalogConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
