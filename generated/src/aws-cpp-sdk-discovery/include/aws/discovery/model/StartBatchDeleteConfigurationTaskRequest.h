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
    AWS_APPLICATIONDISCOVERYSERVICE_API StartBatchDeleteConfigurationTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBatchDeleteConfigurationTask"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline const DeletionConfigurationItemType& GetConfigurationType() const{ return m_configurationType; }

    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline bool ConfigurationTypeHasBeenSet() const { return m_configurationTypeHasBeenSet; }

    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline void SetConfigurationType(const DeletionConfigurationItemType& value) { m_configurationTypeHasBeenSet = true; m_configurationType = value; }

    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline void SetConfigurationType(DeletionConfigurationItemType&& value) { m_configurationTypeHasBeenSet = true; m_configurationType = std::move(value); }

    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& WithConfigurationType(const DeletionConfigurationItemType& value) { SetConfigurationType(value); return *this;}

    /**
     * <p> The type of configuration item to delete. Supported types are: SERVER. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& WithConfigurationType(DeletionConfigurationItemType&& value) { SetConfigurationType(std::move(value)); return *this;}


    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const{ return m_configurationIds; }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline void SetConfigurationIds(const Aws::Vector<Aws::String>& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = value; }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline void SetConfigurationIds(Aws::Vector<Aws::String>&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::move(value); }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& WithConfigurationIds(const Aws::Vector<Aws::String>& value) { SetConfigurationIds(value); return *this;}

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& WithConfigurationIds(Aws::Vector<Aws::String>&& value) { SetConfigurationIds(std::move(value)); return *this;}

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& AddConfigurationIds(const Aws::String& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& AddConfigurationIds(Aws::String&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of configuration IDs that will be deleted by the task. </p>
     */
    inline StartBatchDeleteConfigurationTaskRequest& AddConfigurationIds(const char* value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

  private:

    DeletionConfigurationItemType m_configurationType;
    bool m_configurationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
