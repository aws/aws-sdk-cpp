/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteRunConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class StartSuiteRunRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API StartSuiteRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSuiteRun"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    StartSuiteRunRequest& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const { return m_suiteDefinitionVersion; }
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }
    template<typename SuiteDefinitionVersionT = Aws::String>
    void SetSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::forward<SuiteDefinitionVersionT>(value); }
    template<typename SuiteDefinitionVersionT = Aws::String>
    StartSuiteRunRequest& WithSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { SetSuiteDefinitionVersion(std::forward<SuiteDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suite run configuration.</p>
     */
    inline const SuiteRunConfiguration& GetSuiteRunConfiguration() const { return m_suiteRunConfiguration; }
    inline bool SuiteRunConfigurationHasBeenSet() const { return m_suiteRunConfigurationHasBeenSet; }
    template<typename SuiteRunConfigurationT = SuiteRunConfiguration>
    void SetSuiteRunConfiguration(SuiteRunConfigurationT&& value) { m_suiteRunConfigurationHasBeenSet = true; m_suiteRunConfiguration = std::forward<SuiteRunConfigurationT>(value); }
    template<typename SuiteRunConfigurationT = SuiteRunConfiguration>
    StartSuiteRunRequest& WithSuiteRunConfiguration(SuiteRunConfigurationT&& value) { SetSuiteRunConfiguration(std::forward<SuiteRunConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSuiteRunRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSuiteRunRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    SuiteRunConfiguration m_suiteRunConfiguration;
    bool m_suiteRunConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
