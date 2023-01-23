/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
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
  class UpdateApplicationRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Configuration ID of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>New name of the application to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>New name of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>New description of the application to be updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>New description of the application to be updated.</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
