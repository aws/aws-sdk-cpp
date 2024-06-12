/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestConfigurationLatestVersion.h>
#include <aws/apptest/model/TestConfigurationLifecycle.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apptest/model/ServiceSettings.h>
#include <aws/apptest/model/Resource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppTest
{
namespace Model
{
  class GetTestConfigurationResult
  {
  public:
    AWS_APPTEST_API GetTestConfigurationResult();
    AWS_APPTEST_API GetTestConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API GetTestConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The response test configuration ID.</p>
     */
    inline const Aws::String& GetTestConfigurationId() const{ return m_testConfigurationId; }
    inline void SetTestConfigurationId(const Aws::String& value) { m_testConfigurationId = value; }
    inline void SetTestConfigurationId(Aws::String&& value) { m_testConfigurationId = std::move(value); }
    inline void SetTestConfigurationId(const char* value) { m_testConfigurationId.assign(value); }
    inline GetTestConfigurationResult& WithTestConfigurationId(const Aws::String& value) { SetTestConfigurationId(value); return *this;}
    inline GetTestConfigurationResult& WithTestConfigurationId(Aws::String&& value) { SetTestConfigurationId(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithTestConfigurationId(const char* value) { SetTestConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration name</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTestConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTestConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetTestConfigurationArn() const{ return m_testConfigurationArn; }
    inline void SetTestConfigurationArn(const Aws::String& value) { m_testConfigurationArn = value; }
    inline void SetTestConfigurationArn(Aws::String&& value) { m_testConfigurationArn = std::move(value); }
    inline void SetTestConfigurationArn(const char* value) { m_testConfigurationArn.assign(value); }
    inline GetTestConfigurationResult& WithTestConfigurationArn(const Aws::String& value) { SetTestConfigurationArn(value); return *this;}
    inline GetTestConfigurationResult& WithTestConfigurationArn(Aws::String&& value) { SetTestConfigurationArn(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithTestConfigurationArn(const char* value) { SetTestConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the test configuration.</p>
     */
    inline const TestConfigurationLatestVersion& GetLatestVersion() const{ return m_latestVersion; }
    inline void SetLatestVersion(const TestConfigurationLatestVersion& value) { m_latestVersion = value; }
    inline void SetLatestVersion(TestConfigurationLatestVersion&& value) { m_latestVersion = std::move(value); }
    inline GetTestConfigurationResult& WithLatestVersion(const TestConfigurationLatestVersion& value) { SetLatestVersion(value); return *this;}
    inline GetTestConfigurationResult& WithLatestVersion(TestConfigurationLatestVersion&& value) { SetLatestVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test configuration version.</p>
     */
    inline int GetTestConfigurationVersion() const{ return m_testConfigurationVersion; }
    inline void SetTestConfigurationVersion(int value) { m_testConfigurationVersion = value; }
    inline GetTestConfigurationResult& WithTestConfigurationVersion(int value) { SetTestConfigurationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the test configuration.</p>
     */
    inline const TestConfigurationLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const TestConfigurationLifecycle& value) { m_status = value; }
    inline void SetStatus(TestConfigurationLifecycle&& value) { m_status = std::move(value); }
    inline GetTestConfigurationResult& WithStatus(const TestConfigurationLifecycle& value) { SetStatus(value); return *this;}
    inline GetTestConfigurationResult& WithStatus(TestConfigurationLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the test configuration.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetTestConfigurationResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetTestConfigurationResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the test configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetTestConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetTestConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last update time of the test configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTime = std::move(value); }
    inline GetTestConfigurationResult& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline GetTestConfigurationResult& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the test configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTestConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTestConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources of the test configuration.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resources = std::move(value); }
    inline GetTestConfigurationResult& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}
    inline GetTestConfigurationResult& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}
    inline GetTestConfigurationResult& AddResources(const Resource& value) { m_resources.push_back(value); return *this; }
    inline GetTestConfigurationResult& AddResources(Resource&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the test configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_properties = std::move(value); }
    inline GetTestConfigurationResult& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline GetTestConfigurationResult& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline GetTestConfigurationResult& AddProperties(const Aws::String& key, const Aws::String& value) { m_properties.emplace(key, value); return *this; }
    inline GetTestConfigurationResult& AddProperties(Aws::String&& key, const Aws::String& value) { m_properties.emplace(std::move(key), value); return *this; }
    inline GetTestConfigurationResult& AddProperties(const Aws::String& key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddProperties(Aws::String&& key, Aws::String&& value) { m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddProperties(const char* key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddProperties(Aws::String&& key, const char* value) { m_properties.emplace(std::move(key), value); return *this; }
    inline GetTestConfigurationResult& AddProperties(const char* key, const char* value) { m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags of the test configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTestConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTestConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTestConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTestConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTestConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTestConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The service settings of the test configuration.</p>
     */
    inline const ServiceSettings& GetServiceSettings() const{ return m_serviceSettings; }
    inline void SetServiceSettings(const ServiceSettings& value) { m_serviceSettings = value; }
    inline void SetServiceSettings(ServiceSettings&& value) { m_serviceSettings = std::move(value); }
    inline GetTestConfigurationResult& WithServiceSettings(const ServiceSettings& value) { SetServiceSettings(value); return *this;}
    inline GetTestConfigurationResult& WithServiceSettings(ServiceSettings&& value) { SetServiceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTestConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTestConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTestConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testConfigurationId;

    Aws::String m_name;

    Aws::String m_testConfigurationArn;

    TestConfigurationLatestVersion m_latestVersion;

    int m_testConfigurationVersion;

    TestConfigurationLifecycle m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdateTime;

    Aws::String m_description;

    Aws::Vector<Resource> m_resources;

    Aws::Map<Aws::String, Aws::String> m_properties;

    Aws::Map<Aws::String, Aws::String> m_tags;

    ServiceSettings m_serviceSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
