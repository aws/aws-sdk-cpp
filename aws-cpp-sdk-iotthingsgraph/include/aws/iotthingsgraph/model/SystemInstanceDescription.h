/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/model/SystemInstanceSummary.h>
#include <aws/iotthingsgraph/model/DefinitionDocument.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/MetricsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotthingsgraph/model/DependencyRevision.h>
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
namespace IoTThingsGraph
{
namespace Model
{

  /**
   * <p>An object that contains a system instance definition and summary
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SystemInstanceDescription">AWS
   * API Reference</a></p>
   */
  class AWS_IOTTHINGSGRAPH_API SystemInstanceDescription
  {
  public:
    SystemInstanceDescription();
    SystemInstanceDescription(Aws::Utils::Json::JsonView jsonValue);
    SystemInstanceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline const SystemInstanceSummary& GetSummary() const{ return m_summary; }

    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }

    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline void SetSummary(const SystemInstanceSummary& value) { m_summaryHasBeenSet = true; m_summary = value; }

    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline void SetSummary(SystemInstanceSummary&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }

    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline SystemInstanceDescription& WithSummary(const SystemInstanceSummary& value) { SetSummary(value); return *this;}

    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline SystemInstanceDescription& WithSummary(SystemInstanceSummary&& value) { SetSummary(std::move(value)); return *this;}


    
    inline const DefinitionDocument& GetDefinition() const{ return m_definition; }

    
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    
    inline void SetDefinition(const DefinitionDocument& value) { m_definitionHasBeenSet = true; m_definition = value; }

    
    inline void SetDefinition(DefinitionDocument&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    
    inline SystemInstanceDescription& WithDefinition(const DefinitionDocument& value) { SetDefinition(value); return *this;}

    
    inline SystemInstanceDescription& WithDefinition(DefinitionDocument&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline SystemInstanceDescription& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline SystemInstanceDescription& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline SystemInstanceDescription& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    
    inline const MetricsConfiguration& GetMetricsConfiguration() const{ return m_metricsConfiguration; }

    
    inline bool MetricsConfigurationHasBeenSet() const { return m_metricsConfigurationHasBeenSet; }

    
    inline void SetMetricsConfiguration(const MetricsConfiguration& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = value; }

    
    inline void SetMetricsConfiguration(MetricsConfiguration&& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = std::move(value); }

    
    inline SystemInstanceDescription& WithMetricsConfiguration(const MetricsConfiguration& value) { SetMetricsConfiguration(value); return *this;}

    
    inline SystemInstanceDescription& WithMetricsConfiguration(MetricsConfiguration&& value) { SetMetricsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The version of the user's namespace against which the system instance was
     * validated.</p>
     */
    inline long long GetValidatedNamespaceVersion() const{ return m_validatedNamespaceVersion; }

    /**
     * <p>The version of the user's namespace against which the system instance was
     * validated.</p>
     */
    inline bool ValidatedNamespaceVersionHasBeenSet() const { return m_validatedNamespaceVersionHasBeenSet; }

    /**
     * <p>The version of the user's namespace against which the system instance was
     * validated.</p>
     */
    inline void SetValidatedNamespaceVersion(long long value) { m_validatedNamespaceVersionHasBeenSet = true; m_validatedNamespaceVersion = value; }

    /**
     * <p>The version of the user's namespace against which the system instance was
     * validated.</p>
     */
    inline SystemInstanceDescription& WithValidatedNamespaceVersion(long long value) { SetValidatedNamespaceVersion(value); return *this;}


    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline const Aws::Vector<DependencyRevision>& GetValidatedDependencyRevisions() const{ return m_validatedDependencyRevisions; }

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline bool ValidatedDependencyRevisionsHasBeenSet() const { return m_validatedDependencyRevisionsHasBeenSet; }

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline void SetValidatedDependencyRevisions(const Aws::Vector<DependencyRevision>& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions = value; }

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline void SetValidatedDependencyRevisions(Aws::Vector<DependencyRevision>&& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions = std::move(value); }

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline SystemInstanceDescription& WithValidatedDependencyRevisions(const Aws::Vector<DependencyRevision>& value) { SetValidatedDependencyRevisions(value); return *this;}

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline SystemInstanceDescription& WithValidatedDependencyRevisions(Aws::Vector<DependencyRevision>&& value) { SetValidatedDependencyRevisions(std::move(value)); return *this;}

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline SystemInstanceDescription& AddValidatedDependencyRevisions(const DependencyRevision& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions.push_back(value); return *this; }

    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline SystemInstanceDescription& AddValidatedDependencyRevisions(DependencyRevision&& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline const Aws::String& GetFlowActionsRoleArn() const{ return m_flowActionsRoleArn; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline bool FlowActionsRoleArnHasBeenSet() const { return m_flowActionsRoleArnHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline void SetFlowActionsRoleArn(const Aws::String& value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline void SetFlowActionsRoleArn(Aws::String&& value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline void SetFlowActionsRoleArn(const char* value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline SystemInstanceDescription& WithFlowActionsRoleArn(const Aws::String& value) { SetFlowActionsRoleArn(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline SystemInstanceDescription& WithFlowActionsRoleArn(Aws::String&& value) { SetFlowActionsRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline SystemInstanceDescription& WithFlowActionsRoleArn(const char* value) { SetFlowActionsRoleArn(value); return *this;}

  private:

    SystemInstanceSummary m_summary;
    bool m_summaryHasBeenSet;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;

    MetricsConfiguration m_metricsConfiguration;
    bool m_metricsConfigurationHasBeenSet;

    long long m_validatedNamespaceVersion;
    bool m_validatedNamespaceVersionHasBeenSet;

    Aws::Vector<DependencyRevision> m_validatedDependencyRevisions;
    bool m_validatedDependencyRevisionsHasBeenSet;

    Aws::String m_flowActionsRoleArn;
    bool m_flowActionsRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
