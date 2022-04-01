﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int TrainingJob_HASH = HashingUtils::HashString("TrainingJob");
        static const int Experiment_HASH = HashingUtils::HashString("Experiment");
        static const int ExperimentTrial_HASH = HashingUtils::HashString("ExperimentTrial");
        static const int ExperimentTrialComponent_HASH = HashingUtils::HashString("ExperimentTrialComponent");
        static const int Endpoint_HASH = HashingUtils::HashString("Endpoint");
        static const int ModelPackage_HASH = HashingUtils::HashString("ModelPackage");
        static const int ModelPackageGroup_HASH = HashingUtils::HashString("ModelPackageGroup");
        static const int Pipeline_HASH = HashingUtils::HashString("Pipeline");
        static const int PipelineExecution_HASH = HashingUtils::HashString("PipelineExecution");
        static const int FeatureGroup_HASH = HashingUtils::HashString("FeatureGroup");
        static const int Project_HASH = HashingUtils::HashString("Project");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TrainingJob_HASH)
          {
            return ResourceType::TrainingJob;
          }
          else if (hashCode == Experiment_HASH)
          {
            return ResourceType::Experiment;
          }
          else if (hashCode == ExperimentTrial_HASH)
          {
            return ResourceType::ExperimentTrial;
          }
          else if (hashCode == ExperimentTrialComponent_HASH)
          {
            return ResourceType::ExperimentTrialComponent;
          }
          else if (hashCode == Endpoint_HASH)
          {
            return ResourceType::Endpoint;
          }
          else if (hashCode == ModelPackage_HASH)
          {
            return ResourceType::ModelPackage;
          }
          else if (hashCode == ModelPackageGroup_HASH)
          {
            return ResourceType::ModelPackageGroup;
          }
          else if (hashCode == Pipeline_HASH)
          {
            return ResourceType::Pipeline;
          }
          else if (hashCode == PipelineExecution_HASH)
          {
            return ResourceType::PipelineExecution;
          }
          else if (hashCode == FeatureGroup_HASH)
          {
            return ResourceType::FeatureGroup;
          }
          else if (hashCode == Project_HASH)
          {
            return ResourceType::Project;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::TrainingJob:
            return "TrainingJob";
          case ResourceType::Experiment:
            return "Experiment";
          case ResourceType::ExperimentTrial:
            return "ExperimentTrial";
          case ResourceType::ExperimentTrialComponent:
            return "ExperimentTrialComponent";
          case ResourceType::Endpoint:
            return "Endpoint";
          case ResourceType::ModelPackage:
            return "ModelPackage";
          case ResourceType::ModelPackageGroup:
            return "ModelPackageGroup";
          case ResourceType::Pipeline:
            return "Pipeline";
          case ResourceType::PipelineExecution:
            return "PipelineExecution";
          case ResourceType::FeatureGroup:
            return "FeatureGroup";
          case ResourceType::Project:
            return "Project";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
