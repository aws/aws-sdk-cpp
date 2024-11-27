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
  class DisassociateResourceTypesRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DisassociateResourceTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateResourceTypes"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified configuration recorder.</p>
     */
    inline const Aws::String& GetConfigurationRecorderArn() const{ return m_configurationRecorderArn; }
    inline bool ConfigurationRecorderArnHasBeenSet() const { return m_configurationRecorderArnHasBeenSet; }
    inline void SetConfigurationRecorderArn(const Aws::String& value) { m_configurationRecorderArnHasBeenSet = true; m_configurationRecorderArn = value; }
    inline void SetConfigurationRecorderArn(Aws::String&& value) { m_configurationRecorderArnHasBeenSet = true; m_configurationRecorderArn = std::move(value); }
    inline void SetConfigurationRecorderArn(const char* value) { m_configurationRecorderArnHasBeenSet = true; m_configurationRecorderArn.assign(value); }
    inline DisassociateResourceTypesRequest& WithConfigurationRecorderArn(const Aws::String& value) { SetConfigurationRecorderArn(value); return *this;}
    inline DisassociateResourceTypesRequest& WithConfigurationRecorderArn(Aws::String&& value) { SetConfigurationRecorderArn(std::move(value)); return *this;}
    inline DisassociateResourceTypesRequest& WithConfigurationRecorderArn(const char* value) { SetConfigurationRecorderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resource types you want to remove from the recording group of the
     * specified configuration recorder.</p>
     */
    inline const Aws::Vector<ResourceType>& GetResourceTypes() const{ return m_resourceTypes; }
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
    inline void SetResourceTypes(const Aws::Vector<ResourceType>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<ResourceType>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }
    inline DisassociateResourceTypesRequest& WithResourceTypes(const Aws::Vector<ResourceType>& value) { SetResourceTypes(value); return *this;}
    inline DisassociateResourceTypesRequest& WithResourceTypes(Aws::Vector<ResourceType>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline DisassociateResourceTypesRequest& AddResourceTypes(const ResourceType& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }
    inline DisassociateResourceTypesRequest& AddResourceTypes(ResourceType&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }
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
