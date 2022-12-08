/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class CreateSuiteDefinitionRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSuiteDefinition"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const{ return m_suiteDefinitionConfiguration; }

    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline bool SuiteDefinitionConfigurationHasBeenSet() const { return m_suiteDefinitionConfigurationHasBeenSet; }

    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline void SetSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = value; }

    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline void SetSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = std::move(value); }

    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline CreateSuiteDefinitionRequest& WithSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { SetSuiteDefinitionConfiguration(value); return *this;}

    /**
     * <p>Creates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline CreateSuiteDefinitionRequest& WithSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { SetSuiteDefinitionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be attached to the suite definition.</p>
     */
    inline CreateSuiteDefinitionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    SuiteDefinitionConfiguration m_suiteDefinitionConfiguration;
    bool m_suiteDefinitionConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
