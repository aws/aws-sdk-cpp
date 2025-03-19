/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ResourceType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class AssociateResourceTypesRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API AssociateResourceTypesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResourceTypes"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified configuration recorder.</p>
     */
    inline const Aws::String& GetConfigurationRecorderArn() const { return m_configurationRecorderArn; }
    inline bool ConfigurationRecorderArnHasBeenSet() const { return m_configurationRecorderArnHasBeenSet; }
    template<typename ConfigurationRecorderArnT = Aws::String>
    void SetConfigurationRecorderArn(ConfigurationRecorderArnT&& value) { m_configurationRecorderArnHasBeenSet = true; m_configurationRecorderArn = std::forward<ConfigurationRecorderArnT>(value); }
    template<typename ConfigurationRecorderArnT = Aws::String>
    AssociateResourceTypesRequest& WithConfigurationRecorderArn(ConfigurationRecorderArnT&& value) { SetConfigurationRecorderArn(std::forward<ConfigurationRecorderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource types you want to add to the recording group of the
     * specified configuration recorder.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const { return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<ResourceType>>
    AssociateResourceTypesRequest& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    inline AssociateResourceTypesRequest& AddResourceTypes(ResourceType value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_configurationRecorderArn;
    bool m_configurationRecorderArnHasBeenSet = false;

    Aws::Vector<ResourceType> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
