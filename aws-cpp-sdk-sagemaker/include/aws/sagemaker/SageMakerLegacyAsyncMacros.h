/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddAssociationAsync(...)  SubmitAsync(&SageMakerClient::AddAssociation, __VA_ARGS__)
#define AddAssociationCallable(REQUEST)  SubmitCallable(&SageMakerClient::AddAssociation, REQUEST)

#define AddTagsAsync(...)  SubmitAsync(&SageMakerClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&SageMakerClient::AddTags, REQUEST)

#define AssociateTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::AssociateTrialComponent, __VA_ARGS__)
#define AssociateTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::AssociateTrialComponent, REQUEST)

#define BatchDescribeModelPackageAsync(...)  SubmitAsync(&SageMakerClient::BatchDescribeModelPackage, __VA_ARGS__)
#define BatchDescribeModelPackageCallable(REQUEST)  SubmitCallable(&SageMakerClient::BatchDescribeModelPackage, REQUEST)

#define CreateActionAsync(...)  SubmitAsync(&SageMakerClient::CreateAction, __VA_ARGS__)
#define CreateActionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateAction, REQUEST)

#define CreateAlgorithmAsync(...)  SubmitAsync(&SageMakerClient::CreateAlgorithm, __VA_ARGS__)
#define CreateAlgorithmCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateAlgorithm, REQUEST)

#define CreateAppAsync(...)  SubmitAsync(&SageMakerClient::CreateApp, __VA_ARGS__)
#define CreateAppCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateApp, REQUEST)

#define CreateAppImageConfigAsync(...)  SubmitAsync(&SageMakerClient::CreateAppImageConfig, __VA_ARGS__)
#define CreateAppImageConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateAppImageConfig, REQUEST)

#define CreateArtifactAsync(...)  SubmitAsync(&SageMakerClient::CreateArtifact, __VA_ARGS__)
#define CreateArtifactCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateArtifact, REQUEST)

#define CreateAutoMLJobAsync(...)  SubmitAsync(&SageMakerClient::CreateAutoMLJob, __VA_ARGS__)
#define CreateAutoMLJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateAutoMLJob, REQUEST)

#define CreateCodeRepositoryAsync(...)  SubmitAsync(&SageMakerClient::CreateCodeRepository, __VA_ARGS__)
#define CreateCodeRepositoryCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateCodeRepository, REQUEST)

#define CreateCompilationJobAsync(...)  SubmitAsync(&SageMakerClient::CreateCompilationJob, __VA_ARGS__)
#define CreateCompilationJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateCompilationJob, REQUEST)

#define CreateContextAsync(...)  SubmitAsync(&SageMakerClient::CreateContext, __VA_ARGS__)
#define CreateContextCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateContext, REQUEST)

#define CreateDataQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::CreateDataQualityJobDefinition, __VA_ARGS__)
#define CreateDataQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateDataQualityJobDefinition, REQUEST)

#define CreateDeviceFleetAsync(...)  SubmitAsync(&SageMakerClient::CreateDeviceFleet, __VA_ARGS__)
#define CreateDeviceFleetCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateDeviceFleet, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&SageMakerClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateDomain, REQUEST)

#define CreateEdgeDeploymentPlanAsync(...)  SubmitAsync(&SageMakerClient::CreateEdgeDeploymentPlan, __VA_ARGS__)
#define CreateEdgeDeploymentPlanCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateEdgeDeploymentPlan, REQUEST)

#define CreateEdgeDeploymentStageAsync(...)  SubmitAsync(&SageMakerClient::CreateEdgeDeploymentStage, __VA_ARGS__)
#define CreateEdgeDeploymentStageCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateEdgeDeploymentStage, REQUEST)

#define CreateEdgePackagingJobAsync(...)  SubmitAsync(&SageMakerClient::CreateEdgePackagingJob, __VA_ARGS__)
#define CreateEdgePackagingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateEdgePackagingJob, REQUEST)

#define CreateEndpointAsync(...)  SubmitAsync(&SageMakerClient::CreateEndpoint, __VA_ARGS__)
#define CreateEndpointCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateEndpoint, REQUEST)

#define CreateEndpointConfigAsync(...)  SubmitAsync(&SageMakerClient::CreateEndpointConfig, __VA_ARGS__)
#define CreateEndpointConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateEndpointConfig, REQUEST)

#define CreateExperimentAsync(...)  SubmitAsync(&SageMakerClient::CreateExperiment, __VA_ARGS__)
#define CreateExperimentCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateExperiment, REQUEST)

#define CreateFeatureGroupAsync(...)  SubmitAsync(&SageMakerClient::CreateFeatureGroup, __VA_ARGS__)
#define CreateFeatureGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateFeatureGroup, REQUEST)

#define CreateFlowDefinitionAsync(...)  SubmitAsync(&SageMakerClient::CreateFlowDefinition, __VA_ARGS__)
#define CreateFlowDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateFlowDefinition, REQUEST)

#define CreateHumanTaskUiAsync(...)  SubmitAsync(&SageMakerClient::CreateHumanTaskUi, __VA_ARGS__)
#define CreateHumanTaskUiCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateHumanTaskUi, REQUEST)

#define CreateHyperParameterTuningJobAsync(...)  SubmitAsync(&SageMakerClient::CreateHyperParameterTuningJob, __VA_ARGS__)
#define CreateHyperParameterTuningJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateHyperParameterTuningJob, REQUEST)

#define CreateImageAsync(...)  SubmitAsync(&SageMakerClient::CreateImage, __VA_ARGS__)
#define CreateImageCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateImage, REQUEST)

#define CreateImageVersionAsync(...)  SubmitAsync(&SageMakerClient::CreateImageVersion, __VA_ARGS__)
#define CreateImageVersionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateImageVersion, REQUEST)

#define CreateInferenceRecommendationsJobAsync(...)  SubmitAsync(&SageMakerClient::CreateInferenceRecommendationsJob, __VA_ARGS__)
#define CreateInferenceRecommendationsJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateInferenceRecommendationsJob, REQUEST)

#define CreateLabelingJobAsync(...)  SubmitAsync(&SageMakerClient::CreateLabelingJob, __VA_ARGS__)
#define CreateLabelingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateLabelingJob, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&SageMakerClient::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModel, REQUEST)

#define CreateModelBiasJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::CreateModelBiasJobDefinition, __VA_ARGS__)
#define CreateModelBiasJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModelBiasJobDefinition, REQUEST)

#define CreateModelExplainabilityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::CreateModelExplainabilityJobDefinition, __VA_ARGS__)
#define CreateModelExplainabilityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModelExplainabilityJobDefinition, REQUEST)

