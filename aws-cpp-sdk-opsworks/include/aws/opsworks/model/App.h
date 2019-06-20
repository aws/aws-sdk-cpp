/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/AppType.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/SslConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/DataSource.h>
#include <aws/opsworks/model/AppAttributesKeys.h>
#include <aws/opsworks/model/EnvironmentVariable.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>A description of the app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/App">AWS API
   * Reference</a></p>
   */
  class AWS_OPSWORKS_API App
  {
  public:
    App();
    App(Aws::Utils::Json::JsonView jsonValue);
    App& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline App& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline App& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline App& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The app stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The app stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The app stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The app stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The app stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The app stack ID.</p>
     */
    inline App& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The app stack ID.</p>
     */
    inline App& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The app stack ID.</p>
     */
    inline App& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The app's short name.</p>
     */
    inline const Aws::String& GetShortname() const{ return m_shortname; }

    /**
     * <p>The app's short name.</p>
     */
    inline bool ShortnameHasBeenSet() const { return m_shortnameHasBeenSet; }

    /**
     * <p>The app's short name.</p>
     */
    inline void SetShortname(const Aws::String& value) { m_shortnameHasBeenSet = true; m_shortname = value; }

    /**
     * <p>The app's short name.</p>
     */
    inline void SetShortname(Aws::String&& value) { m_shortnameHasBeenSet = true; m_shortname = std::move(value); }

    /**
     * <p>The app's short name.</p>
     */
    inline void SetShortname(const char* value) { m_shortnameHasBeenSet = true; m_shortname.assign(value); }

    /**
     * <p>The app's short name.</p>
     */
    inline App& WithShortname(const Aws::String& value) { SetShortname(value); return *this;}

    /**
     * <p>The app's short name.</p>
     */
    inline App& WithShortname(Aws::String&& value) { SetShortname(std::move(value)); return *this;}

    /**
     * <p>The app's short name.</p>
     */
    inline App& WithShortname(const char* value) { SetShortname(value); return *this;}


    /**
     * <p>The app name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The app name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The app name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The app name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The app name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The app name.</p>
     */
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The app name.</p>
     */
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The app name.</p>
     */
    inline App& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the app.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the app.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the app.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the app.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the app.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the app.</p>
     */
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the app.</p>
     */
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the app.</p>
     */
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The app's data sources.</p>
     */
    inline const Aws::Vector<DataSource>& GetDataSources() const{ return m_dataSources; }

    /**
     * <p>The app's data sources.</p>
     */
    inline bool DataSourcesHasBeenSet() const { return m_dataSourcesHasBeenSet; }

    /**
     * <p>The app's data sources.</p>
     */
    inline void SetDataSources(const Aws::Vector<DataSource>& value) { m_dataSourcesHasBeenSet = true; m_dataSources = value; }

    /**
     * <p>The app's data sources.</p>
     */
    inline void SetDataSources(Aws::Vector<DataSource>&& value) { m_dataSourcesHasBeenSet = true; m_dataSources = std::move(value); }

    /**
     * <p>The app's data sources.</p>
     */
    inline App& WithDataSources(const Aws::Vector<DataSource>& value) { SetDataSources(value); return *this;}

    /**
     * <p>The app's data sources.</p>
     */
    inline App& WithDataSources(Aws::Vector<DataSource>&& value) { SetDataSources(std::move(value)); return *this;}

    /**
     * <p>The app's data sources.</p>
     */
    inline App& AddDataSources(const DataSource& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(value); return *this; }

    /**
     * <p>The app's data sources.</p>
     */
    inline App& AddDataSources(DataSource&& value) { m_dataSourcesHasBeenSet = true; m_dataSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The app type.</p>
     */
    inline const AppType& GetType() const{ return m_type; }

    /**
     * <p>The app type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The app type.</p>
     */
    inline void SetType(const AppType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The app type.</p>
     */
    inline void SetType(AppType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The app type.</p>
     */
    inline App& WithType(const AppType& value) { SetType(value); return *this;}

    /**
     * <p>The app type.</p>
     */
    inline App& WithType(AppType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline const Source& GetAppSource() const{ return m_appSource; }

    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline bool AppSourceHasBeenSet() const { return m_appSourceHasBeenSet; }

    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline void SetAppSource(const Source& value) { m_appSourceHasBeenSet = true; m_appSource = value; }

    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline void SetAppSource(Source&& value) { m_appSourceHasBeenSet = true; m_appSource = std::move(value); }

    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline App& WithAppSource(const Source& value) { SetAppSource(value); return *this;}

    /**
     * <p>A <code>Source</code> object that describes the app repository.</p>
     */
    inline App& WithAppSource(Source&& value) { SetAppSource(std::move(value)); return *this;}


    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomains() const{ return m_domains; }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline void SetDomains(const Aws::Vector<Aws::String>& value) { m_domainsHasBeenSet = true; m_domains = value; }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline void SetDomains(Aws::Vector<Aws::String>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline App& WithDomains(const Aws::Vector<Aws::String>& value) { SetDomains(value); return *this;}

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline App& WithDomains(Aws::Vector<Aws::String>&& value) { SetDomains(std::move(value)); return *this;}

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline App& AddDomains(const Aws::String& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline App& AddDomains(Aws::String&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }

    /**
     * <p>The app vhost settings with multiple domains separated by commas. For
     * example: <code>'www.example.com, example.com'</code> </p>
     */
    inline App& AddDomains(const char* value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }


    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline bool GetEnableSsl() const{ return m_enableSsl; }

    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline bool EnableSslHasBeenSet() const { return m_enableSslHasBeenSet; }

    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline void SetEnableSsl(bool value) { m_enableSslHasBeenSet = true; m_enableSsl = value; }

    /**
     * <p>Whether to enable SSL for the app.</p>
     */
    inline App& WithEnableSsl(bool value) { SetEnableSsl(value); return *this;}


    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline const SslConfiguration& GetSslConfiguration() const{ return m_sslConfiguration; }

    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline bool SslConfigurationHasBeenSet() const { return m_sslConfigurationHasBeenSet; }

    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline void SetSslConfiguration(const SslConfiguration& value) { m_sslConfigurationHasBeenSet = true; m_sslConfiguration = value; }

    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline void SetSslConfiguration(SslConfiguration&& value) { m_sslConfigurationHasBeenSet = true; m_sslConfiguration = std::move(value); }

    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline App& WithSslConfiguration(const SslConfiguration& value) { SetSslConfiguration(value); return *this;}

    /**
     * <p>An <code>SslConfiguration</code> object with the SSL configuration.</p>
     */
    inline App& WithSslConfiguration(SslConfiguration&& value) { SetSslConfiguration(std::move(value)); return *this;}


    /**
     * <p>The stack attributes.</p>
     */
    inline const Aws::Map<AppAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The stack attributes.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The stack attributes.</p>
     */
    inline void SetAttributes(const Aws::Map<AppAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The stack attributes.</p>
     */
    inline void SetAttributes(Aws::Map<AppAttributesKeys, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& WithAttributes(const Aws::Map<AppAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The stack attributes.</p>
     */
    inline App& WithAttributes(Aws::Map<AppAttributesKeys, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(const AppAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(AppAttributesKeys&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(const AppAttributesKeys& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(AppAttributesKeys&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(AppAttributesKeys&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>The stack attributes.</p>
     */
    inline App& AddAttributes(const AppAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>When the app was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>When the app was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>When the app was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>When the app was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>When the app was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>When the app was created.</p>
     */
    inline App& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>When the app was created.</p>
     */
    inline App& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>When the app was created.</p>
     */
    inline App& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline void SetEnvironment(const Aws::Vector<EnvironmentVariable>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline void SetEnvironment(Aws::Vector<EnvironmentVariable>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline App& WithEnvironment(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline App& WithEnvironment(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline App& AddEnvironment(const EnvironmentVariable& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }

    /**
     * <p>An array of <code>EnvironmentVariable</code> objects that specify environment
     * variables to be associated with the app. After you deploy the app, these
     * variables are defined on the associated app server instances. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html#workingapps-creating-environment">
     * Environment Variables</a>. </p> <note> <p>There is no specific limit on the
     * number of environment variables. However, the size of the associated data
     * structure - which includes the variable names, values, and protected flag values
     * - cannot exceed 20 KB. This limit should accommodate most if not all use cases,
     * but if you do exceed it, you will cause an exception (API) with an "Environment:
     * is too large (maximum is 20 KB)" message.</p> </note>
     */
    inline App& AddEnvironment(EnvironmentVariable&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_shortname;
    bool m_shortnameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<DataSource> m_dataSources;
    bool m_dataSourcesHasBeenSet;

    AppType m_type;
    bool m_typeHasBeenSet;

    Source m_appSource;
    bool m_appSourceHasBeenSet;

    Aws::Vector<Aws::String> m_domains;
    bool m_domainsHasBeenSet;

    bool m_enableSsl;
    bool m_enableSslHasBeenSet;

    SslConfiguration m_sslConfiguration;
    bool m_sslConfigurationHasBeenSet;

    Aws::Map<AppAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Vector<EnvironmentVariable> m_environment;
    bool m_environmentHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
