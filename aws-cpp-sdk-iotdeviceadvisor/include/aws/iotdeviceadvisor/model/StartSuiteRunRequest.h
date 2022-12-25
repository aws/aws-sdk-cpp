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
    AWS_IOTDEVICEADVISOR_API StartSuiteRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSuiteRun"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Suite definition ID of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = value; }

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Suite definition version of the test suite.</p>
     */
    inline StartSuiteRunRequest& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>Suite run configuration.</p>
     */
    inline const SuiteRunConfiguration& GetSuiteRunConfiguration() const{ return m_suiteRunConfiguration; }

    /**
     * <p>Suite run configuration.</p>
     */
    inline bool SuiteRunConfigurationHasBeenSet() const { return m_suiteRunConfigurationHasBeenSet; }

    /**
     * <p>Suite run configuration.</p>
     */
    inline void SetSuiteRunConfiguration(const SuiteRunConfiguration& value) { m_suiteRunConfigurationHasBeenSet = true; m_suiteRunConfiguration = value; }

    /**
     * <p>Suite run configuration.</p>
     */
    inline void SetSuiteRunConfiguration(SuiteRunConfiguration&& value) { m_suiteRunConfigurationHasBeenSet = true; m_suiteRunConfiguration = std::move(value); }

    /**
     * <p>Suite run configuration.</p>
     */
    inline StartSuiteRunRequest& WithSuiteRunConfiguration(const SuiteRunConfiguration& value) { SetSuiteRunConfiguration(value); return *this;}

    /**
     * <p>Suite run configuration.</p>
     */
    inline StartSuiteRunRequest& WithSuiteRunConfiguration(SuiteRunConfiguration&& value) { SetSuiteRunConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be attached to the suite run.</p>
     */
    inline StartSuiteRunRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