#define CreateModelPackageAsync(...)  SubmitAsync(&SageMakerClient::CreateModelPackage, __VA_ARGS__)
#define CreateModelPackageCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModelPackage, REQUEST)

#define CreateModelPackageGroupAsync(...)  SubmitAsync(&SageMakerClient::CreateModelPackageGroup, __VA_ARGS__)
#define CreateModelPackageGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModelPackageGroup, REQUEST)

#define CreateModelQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::CreateModelQualityJobDefinition, __VA_ARGS__)
#define CreateModelQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateModelQualityJobDefinition, REQUEST)

#define CreateMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::CreateMonitoringSchedule, __VA_ARGS__)
#define CreateMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateMonitoringSchedule, REQUEST)

#define CreateNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::CreateNotebookInstance, __VA_ARGS__)
#define CreateNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateNotebookInstance, REQUEST)

#define CreateNotebookInstanceLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::CreateNotebookInstanceLifecycleConfig, __VA_ARGS__)
#define CreateNotebookInstanceLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateNotebookInstanceLifecycleConfig, REQUEST)

#define CreatePipelineAsync(...)  SubmitAsync(&SageMakerClient::CreatePipeline, __VA_ARGS__)
#define CreatePipelineCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreatePipeline, REQUEST)

#define CreatePresignedDomainUrlAsync(...)  SubmitAsync(&SageMakerClient::CreatePresignedDomainUrl, __VA_ARGS__)
#define CreatePresignedDomainUrlCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreatePresignedDomainUrl, REQUEST)

#define CreatePresignedNotebookInstanceUrlAsync(...)  SubmitAsync(&SageMakerClient::CreatePresignedNotebookInstanceUrl, __VA_ARGS__)
#define CreatePresignedNotebookInstanceUrlCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreatePresignedNotebookInstanceUrl, REQUEST)

#define CreateProcessingJobAsync(...)  SubmitAsync(&SageMakerClient::CreateProcessingJob, __VA_ARGS__)
#define CreateProcessingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateProcessingJob, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&SageMakerClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateProject, REQUEST)

#define CreateStudioLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::CreateStudioLifecycleConfig, __VA_ARGS__)
#define CreateStudioLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateStudioLifecycleConfig, REQUEST)

#define CreateTrainingJobAsync(...)  SubmitAsync(&SageMakerClient::CreateTrainingJob, __VA_ARGS__)
#define CreateTrainingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateTrainingJob, REQUEST)

#define CreateTransformJobAsync(...)  SubmitAsync(&SageMakerClient::CreateTransformJob, __VA_ARGS__)
#define CreateTransformJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateTransformJob, REQUEST)

#define CreateTrialAsync(...)  SubmitAsync(&SageMakerClient::CreateTrial, __VA_ARGS__)
#define CreateTrialCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateTrial, REQUEST)

#define CreateTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::CreateTrialComponent, __VA_ARGS__)
#define CreateTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateTrialComponent, REQUEST)

#define CreateUserProfileAsync(...)  SubmitAsync(&SageMakerClient::CreateUserProfile, __VA_ARGS__)
#define CreateUserProfileCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateUserProfile, REQUEST)

#define CreateWorkforceAsync(...)  SubmitAsync(&SageMakerClient::CreateWorkforce, __VA_ARGS__)
#define CreateWorkforceCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateWorkforce, REQUEST)

#define CreateWorkteamAsync(...)  SubmitAsync(&SageMakerClient::CreateWorkteam, __VA_ARGS__)
#define CreateWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::CreateWorkteam, REQUEST)

#define DeleteActionAsync(...)  SubmitAsync(&SageMakerClient::DeleteAction, __VA_ARGS__)
#define DeleteActionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteAction, REQUEST)

#define DeleteAlgorithmAsync(...)  SubmitAsync(&SageMakerClient::DeleteAlgorithm, __VA_ARGS__)
#define DeleteAlgorithmCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteAlgorithm, REQUEST)

#define DeleteAppAsync(...)  SubmitAsync(&SageMakerClient::DeleteApp, __VA_ARGS__)
#define DeleteAppCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteApp, REQUEST)

#define DeleteAppImageConfigAsync(...)  SubmitAsync(&SageMakerClient::DeleteAppImageConfig, __VA_ARGS__)
#define DeleteAppImageConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteAppImageConfig, REQUEST)

#define DeleteArtifactAsync(...)  SubmitAsync(&SageMakerClient::DeleteArtifact, __VA_ARGS__)
#define DeleteArtifactCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteArtifact, REQUEST)

#define DeleteAssociationAsync(...)  SubmitAsync(&SageMakerClient::DeleteAssociation, __VA_ARGS__)
#define DeleteAssociationCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteAssociation, REQUEST)

#define DeleteCodeRepositoryAsync(...)  SubmitAsync(&SageMakerClient::DeleteCodeRepository, __VA_ARGS__)
#define DeleteCodeRepositoryCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteCodeRepository, REQUEST)

#define DeleteContextAsync(...)  SubmitAsync(&SageMakerClient::DeleteContext, __VA_ARGS__)
#define DeleteContextCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteContext, REQUEST)

#define DeleteDataQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DeleteDataQualityJobDefinition, __VA_ARGS__)
#define DeleteDataQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteDataQualityJobDefinition, REQUEST)

#define DeleteDeviceFleetAsync(...)  SubmitAsync(&SageMakerClient::DeleteDeviceFleet, __VA_ARGS__)
#define DeleteDeviceFleetCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteDeviceFleet, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&SageMakerClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteDomain, REQUEST)

#define DeleteEdgeDeploymentPlanAsync(...)  SubmitAsync(&SageMakerClient::DeleteEdgeDeploymentPlan, __VA_ARGS__)
#define DeleteEdgeDeploymentPlanCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteEdgeDeploymentPlan, REQUEST)

#define DeleteEdgeDeploymentStageAsync(...)  SubmitAsync(&SageMakerClient::DeleteEdgeDeploymentStage, __VA_ARGS__)
#define DeleteEdgeDeploymentStageCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteEdgeDeploymentStage, REQUEST)

#define DeleteEndpointAsync(...)  SubmitAsync(&SageMakerClient::DeleteEndpoint, __VA_ARGS__)
#define DeleteEndpointCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteEndpoint, REQUEST)

#define DeleteEndpointConfigAsync(...)  SubmitAsync(&SageMakerClient::DeleteEndpointConfig, __VA_ARGS__)
#define DeleteEndpointConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteEndpointConfig, REQUEST)

#define DeleteExperimentAsync(...)  SubmitAsync(&SageMakerClient::DeleteExperiment, __VA_ARGS__)
#define DeleteExperimentCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteExperiment, REQUEST)

