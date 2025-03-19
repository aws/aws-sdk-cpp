/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SystemInstanceDescription
  {
  public:
    AWS_IOTTHINGSGRAPH_API SystemInstanceDescription() = default;
    AWS_IOTTHINGSGRAPH_API SystemInstanceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API SystemInstanceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTHINGSGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains summary information about a system instance.</p>
     */
    inline const SystemInstanceSummary& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = SystemInstanceSummary>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = SystemInstanceSummary>
    SystemInstanceDescription& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DefinitionDocument& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = DefinitionDocument>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = DefinitionDocument>
    SystemInstanceDescription& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service bucket where information about a system
     * instance is stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    SystemInstanceDescription& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetricsConfiguration& GetMetricsConfiguration() const { return m_metricsConfiguration; }
    inline bool MetricsConfigurationHasBeenSet() const { return m_metricsConfigurationHasBeenSet; }
    template<typename MetricsConfigurationT = MetricsConfiguration>
    void SetMetricsConfiguration(MetricsConfigurationT&& value) { m_metricsConfigurationHasBeenSet = true; m_metricsConfiguration = std::forward<MetricsConfigurationT>(value); }
    template<typename MetricsConfigurationT = MetricsConfiguration>
    SystemInstanceDescription& WithMetricsConfiguration(MetricsConfigurationT&& value) { SetMetricsConfiguration(std::forward<MetricsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the user's namespace against which the system instance was
     * validated.</p>
     */
    inline long long GetValidatedNamespaceVersion() const { return m_validatedNamespaceVersion; }
    inline bool ValidatedNamespaceVersionHasBeenSet() const { return m_validatedNamespaceVersionHasBeenSet; }
    inline void SetValidatedNamespaceVersion(long long value) { m_validatedNamespaceVersionHasBeenSet = true; m_validatedNamespaceVersion = value; }
    inline SystemInstanceDescription& WithValidatedNamespaceVersion(long long value) { SetValidatedNamespaceVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects that contain all of the IDs and revision numbers of
     * workflows and systems that are used in a system instance.</p>
     */
    inline const Aws::Vector<DependencyRevision>& GetValidatedDependencyRevisions() const { return m_validatedDependencyRevisions; }
    inline bool ValidatedDependencyRevisionsHasBeenSet() const { return m_validatedDependencyRevisionsHasBeenSet; }
    template<typename ValidatedDependencyRevisionsT = Aws::Vector<DependencyRevision>>
    void SetValidatedDependencyRevisions(ValidatedDependencyRevisionsT&& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions = std::forward<ValidatedDependencyRevisionsT>(value); }
    template<typename ValidatedDependencyRevisionsT = Aws::Vector<DependencyRevision>>
    SystemInstanceDescription& WithValidatedDependencyRevisions(ValidatedDependencyRevisionsT&& value) { SetValidatedDependencyRevisions(std::forward<ValidatedDependencyRevisionsT>(value)); return *this;}
    template<typename ValidatedDependencyRevisionsT = DependencyRevision>
    SystemInstanceDescription& AddValidatedDependencyRevisions(ValidatedDependencyRevisionsT&& value) { m_validatedDependencyRevisionsHasBeenSet = true; m_validatedDependencyRevisions.emplace_back(std::forward<ValidatedDependencyRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The AWS Identity and Access Management (IAM) role that AWS IoT Things Graph
     * assumes during flow execution in a cloud deployment. This role must have read
     * and write permissionss to AWS Lambda and AWS IoT and to any other AWS services
     * that the flow uses.</p>
     */
    inline const Aws::String& GetFlowActionsRoleArn() const { return m_flowActionsRoleArn; }
    inline bool FlowActionsRoleArnHasBeenSet() const { return m_flowActionsRoleArnHasBeenSet; }
    template<typename FlowActionsRoleArnT = Aws::String>
    void SetFlowActionsRoleArn(FlowActionsRoleArnT&& value) { m_flowActionsRoleArnHasBeenSet = true; m_flowActionsRoleArn = std::forward<FlowActionsRoleArnT>(value); }
    template<typename FlowActionsRoleArnT = Aws::String>
    SystemInstanceDescription& WithFlowActionsRoleArn(FlowActionsRoleArnT&& value) { SetFlowActionsRoleArn(std::forward<FlowActionsRoleArnT>(value)); return *this;}
    ///@}
  private:

    SystemInstanceSummary m_summary;
    bool m_summaryHasBeenSet = false;

    DefinitionDocument m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    MetricsConfiguration m_metricsConfiguration;
    bool m_metricsConfigurationHasBeenSet = false;

    long long m_validatedNamespaceVersion{0};
    bool m_validatedNamespaceVersionHasBeenSet = false;

    Aws::Vector<DependencyRevision> m_validatedDependencyRevisions;
    bool m_validatedDependencyRevisionsHasBeenSet = false;

    Aws::String m_flowActionsRoleArn;
    bool m_flowActionsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
