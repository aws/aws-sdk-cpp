﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/ApplicationState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/MaximumAllowedResources.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/AutoStartConfig.h>
#include <aws/emr-serverless/model/AutoStopConfig.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
#include <aws/emr-serverless/model/Architecture.h>
#include <aws/emr-serverless/model/ImageConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/MonitoringConfiguration.h>
#include <aws/emr-serverless/model/InitialCapacityConfig.h>
#include <aws/emr-serverless/model/WorkerTypeSpecification.h>
#include <aws/emr-serverless/model/Configuration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>Information about an application. Amazon EMR Serverless uses applications to
   * run jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_EMRSERVERLESS_API Application();
    AWS_EMRSERVERLESS_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline Application& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline Application& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The Amazon EMR release associated with the application.</p>
     */
    inline Application& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline Application& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline Application& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of application, such as Spark or Hive.</p>
     */
    inline Application& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The state of the application.</p>
     */
    inline const ApplicationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the application.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the application.</p>
     */
    inline void SetState(const ApplicationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the application.</p>
     */
    inline void SetState(ApplicationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the application.</p>
     */
    inline Application& WithState(const ApplicationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the application.</p>
     */
    inline Application& WithState(ApplicationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The state details of the application.</p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }

    /**
     * <p>The state details of the application.</p>
     */
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }

    /**
     * <p>The state details of the application.</p>
     */
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }

    /**
     * <p>The state details of the application.</p>
     */
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }

    /**
     * <p>The state details of the application.</p>
     */
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }

    /**
     * <p>The state details of the application.</p>
     */
    inline Application& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}

    /**
     * <p>The state details of the application.</p>
     */
    inline Application& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}

    /**
     * <p>The state details of the application.</p>
     */
    inline Application& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}


    /**
     * <p>The initial capacity of the application.</p>
     */
    inline const Aws::Map<Aws::String, InitialCapacityConfig>& GetInitialCapacity() const{ return m_initialCapacity; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline bool InitialCapacityHasBeenSet() const { return m_initialCapacityHasBeenSet; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline void SetInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = value; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline void SetInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity = std::move(value); }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& WithInitialCapacity(const Aws::Map<Aws::String, InitialCapacityConfig>& value) { SetInitialCapacity(value); return *this;}

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& WithInitialCapacity(Aws::Map<Aws::String, InitialCapacityConfig>&& value) { SetInitialCapacity(std::move(value)); return *this;}

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(const Aws::String& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(Aws::String&& key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), value); return *this; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(const Aws::String& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(Aws::String&& key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(const char* key, InitialCapacityConfig&& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The initial capacity of the application.</p>
     */
    inline Application& AddInitialCapacity(const char* key, const InitialCapacityConfig& value) { m_initialCapacityHasBeenSet = true; m_initialCapacity.emplace(key, value); return *this; }


    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline const MaximumAllowedResources& GetMaximumCapacity() const{ return m_maximumCapacity; }

    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline bool MaximumCapacityHasBeenSet() const { return m_maximumCapacityHasBeenSet; }

    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline void SetMaximumCapacity(const MaximumAllowedResources& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = value; }

    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline void SetMaximumCapacity(MaximumAllowedResources&& value) { m_maximumCapacityHasBeenSet = true; m_maximumCapacity = std::move(value); }

    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline Application& WithMaximumCapacity(const MaximumAllowedResources& value) { SetMaximumCapacity(value); return *this;}

    /**
     * <p>The maximum capacity of the application. This is cumulative across all
     * workers at any given point in time during the lifespan of the application is
     * created. No new resources will be created once any one of the defined limits is
     * hit.</p>
     */
    inline Application& WithMaximumCapacity(MaximumAllowedResources&& value) { SetMaximumCapacity(std::move(value)); return *this;}


    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline Application& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the application run was created.</p>
     */
    inline Application& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline Application& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the application run was last updated.</p>
     */
    inline Application& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the application.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the application.</p>
     */
    inline Application& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline Application& WithAutoStartConfiguration(const AutoStartConfig& value) { SetAutoStartConfiguration(value); return *this;}

    /**
     * <p>The configuration for an application to automatically start on job
     * submission.</p>
     */
    inline Application& WithAutoStartConfiguration(AutoStartConfig&& value) { SetAutoStartConfiguration(std::move(value)); return *this;}


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
    inline Application& WithAutoStopConfiguration(const AutoStopConfig& value) { SetAutoStopConfiguration(value); return *this;}

    /**
     * <p>The configuration for an application to automatically stop after a certain
     * amount of time being idle.</p>
     */
    inline Application& WithAutoStopConfiguration(AutoStopConfig&& value) { SetAutoStopConfiguration(std::move(value)); return *this;}


    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline Application& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    /**
     * <p>The network configuration for customer VPC connectivity for the
     * application.</p>
     */
    inline Application& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


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
    inline Application& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The CPU architecture of an application.</p>
     */
    inline Application& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline const ImageConfiguration& GetImageConfiguration() const{ return m_imageConfiguration; }

    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline bool ImageConfigurationHasBeenSet() const { return m_imageConfigurationHasBeenSet; }

    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline void SetImageConfiguration(const ImageConfiguration& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = value; }

    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline void SetImageConfiguration(ImageConfiguration&& value) { m_imageConfigurationHasBeenSet = true; m_imageConfiguration = std::move(value); }

    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline Application& WithImageConfiguration(const ImageConfiguration& value) { SetImageConfiguration(value); return *this;}

    /**
     * <p>The image configuration applied to all worker types.</p>
     */
    inline Application& WithImageConfiguration(ImageConfiguration&& value) { SetImageConfiguration(std::move(value)); return *this;}


    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline const Aws::Map<Aws::String, WorkerTypeSpecification>& GetWorkerTypeSpecifications() const{ return m_workerTypeSpecifications; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline bool WorkerTypeSpecificationsHasBeenSet() const { return m_workerTypeSpecificationsHasBeenSet; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline void SetWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecification>& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = value; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline void SetWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecification>&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications = std::move(value); }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& WithWorkerTypeSpecifications(const Aws::Map<Aws::String, WorkerTypeSpecification>& value) { SetWorkerTypeSpecifications(value); return *this;}

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& WithWorkerTypeSpecifications(Aws::Map<Aws::String, WorkerTypeSpecification>&& value) { SetWorkerTypeSpecifications(std::move(value)); return *this;}

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(const Aws::String& key, const WorkerTypeSpecification& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(Aws::String&& key, const WorkerTypeSpecification& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(const Aws::String& key, WorkerTypeSpecification&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(Aws::String&& key, WorkerTypeSpecification&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(const char* key, WorkerTypeSpecification&& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The specification applied to each worker type.</p>
     */
    inline Application& AddWorkerTypeSpecifications(const char* key, const WorkerTypeSpecification& value) { m_workerTypeSpecificationsHasBeenSet = true; m_workerTypeSpecifications.emplace(key, value); return *this; }


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const{ return m_runtimeConfiguration; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline void SetRuntimeConfiguration(const Aws::Vector<Configuration>& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline void SetRuntimeConfiguration(Aws::Vector<Configuration>&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline Application& WithRuntimeConfiguration(const Aws::Vector<Configuration>& value) { SetRuntimeConfiguration(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline Application& WithRuntimeConfiguration(Aws::Vector<Configuration>&& value) { SetRuntimeConfiguration(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline Application& AddRuntimeConfiguration(const Configuration& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(value); return *this; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_Configuration.html">Configuration</a>
     * specifications of an application. Each configuration consists of a
     * classification and properties. You use this parameter when creating or updating
     * an application. To see the runtimeConfiguration object of an application, run
     * the <a
     * href="https://docs.aws.amazon.com/emr-serverless/latest/APIReference/API_GetApplication.html">GetApplication</a>
     * API operation.</p>
     */
    inline Application& AddRuntimeConfiguration(Configuration&& value) { m_runtimeConfigurationHasBeenSet = true; m_runtimeConfiguration.push_back(std::move(value)); return *this; }


    
    inline const MonitoringConfiguration& GetMonitoringConfiguration() const{ return m_monitoringConfiguration; }

    
    inline bool MonitoringConfigurationHasBeenSet() const { return m_monitoringConfigurationHasBeenSet; }

    
    inline void SetMonitoringConfiguration(const MonitoringConfiguration& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = value; }

    
    inline void SetMonitoringConfiguration(MonitoringConfiguration&& value) { m_monitoringConfigurationHasBeenSet = true; m_monitoringConfiguration = std::move(value); }

    
    inline Application& WithMonitoringConfiguration(const MonitoringConfiguration& value) { SetMonitoringConfiguration(value); return *this;}

    
    inline Application& WithMonitoringConfiguration(MonitoringConfiguration&& value) { SetMonitoringConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    ApplicationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::Map<Aws::String, InitialCapacityConfig> m_initialCapacity;
    bool m_initialCapacityHasBeenSet = false;

    MaximumAllowedResources m_maximumCapacity;
    bool m_maximumCapacityHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AutoStartConfig m_autoStartConfiguration;
    bool m_autoStartConfigurationHasBeenSet = false;

    AutoStopConfig m_autoStopConfiguration;
    bool m_autoStopConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;

    ImageConfiguration m_imageConfiguration;
    bool m_imageConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, WorkerTypeSpecification> m_workerTypeSpecifications;
    bool m_workerTypeSpecificationsHasBeenSet = false;

    Aws::Vector<Configuration> m_runtimeConfiguration;
    bool m_runtimeConfigurationHasBeenSet = false;

    MonitoringConfiguration m_monitoringConfiguration;
    bool m_monitoringConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