#define DeleteFeatureGroupAsync(...)  SubmitAsync(&SageMakerClient::DeleteFeatureGroup, __VA_ARGS__)
#define DeleteFeatureGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteFeatureGroup, REQUEST)

#define DeleteFlowDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DeleteFlowDefinition, __VA_ARGS__)
#define DeleteFlowDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteFlowDefinition, REQUEST)

#define DeleteHumanTaskUiAsync(...)  SubmitAsync(&SageMakerClient::DeleteHumanTaskUi, __VA_ARGS__)
#define DeleteHumanTaskUiCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteHumanTaskUi, REQUEST)

#define DeleteImageAsync(...)  SubmitAsync(&SageMakerClient::DeleteImage, __VA_ARGS__)
#define DeleteImageCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteImage, REQUEST)

#define DeleteImageVersionAsync(...)  SubmitAsync(&SageMakerClient::DeleteImageVersion, __VA_ARGS__)
#define DeleteImageVersionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteImageVersion, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&SageMakerClient::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModel, REQUEST)

#define DeleteModelBiasJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelBiasJobDefinition, __VA_ARGS__)
#define DeleteModelBiasJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelBiasJobDefinition, REQUEST)

#define DeleteModelExplainabilityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelExplainabilityJobDefinition, __VA_ARGS__)
#define DeleteModelExplainabilityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelExplainabilityJobDefinition, REQUEST)

#define DeleteModelPackageAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelPackage, __VA_ARGS__)
#define DeleteModelPackageCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelPackage, REQUEST)

#define DeleteModelPackageGroupAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelPackageGroup, __VA_ARGS__)
#define DeleteModelPackageGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelPackageGroup, REQUEST)

#define DeleteModelPackageGroupPolicyAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelPackageGroupPolicy, __VA_ARGS__)
#define DeleteModelPackageGroupPolicyCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelPackageGroupPolicy, REQUEST)

#define DeleteModelQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DeleteModelQualityJobDefinition, __VA_ARGS__)
#define DeleteModelQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteModelQualityJobDefinition, REQUEST)

#define DeleteMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::DeleteMonitoringSchedule, __VA_ARGS__)
#define DeleteMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteMonitoringSchedule, REQUEST)

#define DeleteNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::DeleteNotebookInstance, __VA_ARGS__)
#define DeleteNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteNotebookInstance, REQUEST)

#define DeleteNotebookInstanceLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::DeleteNotebookInstanceLifecycleConfig, __VA_ARGS__)
#define DeleteNotebookInstanceLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteNotebookInstanceLifecycleConfig, REQUEST)

#define DeletePipelineAsync(...)  SubmitAsync(&SageMakerClient::DeletePipeline, __VA_ARGS__)
#define DeletePipelineCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeletePipeline, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&SageMakerClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteProject, REQUEST)

#define DeleteStudioLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::DeleteStudioLifecycleConfig, __VA_ARGS__)
#define DeleteStudioLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteStudioLifecycleConfig, REQUEST)

#define DeleteTagsAsync(...)  SubmitAsync(&SageMakerClient::DeleteTags, __VA_ARGS__)
#define DeleteTagsCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteTags, REQUEST)

#define DeleteTrialAsync(...)  SubmitAsync(&SageMakerClient::DeleteTrial, __VA_ARGS__)
#define DeleteTrialCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteTrial, REQUEST)

#define DeleteTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::DeleteTrialComponent, __VA_ARGS__)
#define DeleteTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteTrialComponent, REQUEST)

#define DeleteUserProfileAsync(...)  SubmitAsync(&SageMakerClient::DeleteUserProfile, __VA_ARGS__)
#define DeleteUserProfileCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteUserProfile, REQUEST)

#define DeleteWorkforceAsync(...)  SubmitAsync(&SageMakerClient::DeleteWorkforce, __VA_ARGS__)
#define DeleteWorkforceCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteWorkforce, REQUEST)

#define DeleteWorkteamAsync(...)  SubmitAsync(&SageMakerClient::DeleteWorkteam, __VA_ARGS__)
#define DeleteWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeleteWorkteam, REQUEST)

#define DeregisterDevicesAsync(...)  SubmitAsync(&SageMakerClient::DeregisterDevices, __VA_ARGS__)
#define DeregisterDevicesCallable(REQUEST)  SubmitCallable(&SageMakerClient::DeregisterDevices, REQUEST)

#define DescribeActionAsync(...)  SubmitAsync(&SageMakerClient::DescribeAction, __VA_ARGS__)
#define DescribeActionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeAction, REQUEST)

#define DescribeAlgorithmAsync(...)  SubmitAsync(&SageMakerClient::DescribeAlgorithm, __VA_ARGS__)
#define DescribeAlgorithmCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeAlgorithm, REQUEST)

#define DescribeAppAsync(...)  SubmitAsync(&SageMakerClient::DescribeApp, __VA_ARGS__)
#define DescribeAppCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeApp, REQUEST)

#define DescribeAppImageConfigAsync(...)  SubmitAsync(&SageMakerClient::DescribeAppImageConfig, __VA_ARGS__)
#define DescribeAppImageConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeAppImageConfig, REQUEST)

#define DescribeArtifactAsync(...)  SubmitAsync(&SageMakerClient::DescribeArtifact, __VA_ARGS__)
#define DescribeArtifactCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeArtifact, REQUEST)

#define DescribeAutoMLJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeAutoMLJob, __VA_ARGS__)
#define DescribeAutoMLJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeAutoMLJob, REQUEST)

#define DescribeCodeRepositoryAsync(...)  SubmitAsync(&SageMakerClient::DescribeCodeRepository, __VA_ARGS__)
#define DescribeCodeRepositoryCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeCodeRepository, REQUEST)

#define DescribeCompilationJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeCompilationJob, __VA_ARGS__)
#define DescribeCompilationJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeCompilationJob, REQUEST)

#define DescribeContextAsync(...)  SubmitAsync(&SageMakerClient::DescribeContext, __VA_ARGS__)
#define DescribeContextCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeContext, REQUEST)

#define DescribeDataQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DescribeDataQualityJobDefinition, __VA_ARGS__)
#define DescribeDataQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeDataQualityJobDefinition, REQUEST)

#define DescribeDeviceAsync(...)  SubmitAsync(&SageMakerClient::DescribeDevice, __VA_ARGS__)
#define DescribeDeviceCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeDevice, REQUEST)

#define DescribeDeviceFleetAsync(...)  SubmitAsync(&SageMakerClient::DescribeDeviceFleet, __VA_ARGS__)
#define DescribeDeviceFleetCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeDeviceFleet, REQUEST)

#define DescribeDomainAsync(...)  SubmitAsync(&SageMakerClient::DescribeDomain, __VA_ARGS__)
#define DescribeDomainCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeDomain, REQUEST)

