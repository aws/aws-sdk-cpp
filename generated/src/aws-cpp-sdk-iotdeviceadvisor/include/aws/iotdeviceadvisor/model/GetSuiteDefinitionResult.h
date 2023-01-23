/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class GetSuiteDefinitionResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult();
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const{ return m_suiteDefinitionArn; }

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline void SetSuiteDefinitionArn(const Aws::String& value) { m_suiteDefinitionArn = value; }

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline void SetSuiteDefinitionArn(Aws::String&& value) { m_suiteDefinitionArn = std::move(value); }

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline void SetSuiteDefinitionArn(const char* value) { m_suiteDefinitionArn.assign(value); }

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(const Aws::String& value) { SetSuiteDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(Aws::String&& value) { SetSuiteDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionArn(const char* value) { SetSuiteDefinitionArn(value); return *this;}


    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetLatestVersion() const{ return m_latestVersion; }

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline void SetLatestVersion(const Aws::String& value) { m_latestVersion = value; }

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline void SetLatestVersion(Aws::String&& value) { m_latestVersion = std::move(value); }

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline void SetLatestVersion(const char* value) { m_latestVersion.assign(value); }

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithLatestVersion(const Aws::String& value) { SetLatestVersion(value); return *this;}

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithLatestVersion(Aws::String&& value) { SetLatestVersion(std::move(value)); return *this;}

    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithLatestVersion(const char* value) { SetLatestVersion(value); return *this;}


    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const{ return m_suiteDefinitionConfiguration; }

    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline void SetSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { m_suiteDefinitionConfiguration = value; }

    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline void SetSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { m_suiteDefinitionConfiguration = std::move(value); }

    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { SetSuiteDefinitionConfiguration(value); return *this;}

    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { SetSuiteDefinitionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline GetSuiteDefinitionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline GetSuiteDefinitionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAt = value; }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAt = std::move(value); }

    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline GetSuiteDefinitionResult& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline GetSuiteDefinitionResult& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline GetSuiteDefinitionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_suiteDefinitionId;

    Aws::String m_suiteDefinitionArn;

    Aws::String m_suiteDefinitionVersion;

    Aws::String m_latestVersion;

    SuiteDefinitionConfiguration m_suiteDefinitionConfiguration;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastModifiedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
