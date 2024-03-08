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
#include <aws/emr-serverless/model/ImageConfigurationInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/emr-serverless/model/WorkerTypeSpecificationInput.h>
#include <aws/emr-serverless/model/Configuration.h>
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


    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline const ImageConfigurationInput& GetImageConfiguration() const{ return m_imageConfiguration; }

    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }

    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline void SetImageConfiguration(const ImageConfigurationInput& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }

    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline void SetImageConfiguration(ImageConfigurationInput&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }

    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline UpdateApplicationRequest& WithImageConfiguration(const ImageConfigurationInput& value) { SetImageConfiguration(value); return *this;}

    /**
     * <p>The image configuration to be used for all worker types. You can either set
     * this parameter or <code>imageConfiguration</code> for each worker type in
     * <code>WorkerTypeSpecificationInput</code>.</p>
     */
    inline UpdateApplicationRequest& WithImageConfiguration(ImageConfigurationInput&& value) { SetImageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& GetWorkerTypeSpecifications() const{ return m_workerTypeSpecifications; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline bool WorkerTypeSpecificationsHasBeenSet() const { return m_workerTypeSpecificationsHasBeenSet; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline void SetWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = value; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline void SetWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecificationInput>&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = std::move(value); }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& WithWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecificationInput>& value) { SetWorkerTypeSpecifications(value); return *this;}

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& WithWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecificationInput>&& value) { SetWorkerTypeSpecifications(std::move(value)); return *this;}

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(const Aws::String& key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(Aws::String&& key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(const Aws::String& key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(Aws::String&& key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(const char* key, WorkerTypeSpecificationInput&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pairs that specify worker type to
     * <code>WorkerTypeSpecificationInput</code>. This parameter must contain all valid
     * worker types for a Spark or Hive application. Valid worker types include
     * <code>Driver</code> and <code>Executor</code> for Spark applications and
     * <code>HiveDriver</code> and <code>TezTask</code> for Hive applications. You can
     * either set image details in this parameter for each worker type, or in
     * <code>imageConfiguration</code> for all worker types.</p>
     */
    inline UpdateApplicationRequest& AddWorkerTypeSpecifications(const char* key, const WorkerTypeSpecificationInput& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }


    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline UpdateApplicationRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline UpdateApplicationRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR release label for the application. You can change the release
     * label to use a different release of Amazon EMR.</p>
     */
    inline UpdateApplicationRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline void SetRuntimeConfiguration(const Aws::Vector<Configuration>& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline void SetRuntimeConfiguration(Aws::Vector<Configuration>&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline UpdateApplicationRequest& WithRuntimeConfiguration(const Aws::Vector<Configuration>& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline UpdateApplicationRequest& WithRuntimeConfiguration(Aws::Vector<Configuration>&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline UpdateApplicationRequest& AddRuntimeConfiguration(const Configuration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(value); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications to use when updating an application. Each configuration consists
     * of a classification and properties. This configuration is applied across all the
     * job runs submitted under the application.</p>
     */
    inline UpdateApplicationRequest& AddRuntimeConfiguration(Configuration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }

    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }

    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline void SetMonitoringConfiguration(const MonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }

    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline void SetMonitoringConfiguration(MonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }

    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline UpdateApplicationRequest& WithMonitoringConfiguration(const MonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}

    /**
     * <p>The configuration setting for monitoring.</p>
     */
    inline UpdateApplicationRequest& WithMonitoringConfiguration(MonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}

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

    ImageConfigurationInput m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, WorkerTypeSpecificationInput> m_workerTypeSpecifications;
    bool m_workerTypeSpecificationsHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::Vector<Configuration> m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