#define DescribeEdgeDeploymentPlanAsync(...)  SubmitAsync(&SageMakerClient::DescribeEdgeDeploymentPlan, __VA_ARGS__)
#define DescribeEdgeDeploymentPlanCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeEdgeDeploymentPlan, REQUEST)

#define DescribeEdgePackagingJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeEdgePackagingJob, __VA_ARGS__)
#define DescribeEdgePackagingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeEdgePackagingJob, REQUEST)

#define DescribeEndpointAsync(...)  SubmitAsync(&SageMakerClient::DescribeEndpoint, __VA_ARGS__)
#define DescribeEndpointCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeEndpoint, REQUEST)

#define DescribeEndpointConfigAsync(...)  SubmitAsync(&SageMakerClient::DescribeEndpointConfig, __VA_ARGS__)
#define DescribeEndpointConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeEndpointConfig, REQUEST)

#define DescribeExperimentAsync(...)  SubmitAsync(&SageMakerClient::DescribeExperiment, __VA_ARGS__)
#define DescribeExperimentCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeExperiment, REQUEST)

#define DescribeFeatureGroupAsync(...)  SubmitAsync(&SageMakerClient::DescribeFeatureGroup, __VA_ARGS__)
#define DescribeFeatureGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeFeatureGroup, REQUEST)

#define DescribeFeatureMetadataAsync(...)  SubmitAsync(&SageMakerClient::DescribeFeatureMetadata, __VA_ARGS__)
#define DescribeFeatureMetadataCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeFeatureMetadata, REQUEST)

#define DescribeFlowDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DescribeFlowDefinition, __VA_ARGS__)
#define DescribeFlowDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeFlowDefinition, REQUEST)

#define DescribeHumanTaskUiAsync(...)  SubmitAsync(&SageMakerClient::DescribeHumanTaskUi, __VA_ARGS__)
#define DescribeHumanTaskUiCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeHumanTaskUi, REQUEST)

#define DescribeHyperParameterTuningJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeHyperParameterTuningJob, __VA_ARGS__)
#define DescribeHyperParameterTuningJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeHyperParameterTuningJob, REQUEST)

#define DescribeImageAsync(...)  SubmitAsync(&SageMakerClient::DescribeImage, __VA_ARGS__)
#define DescribeImageCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeImage, REQUEST)

#define DescribeImageVersionAsync(...)  SubmitAsync(&SageMakerClient::DescribeImageVersion, __VA_ARGS__)
#define DescribeImageVersionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeImageVersion, REQUEST)

#define DescribeInferenceRecommendationsJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeInferenceRecommendationsJob, __VA_ARGS__)
#define DescribeInferenceRecommendationsJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeInferenceRecommendationsJob, REQUEST)

#define DescribeLabelingJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeLabelingJob, __VA_ARGS__)
#define DescribeLabelingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeLabelingJob, REQUEST)

#define DescribeLineageGroupAsync(...)  SubmitAsync(&SageMakerClient::DescribeLineageGroup, __VA_ARGS__)
#define DescribeLineageGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeLineageGroup, REQUEST)

#define DescribeModelAsync(...)  SubmitAsync(&SageMakerClient::DescribeModel, __VA_ARGS__)
#define DescribeModelCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModel, REQUEST)

#define DescribeModelBiasJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DescribeModelBiasJobDefinition, __VA_ARGS__)
#define DescribeModelBiasJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModelBiasJobDefinition, REQUEST)

#define DescribeModelExplainabilityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DescribeModelExplainabilityJobDefinition, __VA_ARGS__)
#define DescribeModelExplainabilityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModelExplainabilityJobDefinition, REQUEST)

#define DescribeModelPackageAsync(...)  SubmitAsync(&SageMakerClient::DescribeModelPackage, __VA_ARGS__)
#define DescribeModelPackageCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModelPackage, REQUEST)

#define DescribeModelPackageGroupAsync(...)  SubmitAsync(&SageMakerClient::DescribeModelPackageGroup, __VA_ARGS__)
#define DescribeModelPackageGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModelPackageGroup, REQUEST)

#define DescribeModelQualityJobDefinitionAsync(...)  SubmitAsync(&SageMakerClient::DescribeModelQualityJobDefinition, __VA_ARGS__)
#define DescribeModelQualityJobDefinitionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeModelQualityJobDefinition, REQUEST)

#define DescribeMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::DescribeMonitoringSchedule, __VA_ARGS__)
#define DescribeMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeMonitoringSchedule, REQUEST)

#define DescribeNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::DescribeNotebookInstance, __VA_ARGS__)
#define DescribeNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeNotebookInstance, REQUEST)

#define DescribeNotebookInstanceLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::DescribeNotebookInstanceLifecycleConfig, __VA_ARGS__)
#define DescribeNotebookInstanceLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeNotebookInstanceLifecycleConfig, REQUEST)

#define DescribePipelineAsync(...)  SubmitAsync(&SageMakerClient::DescribePipeline, __VA_ARGS__)
#define DescribePipelineCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribePipeline, REQUEST)

#define DescribePipelineDefinitionForExecutionAsync(...)  SubmitAsync(&SageMakerClient::DescribePipelineDefinitionForExecution, __VA_ARGS__)
#define DescribePipelineDefinitionForExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribePipelineDefinitionForExecution, REQUEST)

#define DescribePipelineExecutionAsync(...)  SubmitAsync(&SageMakerClient::DescribePipelineExecution, __VA_ARGS__)
#define DescribePipelineExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribePipelineExecution, REQUEST)

#define DescribeProcessingJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeProcessingJob, __VA_ARGS__)
#define DescribeProcessingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeProcessingJob, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&SageMakerClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeProject, REQUEST)

#define DescribeStudioLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::DescribeStudioLifecycleConfig, __VA_ARGS__)
#define DescribeStudioLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeStudioLifecycleConfig, REQUEST)

#define DescribeSubscribedWorkteamAsync(...)  SubmitAsync(&SageMakerClient::DescribeSubscribedWorkteam, __VA_ARGS__)
#define DescribeSubscribedWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeSubscribedWorkteam, REQUEST)

#define DescribeTrainingJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeTrainingJob, __VA_ARGS__)
#define DescribeTrainingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeTrainingJob, REQUEST)

#define DescribeTransformJobAsync(...)  SubmitAsync(&SageMakerClient::DescribeTransformJob, __VA_ARGS__)
#define DescribeTransformJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeTransformJob, REQUEST)

#define DescribeTrialAsync(...)  SubmitAsync(&SageMakerClient::DescribeTrial, __VA_ARGS__)
#define DescribeTrialCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeTrial, REQUEST)

#define DescribeTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::DescribeTrialComponent, __VA_ARGS__)
#define DescribeTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeTrialComponent, REQUEST)

