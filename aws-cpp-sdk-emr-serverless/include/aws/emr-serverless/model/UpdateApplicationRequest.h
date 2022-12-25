/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/MaximumAllowedResources.h>
#include <aws/emr-serverless/model/AutoStartConfig.h>
#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/Architecture.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application to update.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application to update.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application to update.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application to update.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application to update.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline UpdateApplicationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline UpdateApplicationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client idempotency token of the application to update. Its value must be
     * unique for each request.</p>
     */
    inline UpdateApplicationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline const Aws::Map<Aws::String, InitialCapacityConfig>& GetInitialCapacity() const{ return m_initialCapacity; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline bool InitialCapacityHasBeenSet() const { return m_initialCapacityHasBeenSet; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline void SetInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = value; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline void SetInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = std::move(value); }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& WithInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { SetInitialCapacity(value); return *this;}

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& WithInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { SetInitialCapacity(std::move(value)); return *this;}

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(const Aws::String& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(Aws::String&& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), value); return *this; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(const Aws::String& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(Aws::String&& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(const char* key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The capacity to initialize when the application is updated.</p>
     */
    inline UpdateApplicationRequest& AddInitialCapacity(const char* key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }


    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline const MaximumAllowedResources& GetMaximumCapacity() const{ return m_maximumCapacity; }

    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }

    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline void SetMaximumCapacity(const MaximumAllowedResources& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = value; }

    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline void SetMaximumCapacity(MaximumAllowedResources&& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = std::move(value); }

    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline UpdateApplicationRequest& WithMaximumCapacity(const MaximumAllowedResources& value) { SetMaximumCapacity(value); return *this;}

    /**
     * <p>The maximum capacity to allocate when the application is updated. This is
     * cumulative across all workers at any given point in time during the lifespan of
     * the application. No new resources will be created once any one of the defined
     * limits is hit.</p>
     */
    inline UpdateApplicationRequest& WithMaximumCapacity(MaximumAllowedResources&& value) { SetMaximumCapacity(std::move(value)); return *this;}


    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline const AutoStartConfig& GetAutoStartConfiguration() const{ return m_autoStartConfiguration; }

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline bool AutoStartConfigurationHasBeenSet() const { return m_autoStartConfigurationHasBeenSet; }

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline void SetAutoStartConfiguration(const AutoStartConfig& value) { m_autoStartConfigurationHasBeenSet = true; m_autoStartConfiguration = value; }

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline void SetAutoStartConfiguration(AutoStartConfig&& value) { m_autoStartConfigurationHasBeenSet = true; m_autoStartConfiguration = std::move(value); }

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline UpdateApplicationRequest& WithAutoStartConfiguration(const AutoStartConfig& value) { SetAutoStartConfiguration(value); return *this;}

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline UpdateApplicationRequest& WithAutoStartConfiguration(AutoStartConfig&& value) { SetAutoStartConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline const AutoStopConfig& GetAutoStopConfiguration() const{ return m_autoStopConfiguration; }

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline bool AutoStopConfigurationHasBeenSet() const { return m_autoStopConfigurationHasBeenSet; }

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline void SetAutoStopConfiguration(const AutoStopConfig& value) { m_autoStopConfigurationHasBeenSet = true; m_autoStopConfiguration = value; }

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline void SetAutoStopConfiguration(AutoStopConfig&& value) { m_autoStopConfigurationHasBeenSet = true; m_autoStopConfiguration = std::move(value); }

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline UpdateApplicationRequest& WithAutoStopConfiguration(const AutoStopConfig& value) { SetAutoStopConfiguration(value); return *this;}

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline UpdateApplicationRequest& WithAutoStopConfiguration(AutoStopConfig&& value) { SetAutoStopConfiguration(std::move(value)); return *this;}


    
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    
    inline UpdateApplicationRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    
    inline UpdateApplicationRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline UpdateApplicationRequest& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline UpdateApplicationRequest& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, InitialCapacityConfig> m_initialCapacity;
    bool m_initialCapacityHasBeenSet = false;

    MaximumAllowedResources m_maximumCapacity;
    bool m_maximumCapacityHasBeenSet = false;

    AutoStartConfig m_autoStartConfiguration;
    bool m_autoStartConfigurationHasBeenSet = false;

    AutoStopConfig m_autoStopConfiguration;
    bool m_autoStopConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
