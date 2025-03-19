/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/discovery/model/DeletionConfigurationItemType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class StartBatchDeleteConfigurationTaskRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartBatchDeleteConfigurationTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBatchDeleteConfigurationTask"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline DeletionConfigurationItemType GetConfigurationType() const { return m_configurationType; }
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }
    inline void SetConfigurationType(DeletionConfigurationItemType value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }
    inline StartBatchDeleteConfigurationTaskRequest& WithConfigurationType(DeletionConfigurationItemType value) { SetConfigurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const { return m_configurationIds; }
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    void SetConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::forward<ConfigurationIdsT>(value); }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    StartBatchDeleteConfigurationTaskRequest& WithConfigurationIds(ConfigurationIdsT&& value) { SetConfigurationIds(std::forward<ConfigurationIdsT>(value)); return *this;}
    template<typename ConfigurationIdsT = Aws::String>
    StartBatchDeleteConfigurationTaskRequest& AddConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.emplace_back(std::forward<ConfigurationIdsT>(value)); return *this; }
    ///@}
  private:

    DeletionConfigurationItemType m_configurationType{DeletionConfigurationItemType::NOT_SET};
    bool m_configurationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