#define DescribeUserProfileAsync(...)  SubmitAsync(&SageMakerClient::DescribeUserProfile, __VA_ARGS__)
#define DescribeUserProfileCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeUserProfile, REQUEST)

#define DescribeWorkforceAsync(...)  SubmitAsync(&SageMakerClient::DescribeWorkforce, __VA_ARGS__)
#define DescribeWorkforceCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeWorkforce, REQUEST)

#define DescribeWorkteamAsync(...)  SubmitAsync(&SageMakerClient::DescribeWorkteam, __VA_ARGS__)
#define DescribeWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::DescribeWorkteam, REQUEST)

#define DisableSagemakerServicecatalogPortfolioAsync(...)  SubmitAsync(&SageMakerClient::DisableSagemakerServicecatalogPortfolio, __VA_ARGS__)
#define DisableSagemakerServicecatalogPortfolioCallable(REQUEST)  SubmitCallable(&SageMakerClient::DisableSagemakerServicecatalogPortfolio, REQUEST)

#define DisassociateTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::DisassociateTrialComponent, __VA_ARGS__)
#define DisassociateTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::DisassociateTrialComponent, REQUEST)

#define EnableSagemakerServicecatalogPortfolioAsync(...)  SubmitAsync(&SageMakerClient::EnableSagemakerServicecatalogPortfolio, __VA_ARGS__)
#define EnableSagemakerServicecatalogPortfolioCallable(REQUEST)  SubmitCallable(&SageMakerClient::EnableSagemakerServicecatalogPortfolio, REQUEST)

#define GetDeviceFleetReportAsync(...)  SubmitAsync(&SageMakerClient::GetDeviceFleetReport, __VA_ARGS__)
#define GetDeviceFleetReportCallable(REQUEST)  SubmitCallable(&SageMakerClient::GetDeviceFleetReport, REQUEST)

#define GetLineageGroupPolicyAsync(...)  SubmitAsync(&SageMakerClient::GetLineageGroupPolicy, __VA_ARGS__)
#define GetLineageGroupPolicyCallable(REQUEST)  SubmitCallable(&SageMakerClient::GetLineageGroupPolicy, REQUEST)

#define GetModelPackageGroupPolicyAsync(...)  SubmitAsync(&SageMakerClient::GetModelPackageGroupPolicy, __VA_ARGS__)
#define GetModelPackageGroupPolicyCallable(REQUEST)  SubmitCallable(&SageMakerClient::GetModelPackageGroupPolicy, REQUEST)

#define GetSagemakerServicecatalogPortfolioStatusAsync(...)  SubmitAsync(&SageMakerClient::GetSagemakerServicecatalogPortfolioStatus, __VA_ARGS__)
#define GetSagemakerServicecatalogPortfolioStatusCallable(REQUEST)  SubmitCallable(&SageMakerClient::GetSagemakerServicecatalogPortfolioStatus, REQUEST)

#define GetSearchSuggestionsAsync(...)  SubmitAsync(&SageMakerClient::GetSearchSuggestions, __VA_ARGS__)
#define GetSearchSuggestionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::GetSearchSuggestions, REQUEST)

#define ListActionsAsync(...)  SubmitAsync(&SageMakerClient::ListActions, __VA_ARGS__)
#define ListActionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListActions, REQUEST)

#define ListAlgorithmsAsync(...)  SubmitAsync(&SageMakerClient::ListAlgorithms, __VA_ARGS__)
#define ListAlgorithmsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListAlgorithms, REQUEST)

#define ListAppImageConfigsAsync(...)  SubmitAsync(&SageMakerClient::ListAppImageConfigs, __VA_ARGS__)
#define ListAppImageConfigsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListAppImageConfigs, REQUEST)

#define ListAppsAsync(...)  SubmitAsync(&SageMakerClient::ListApps, __VA_ARGS__)
#define ListAppsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListApps, REQUEST)

#define ListArtifactsAsync(...)  SubmitAsync(&SageMakerClient::ListArtifacts, __VA_ARGS__)
#define ListArtifactsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListArtifacts, REQUEST)

#define ListAssociationsAsync(...)  SubmitAsync(&SageMakerClient::ListAssociations, __VA_ARGS__)
#define ListAssociationsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListAssociations, REQUEST)

#define ListAutoMLJobsAsync(...)  SubmitAsync(&SageMakerClient::ListAutoMLJobs, __VA_ARGS__)
#define ListAutoMLJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListAutoMLJobs, REQUEST)

#define ListCandidatesForAutoMLJobAsync(...)  SubmitAsync(&SageMakerClient::ListCandidatesForAutoMLJob, __VA_ARGS__)
#define ListCandidatesForAutoMLJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListCandidatesForAutoMLJob, REQUEST)

#define ListCodeRepositoriesAsync(...)  SubmitAsync(&SageMakerClient::ListCodeRepositories, __VA_ARGS__)
#define ListCodeRepositoriesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListCodeRepositories, REQUEST)

#define ListCompilationJobsAsync(...)  SubmitAsync(&SageMakerClient::ListCompilationJobs, __VA_ARGS__)
#define ListCompilationJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListCompilationJobs, REQUEST)

#define ListContextsAsync(...)  SubmitAsync(&SageMakerClient::ListContexts, __VA_ARGS__)
#define ListContextsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListContexts, REQUEST)

#define ListDataQualityJobDefinitionsAsync(...)  SubmitAsync(&SageMakerClient::ListDataQualityJobDefinitions, __VA_ARGS__)
#define ListDataQualityJobDefinitionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListDataQualityJobDefinitions, REQUEST)

#define ListDeviceFleetsAsync(...)  SubmitAsync(&SageMakerClient::ListDeviceFleets, __VA_ARGS__)
#define ListDeviceFleetsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListDeviceFleets, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&SageMakerClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListDevices, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&SageMakerClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListDomains, REQUEST)

#define ListEdgeDeploymentPlansAsync(...)  SubmitAsync(&SageMakerClient::ListEdgeDeploymentPlans, __VA_ARGS__)
#define ListEdgeDeploymentPlansCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListEdgeDeploymentPlans, REQUEST)

#define ListEdgePackagingJobsAsync(...)  SubmitAsync(&SageMakerClient::ListEdgePackagingJobs, __VA_ARGS__)
#define ListEdgePackagingJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListEdgePackagingJobs, REQUEST)

#define ListEndpointConfigsAsync(...)  SubmitAsync(&SageMakerClient::ListEndpointConfigs, __VA_ARGS__)
#define ListEndpointConfigsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListEndpointConfigs, REQUEST)

#define ListEndpointsAsync(...)  SubmitAsync(&SageMakerClient::ListEndpoints, __VA_ARGS__)
#define ListEndpointsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListEndpoints, REQUEST)

