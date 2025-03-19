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
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult() = default;
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API GetSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite definition ID of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    GetSuiteDefinitionResult& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const { return m_suiteDefinitionArn; }
    template<typename SuiteDefinitionArnT = Aws::String>
    void SetSuiteDefinitionArn(SuiteDefinitionArnT&& value) { m_suiteDefinitionArnHasBeenSet = true; m_suiteDefinitionArn = std::forward<SuiteDefinitionArnT>(value); }
    template<typename SuiteDefinitionArnT = Aws::String>
    GetSuiteDefinitionResult& WithSuiteDefinitionArn(SuiteDefinitionArnT&& value) { SetSuiteDefinitionArn(std::forward<SuiteDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const { return m_suiteDefinitionVersion; }
    template<typename SuiteDefinitionVersionT = Aws::String>
    void SetSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::forward<SuiteDefinitionVersionT>(value); }
    template<typename SuiteDefinitionVersionT = Aws::String>
    GetSuiteDefinitionResult& WithSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { SetSuiteDefinitionVersion(std::forward<SuiteDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Latest suite definition version of the suite definition.</p>
     */
    inline const Aws::String& GetLatestVersion() const { return m_latestVersion; }
    template<typename LatestVersionT = Aws::String>
    void SetLatestVersion(LatestVersionT&& value) { m_latestVersionHasBeenSet = true; m_latestVersion = std::forward<LatestVersionT>(value); }
    template<typename LatestVersionT = Aws::String>
    GetSuiteDefinitionResult& WithLatestVersion(LatestVersionT&& value) { SetLatestVersion(std::forward<LatestVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite configuration of the suite definition.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const { return m_suiteDefinitionConfiguration; }
    template<typename SuiteDefinitionConfigurationT = SuiteDefinitionConfiguration>
    void SetSuiteDefinitionConfiguration(SuiteDefinitionConfigurationT&& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = std::forward<SuiteDefinitionConfigurationT>(value); }
    template<typename SuiteDefinitionConfigurationT = SuiteDefinitionConfiguration>
    GetSuiteDefinitionResult& WithSuiteDefinitionConfiguration(SuiteDefinitionConfigurationT&& value) { SetSuiteDefinitionConfiguration(std::forward<SuiteDefinitionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite definition was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetSuiteDefinitionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date (in Unix epoch time) when the suite definition was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    GetSuiteDefinitionResult& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags attached to the suite definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetSuiteDefinitionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetSuiteDefinitionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSuiteDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionArn;
    bool m_suiteDefinitionArnHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    Aws::String m_latestVersion;
    bool m_latestVersionHasBeenSet = false;

    SuiteDefinitionConfiguration m_suiteDefinitionConfiguration;
    bool m_suiteDefinitionConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
