/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AssociateConfigurationItemsToApplicationRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API AssociateConfigurationItemsToApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateConfigurationItemsToApplication"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline const Aws::String& GetApplicationConfigurationId() const{ return m_applicationConfigurationId; }

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline bool ApplicationConfigurationIdHasBeenSet() const { return m_applicationConfigurationIdHasBeenSet; }

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline void SetApplicationConfigurationId(const Aws::String& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = value; }

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline void SetApplicationConfigurationId(Aws::String&& value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId = std::move(value); }

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline void SetApplicationConfigurationId(const char* value) { m_applicationConfigurationIdHasBeenSet = true; m_applicationConfigurationId.assign(value); }

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& WithApplicationConfigurationId(const Aws::String& value) { SetApplicationConfigurationId(value); return *this;}

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& WithApplicationConfigurationId(Aws::String&& value) { SetApplicationConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The configuration ID of an application with which items are to be
     * associated.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& WithApplicationConfigurationId(const char* value) { SetApplicationConfigurationId(value); return *this;}


    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const{ return m_configurationIds; }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline void SetConfigurationIds(const Aws::Vector<Aws::String>& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = value; }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline void SetConfigurationIds(Aws::Vector<Aws::String>&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::move(value); }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& WithConfigurationIds(const Aws::Vector<Aws::String>& value) { SetConfigurationIds(value); return *this;}

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& WithConfigurationIds(Aws::Vector<Aws::String>&& value) { SetConfigurationIds(std::move(value)); return *this;}

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& AddConfigurationIds(const Aws::String& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& AddConfigurationIds(Aws::String&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of each configuration item to be associated with an application.</p>
     */
    inline AssociateConfigurationItemsToApplicationRequest& AddConfigurationIds(const char* value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

  private:

    Aws::String m_applicationConfigurationId;
    bool m_applicationConfigurationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