#define ListExperimentsAsync(...)  SubmitAsync(&SageMakerClient::ListExperiments, __VA_ARGS__)
#define ListExperimentsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListExperiments, REQUEST)

#define ListFeatureGroupsAsync(...)  SubmitAsync(&SageMakerClient::ListFeatureGroups, __VA_ARGS__)
#define ListFeatureGroupsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListFeatureGroups, REQUEST)

#define ListFlowDefinitionsAsync(...)  SubmitAsync(&SageMakerClient::ListFlowDefinitions, __VA_ARGS__)
#define ListFlowDefinitionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListFlowDefinitions, REQUEST)

#define ListHumanTaskUisAsync(...)  SubmitAsync(&SageMakerClient::ListHumanTaskUis, __VA_ARGS__)
#define ListHumanTaskUisCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListHumanTaskUis, REQUEST)

#define ListHyperParameterTuningJobsAsync(...)  SubmitAsync(&SageMakerClient::ListHyperParameterTuningJobs, __VA_ARGS__)
#define ListHyperParameterTuningJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListHyperParameterTuningJobs, REQUEST)

#define ListImageVersionsAsync(...)  SubmitAsync(&SageMakerClient::ListImageVersions, __VA_ARGS__)
#define ListImageVersionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListImageVersions, REQUEST)

#define ListImagesAsync(...)  SubmitAsync(&SageMakerClient::ListImages, __VA_ARGS__)
#define ListImagesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListImages, REQUEST)

#define ListInferenceRecommendationsJobStepsAsync(...)  SubmitAsync(&SageMakerClient::ListInferenceRecommendationsJobSteps, __VA_ARGS__)
#define ListInferenceRecommendationsJobStepsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListInferenceRecommendationsJobSteps, REQUEST)

#define ListInferenceRecommendationsJobsAsync(...)  SubmitAsync(&SageMakerClient::ListInferenceRecommendationsJobs, __VA_ARGS__)
#define ListInferenceRecommendationsJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListInferenceRecommendationsJobs, REQUEST)

#define ListLabelingJobsAsync(...)  SubmitAsync(&SageMakerClient::ListLabelingJobs, __VA_ARGS__)
#define ListLabelingJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListLabelingJobs, REQUEST)

#define ListLabelingJobsForWorkteamAsync(...)  SubmitAsync(&SageMakerClient::ListLabelingJobsForWorkteam, __VA_ARGS__)
#define ListLabelingJobsForWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListLabelingJobsForWorkteam, REQUEST)

#define ListLineageGroupsAsync(...)  SubmitAsync(&SageMakerClient::ListLineageGroups, __VA_ARGS__)
#define ListLineageGroupsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListLineageGroups, REQUEST)

#define ListModelBiasJobDefinitionsAsync(...)  SubmitAsync(&SageMakerClient::ListModelBiasJobDefinitions, __VA_ARGS__)
#define ListModelBiasJobDefinitionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelBiasJobDefinitions, REQUEST)

#define ListModelExplainabilityJobDefinitionsAsync(...)  SubmitAsync(&SageMakerClient::ListModelExplainabilityJobDefinitions, __VA_ARGS__)
#define ListModelExplainabilityJobDefinitionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelExplainabilityJobDefinitions, REQUEST)

#define ListModelMetadataAsync(...)  SubmitAsync(&SageMakerClient::ListModelMetadata, __VA_ARGS__)
#define ListModelMetadataCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelMetadata, REQUEST)

#define ListModelPackageGroupsAsync(...)  SubmitAsync(&SageMakerClient::ListModelPackageGroups, __VA_ARGS__)
#define ListModelPackageGroupsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelPackageGroups, REQUEST)

#define ListModelPackagesAsync(...)  SubmitAsync(&SageMakerClient::ListModelPackages, __VA_ARGS__)
#define ListModelPackagesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelPackages, REQUEST)

#define ListModelQualityJobDefinitionsAsync(...)  SubmitAsync(&SageMakerClient::ListModelQualityJobDefinitions, __VA_ARGS__)
#define ListModelQualityJobDefinitionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModelQualityJobDefinitions, REQUEST)

#define ListModelsAsync(...)  SubmitAsync(&SageMakerClient::ListModels, __VA_ARGS__)
#define ListModelsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListModels, REQUEST)

#define ListMonitoringExecutionsAsync(...)  SubmitAsync(&SageMakerClient::ListMonitoringExecutions, __VA_ARGS__)
#define ListMonitoringExecutionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListMonitoringExecutions, REQUEST)

#define ListMonitoringSchedulesAsync(...)  SubmitAsync(&SageMakerClient::ListMonitoringSchedules, __VA_ARGS__)
#define ListMonitoringSchedulesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListMonitoringSchedules, REQUEST)

#define ListNotebookInstanceLifecycleConfigsAsync(...)  SubmitAsync(&SageMakerClient::ListNotebookInstanceLifecycleConfigs, __VA_ARGS__)
#define ListNotebookInstanceLifecycleConfigsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListNotebookInstanceLifecycleConfigs, REQUEST)

#define ListNotebookInstancesAsync(...)  SubmitAsync(&SageMakerClient::ListNotebookInstances, __VA_ARGS__)
#define ListNotebookInstancesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListNotebookInstances, REQUEST)

#define ListPipelineExecutionStepsAsync(...)  SubmitAsync(&SageMakerClient::ListPipelineExecutionSteps, __VA_ARGS__)
#define ListPipelineExecutionStepsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListPipelineExecutionSteps, REQUEST)

#define ListPipelineExecutionsAsync(...)  SubmitAsync(&SageMakerClient::ListPipelineExecutions, __VA_ARGS__)
#define ListPipelineExecutionsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListPipelineExecutions, REQUEST)

#define ListPipelineParametersForExecutionAsync(...)  SubmitAsync(&SageMakerClient::ListPipelineParametersForExecution, __VA_ARGS__)
#define ListPipelineParametersForExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListPipelineParametersForExecution, REQUEST)

#define ListPipelinesAsync(...)  SubmitAsync(&SageMakerClient::ListPipelines, __VA_ARGS__)
#define ListPipelinesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListPipelines, REQUEST)

#define ListProcessingJobsAsync(...)  SubmitAsync(&SageMakerClient::ListProcessingJobs, __VA_ARGS__)
#define ListProcessingJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListProcessingJobs, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&SageMakerClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListProjects, REQUEST)

#define ListStageDevicesAsync(...)  SubmitAsync(&SageMakerClient::ListStageDevices, __VA_ARGS__)
#define ListStageDevicesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListStageDevices, REQUEST)

#define ListStudioLifecycleConfigsAsync(...)  SubmitAsync(&SageMakerClient::ListStudioLifecycleConfigs, __VA_ARGS__)
#define ListStudioLifecycleConfigsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListStudioLifecycleConfigs, REQUEST)

