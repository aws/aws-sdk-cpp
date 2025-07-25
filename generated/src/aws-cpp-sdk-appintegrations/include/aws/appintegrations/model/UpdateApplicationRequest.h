/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/ApplicationSourceConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appintegrations/model/ApplicationConfig.h>
#include <aws/appintegrations/model/IframeConfig.h>
#include <utility>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API UpdateApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateApplicationRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateApplicationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for where the application should be loaded from.</p>
     */
    inline const ApplicationSourceConfig& GetApplicationSourceConfig() const { return m_applicationSourceConfig; }
    inline bool ApplicationSourceConfigHasBeenSet() const { return m_applicationSourceConfigHasBeenSet; }
    template<typename ApplicationSourceConfigT = ApplicationSourceConfig>
    void SetApplicationSourceConfig(ApplicationSourceConfigT&& value) { m_applicationSourceConfigHasBeenSet = true; m_applicationSourceConfig = std::forward<ApplicationSourceConfigT>(value); }
    template<typename ApplicationSourceConfigT = ApplicationSourceConfig>
    UpdateApplicationRequest& WithApplicationSourceConfig(ApplicationSourceConfigT&& value) { SetApplicationSourceConfig(std::forward<ApplicationSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of events or requests that the application has access
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    UpdateApplicationRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = Aws::String>
    UpdateApplicationRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the application is a service.</p>
     */
    inline bool GetIsService() const { return m_isService; }
    inline bool IsServiceHasBeenSet() const { return m_isServiceHasBeenSet; }
    inline void SetIsService(bool value) { m_isServiceHasBeenSet = true; m_isService = value; }
    inline UpdateApplicationRequest& WithIsService(bool value) { SetIsService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum time in milliseconds allowed to establish a connection with the
     * workspace.</p>
     */
    inline int GetInitializationTimeout() const { return m_initializationTimeout; }
    inline bool InitializationTimeoutHasBeenSet() const { return m_initializationTimeoutHasBeenSet; }
    inline void SetInitializationTimeout(int value) { m_initializationTimeoutHasBeenSet = true; m_initializationTimeout = value; }
    inline UpdateApplicationRequest& WithInitializationTimeout(int value) { SetInitializationTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the application.</p>
     */
    inline const ApplicationConfig& GetApplicationConfig() const { return m_applicationConfig; }
    inline bool ApplicationConfigHasBeenSet() const { return m_applicationConfigHasBeenSet; }
    template<typename ApplicationConfigT = ApplicationConfig>
    void SetApplicationConfig(ApplicationConfigT&& value) { m_applicationConfigHasBeenSet = true; m_applicationConfig = std::forward<ApplicationConfigT>(value); }
    template<typename ApplicationConfigT = ApplicationConfig>
    UpdateApplicationRequest& WithApplicationConfig(ApplicationConfigT&& value) { SetApplicationConfig(std::forward<ApplicationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iframe configuration for the application.</p>
     */
    inline const IframeConfig& GetIframeConfig() const { return m_iframeConfig; }
    inline bool IframeConfigHasBeenSet() const { return m_iframeConfigHasBeenSet; }
    template<typename IframeConfigT = IframeConfig>
    void SetIframeConfig(IframeConfigT&& value) { m_iframeConfigHasBeenSet = true; m_iframeConfig = std::forward<IframeConfigT>(value); }
    template<typename IframeConfigT = IframeConfig>
    UpdateApplicationRequest& WithIframeConfig(IframeConfigT&& value) { SetIframeConfig(std::forward<IframeConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationSourceConfig m_applicationSourceConfig;
    bool m_applicationSourceConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;

    bool m_isService{false};
    bool m_isServiceHasBeenSet = false;

    int m_initializationTimeout{0};
    bool m_initializationTimeoutHasBeenSet = false;

    ApplicationConfig m_applicationConfig;
    bool m_applicationConfigHasBeenSet = false;

    IframeConfig m_iframeConfig;
    bool m_iframeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