#define ListSubscribedWorkteamsAsync(...)  SubmitAsync(&SageMakerClient::ListSubscribedWorkteams, __VA_ARGS__)
#define ListSubscribedWorkteamsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListSubscribedWorkteams, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&SageMakerClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTags, REQUEST)

#define ListTrainingJobsAsync(...)  SubmitAsync(&SageMakerClient::ListTrainingJobs, __VA_ARGS__)
#define ListTrainingJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTrainingJobs, REQUEST)

#define ListTrainingJobsForHyperParameterTuningJobAsync(...)  SubmitAsync(&SageMakerClient::ListTrainingJobsForHyperParameterTuningJob, __VA_ARGS__)
#define ListTrainingJobsForHyperParameterTuningJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTrainingJobsForHyperParameterTuningJob, REQUEST)

#define ListTransformJobsAsync(...)  SubmitAsync(&SageMakerClient::ListTransformJobs, __VA_ARGS__)
#define ListTransformJobsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTransformJobs, REQUEST)

#define ListTrialComponentsAsync(...)  SubmitAsync(&SageMakerClient::ListTrialComponents, __VA_ARGS__)
#define ListTrialComponentsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTrialComponents, REQUEST)

#define ListTrialsAsync(...)  SubmitAsync(&SageMakerClient::ListTrials, __VA_ARGS__)
#define ListTrialsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListTrials, REQUEST)

#define ListUserProfilesAsync(...)  SubmitAsync(&SageMakerClient::ListUserProfiles, __VA_ARGS__)
#define ListUserProfilesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListUserProfiles, REQUEST)

#define ListWorkforcesAsync(...)  SubmitAsync(&SageMakerClient::ListWorkforces, __VA_ARGS__)
#define ListWorkforcesCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListWorkforces, REQUEST)

#define ListWorkteamsAsync(...)  SubmitAsync(&SageMakerClient::ListWorkteams, __VA_ARGS__)
#define ListWorkteamsCallable(REQUEST)  SubmitCallable(&SageMakerClient::ListWorkteams, REQUEST)

#define PutModelPackageGroupPolicyAsync(...)  SubmitAsync(&SageMakerClient::PutModelPackageGroupPolicy, __VA_ARGS__)
#define PutModelPackageGroupPolicyCallable(REQUEST)  SubmitCallable(&SageMakerClient::PutModelPackageGroupPolicy, REQUEST)

#define QueryLineageAsync(...)  SubmitAsync(&SageMakerClient::QueryLineage, __VA_ARGS__)
#define QueryLineageCallable(REQUEST)  SubmitCallable(&SageMakerClient::QueryLineage, REQUEST)

#define RegisterDevicesAsync(...)  SubmitAsync(&SageMakerClient::RegisterDevices, __VA_ARGS__)
#define RegisterDevicesCallable(REQUEST)  SubmitCallable(&SageMakerClient::RegisterDevices, REQUEST)

#define RenderUiTemplateAsync(...)  SubmitAsync(&SageMakerClient::RenderUiTemplate, __VA_ARGS__)
#define RenderUiTemplateCallable(REQUEST)  SubmitCallable(&SageMakerClient::RenderUiTemplate, REQUEST)

#define RetryPipelineExecutionAsync(...)  SubmitAsync(&SageMakerClient::RetryPipelineExecution, __VA_ARGS__)
#define RetryPipelineExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::RetryPipelineExecution, REQUEST)

#define SearchAsync(...)  SubmitAsync(&SageMakerClient::Search, __VA_ARGS__)
#define SearchCallable(REQUEST)  SubmitCallable(&SageMakerClient::Search, REQUEST)

#define SendPipelineExecutionStepFailureAsync(...)  SubmitAsync(&SageMakerClient::SendPipelineExecutionStepFailure, __VA_ARGS__)
#define SendPipelineExecutionStepFailureCallable(REQUEST)  SubmitCallable(&SageMakerClient::SendPipelineExecutionStepFailure, REQUEST)

#define SendPipelineExecutionStepSuccessAsync(...)  SubmitAsync(&SageMakerClient::SendPipelineExecutionStepSuccess, __VA_ARGS__)
#define SendPipelineExecutionStepSuccessCallable(REQUEST)  SubmitCallable(&SageMakerClient::SendPipelineExecutionStepSuccess, REQUEST)

#define StartEdgeDeploymentStageAsync(...)  SubmitAsync(&SageMakerClient::StartEdgeDeploymentStage, __VA_ARGS__)
#define StartEdgeDeploymentStageCallable(REQUEST)  SubmitCallable(&SageMakerClient::StartEdgeDeploymentStage, REQUEST)

#define StartMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::StartMonitoringSchedule, __VA_ARGS__)
#define StartMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::StartMonitoringSchedule, REQUEST)

#define StartNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::StartNotebookInstance, __VA_ARGS__)
#define StartNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::StartNotebookInstance, REQUEST)

#define StartPipelineExecutionAsync(...)  SubmitAsync(&SageMakerClient::StartPipelineExecution, __VA_ARGS__)
#define StartPipelineExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::StartPipelineExecution, REQUEST)

#define StopAutoMLJobAsync(...)  SubmitAsync(&SageMakerClient::StopAutoMLJob, __VA_ARGS__)
#define StopAutoMLJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopAutoMLJob, REQUEST)

#define StopCompilationJobAsync(...)  SubmitAsync(&SageMakerClient::StopCompilationJob, __VA_ARGS__)
#define StopCompilationJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopCompilationJob, REQUEST)

#define StopEdgeDeploymentStageAsync(...)  SubmitAsync(&SageMakerClient::StopEdgeDeploymentStage, __VA_ARGS__)
#define StopEdgeDeploymentStageCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopEdgeDeploymentStage, REQUEST)

#define StopEdgePackagingJobAsync(...)  SubmitAsync(&SageMakerClient::StopEdgePackagingJob, __VA_ARGS__)
#define StopEdgePackagingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopEdgePackagingJob, REQUEST)

#define StopHyperParameterTuningJobAsync(...)  SubmitAsync(&SageMakerClient::StopHyperParameterTuningJob, __VA_ARGS__)
#define StopHyperParameterTuningJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopHyperParameterTuningJob, REQUEST)

#define StopInferenceRecommendationsJobAsync(...)  SubmitAsync(&SageMakerClient::StopInferenceRecommendationsJob, __VA_ARGS__)
#define StopInferenceRecommendationsJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopInferenceRecommendationsJob, REQUEST)

#define StopLabelingJobAsync(...)  SubmitAsync(&SageMakerClient::StopLabelingJob, __VA_ARGS__)
#define StopLabelingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopLabelingJob, REQUEST)

#define StopMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::StopMonitoringSchedule, __VA_ARGS__)
#define StopMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopMonitoringSchedule, REQUEST)

#define StopNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::StopNotebookInstance, __VA_ARGS__)
#define StopNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopNotebookInstance, REQUEST)

#define StopPipelineExecutionAsync(...)  SubmitAsync(&SageMakerClient::StopPipelineExecution, __VA_ARGS__)
#define StopPipelineExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopPipelineExecution, REQUEST)

#define StopProcessingJobAsync(...)  SubmitAsync(&SageMakerClient::StopProcessingJob, __VA_ARGS__)
#define StopProcessingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopProcessingJob, REQUEST)

#define StopTrainingJobAsync(...)  SubmitAsync(&SageMakerClient::StopTrainingJob, __VA_ARGS__)
#define StopTrainingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopTrainingJob, REQUEST)

#define StopTransformJobAsync(...)  SubmitAsync(&SageMakerClient::StopTransformJob, __VA_ARGS__)
#define StopTransformJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::StopTransformJob, REQUEST)

#define UpdateActionAsync(...)  SubmitAsync(&SageMakerClient::UpdateAction, __VA_ARGS__)
#define UpdateActionCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateAction, REQUEST)

#define UpdateAppImageConfigAsync(...)  SubmitAsync(&SageMakerClient::UpdateAppImageConfig, __VA_ARGS__)
#define UpdateAppImageConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateAppImageConfig, REQUEST)

#define UpdateArtifactAsync(...)  SubmitAsync(&SageMakerClient::UpdateArtifact, __VA_ARGS__)
#define UpdateArtifactCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateArtifact, REQUEST)

#define UpdateCodeRepositoryAsync(...)  SubmitAsync(&SageMakerClient::UpdateCodeRepository, __VA_ARGS__)
#define UpdateCodeRepositoryCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateCodeRepository, REQUEST)

#define UpdateContextAsync(...)  SubmitAsync(&SageMakerClient::UpdateContext, __VA_ARGS__)
#define UpdateContextCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateContext, REQUEST)

#define UpdateDeviceFleetAsync(...)  SubmitAsync(&SageMakerClient::UpdateDeviceFleet, __VA_ARGS__)
#define UpdateDeviceFleetCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateDeviceFleet, REQUEST)

#define UpdateDevicesAsync(...)  SubmitAsync(&SageMakerClient::UpdateDevices, __VA_ARGS__)
#define UpdateDevicesCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateDevices, REQUEST)

#define UpdateDomainAsync(...)  SubmitAsync(&SageMakerClient::UpdateDomain, __VA_ARGS__)
#define UpdateDomainCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateDomain, REQUEST)

#define UpdateEndpointAsync(...)  SubmitAsync(&SageMakerClient::UpdateEndpoint, __VA_ARGS__)
#define UpdateEndpointCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateEndpoint, REQUEST)

#define UpdateEndpointWeightsAndCapacitiesAsync(...)  SubmitAsync(&SageMakerClient::UpdateEndpointWeightsAndCapacities, __VA_ARGS__)
#define UpdateEndpointWeightsAndCapacitiesCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateEndpointWeightsAndCapacities, REQUEST)

#define UpdateExperimentAsync(...)  SubmitAsync(&SageMakerClient::UpdateExperiment, __VA_ARGS__)
#define UpdateExperimentCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateExperiment, REQUEST)

#define UpdateFeatureGroupAsync(...)  SubmitAsync(&SageMakerClient::UpdateFeatureGroup, __VA_ARGS__)
#define UpdateFeatureGroupCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateFeatureGroup, REQUEST)

#define UpdateFeatureMetadataAsync(...)  SubmitAsync(&SageMakerClient::UpdateFeatureMetadata, __VA_ARGS__)
#define UpdateFeatureMetadataCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateFeatureMetadata, REQUEST)

#define UpdateImageAsync(...)  SubmitAsync(&SageMakerClient::UpdateImage, __VA_ARGS__)
#define UpdateImageCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateImage, REQUEST)

#define UpdateModelPackageAsync(...)  SubmitAsync(&SageMakerClient::UpdateModelPackage, __VA_ARGS__)
#define UpdateModelPackageCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateModelPackage, REQUEST)

#define UpdateMonitoringScheduleAsync(...)  SubmitAsync(&SageMakerClient::UpdateMonitoringSchedule, __VA_ARGS__)
#define UpdateMonitoringScheduleCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateMonitoringSchedule, REQUEST)

#define UpdateNotebookInstanceAsync(...)  SubmitAsync(&SageMakerClient::UpdateNotebookInstance, __VA_ARGS__)
#define UpdateNotebookInstanceCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateNotebookInstance, REQUEST)

#define UpdateNotebookInstanceLifecycleConfigAsync(...)  SubmitAsync(&SageMakerClient::UpdateNotebookInstanceLifecycleConfig, __VA_ARGS__)
#define UpdateNotebookInstanceLifecycleConfigCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateNotebookInstanceLifecycleConfig, REQUEST)

#define UpdatePipelineAsync(...)  SubmitAsync(&SageMakerClient::UpdatePipeline, __VA_ARGS__)
#define UpdatePipelineCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdatePipeline, REQUEST)

#define UpdatePipelineExecutionAsync(...)  SubmitAsync(&SageMakerClient::UpdatePipelineExecution, __VA_ARGS__)
#define UpdatePipelineExecutionCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdatePipelineExecution, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&SageMakerClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateProject, REQUEST)

#define UpdateTrainingJobAsync(...)  SubmitAsync(&SageMakerClient::UpdateTrainingJob, __VA_ARGS__)
#define UpdateTrainingJobCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateTrainingJob, REQUEST)

#define UpdateTrialAsync(...)  SubmitAsync(&SageMakerClient::UpdateTrial, __VA_ARGS__)
#define UpdateTrialCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateTrial, REQUEST)

#define UpdateTrialComponentAsync(...)  SubmitAsync(&SageMakerClient::UpdateTrialComponent, __VA_ARGS__)
#define UpdateTrialComponentCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateTrialComponent, REQUEST)

#define UpdateUserProfileAsync(...)  SubmitAsync(&SageMakerClient::UpdateUserProfile, __VA_ARGS__)
#define UpdateUserProfileCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateUserProfile, REQUEST)

#define UpdateWorkforceAsync(...)  SubmitAsync(&SageMakerClient::UpdateWorkforce, __VA_ARGS__)
#define UpdateWorkforceCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateWorkforce, REQUEST)

#define UpdateWorkteamAsync(...)  SubmitAsync(&SageMakerClient::UpdateWorkteam, __VA_ARGS__)
#define UpdateWorkteamCallable(REQUEST)  SubmitCallable(&SageMakerClient::UpdateWorkteam, REQUEST)

