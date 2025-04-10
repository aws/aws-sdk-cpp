/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/application-autoscaling/model/PolicyType.h>
#include <aws/application-autoscaling/model/StepScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/TargetTrackingScalingPolicyConfiguration.h>
#include <aws/application-autoscaling/model/PredictiveScalingPolicyConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/Alarm.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   * <p>Represents a scaling policy to use with Application Auto Scaling.</p> <p>For
   * more information about configuring scaling policies for a specific service, see
   * <a
   * href="https://docs.aws.amazon.com/autoscaling/application/userguide/integrated-services-list.html">Amazon
   * Web Services services that you can use with Application Auto Scaling</a> in the
   * <i>Application Auto Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-autoscaling-2016-02-06/ScalingPolicy">AWS
   * API Reference</a></p>
   */
  class ScalingPolicy
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy() = default;
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API ScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONAUTOSCALING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyARN() const { return m_policyARN; }
    inline bool PolicyARNHasBeenSet() const { return m_policyARNHasBeenSet; }
    template<typename PolicyARNT = Aws::String>
    void SetPolicyARN(PolicyARNT&& value) { m_policyARNHasBeenSet = true; m_policyARN = std::forward<PolicyARNT>(value); }
    template<typename PolicyARNT = Aws::String>
    ScalingPolicy& WithPolicyARN(PolicyARNT&& value) { SetPolicyARN(std::forward<PolicyARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scaling policy.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    ScalingPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource,
     * or a <code>custom-resource</code>.</p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline ScalingPolicy& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource associated with the scaling policy. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/my-cluster/my-service</code>.</p> </li> <li> <p>Spot Fleet - The
     * resource type is <code>spot-fleet-request</code> and the unique identifier is
     * the Spot Fleet request ID. Example:
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>.</p>
     * </li> <li> <p>EMR cluster - The resource type is <code>instancegroup</code> and
     * the unique identifier is the cluster ID and instance group ID. Example:
     * <code>instancegroup/j-2EEZNYKUA1NTV/ig-1791Y4E1L8YI0</code>.</p> </li> <li>
     * <p>AppStream 2.0 fleet - The resource type is <code>fleet</code> and the unique
     * identifier is the fleet name. Example: <code>fleet/sample-fleet</code>.</p>
     * </li> <li> <p>DynamoDB table - The resource type is <code>table</code> and the
     * unique identifier is the table name. Example: <code>table/my-table</code>.</p>
     * </li> <li> <p>DynamoDB global secondary index - The resource type is
     * <code>index</code> and the unique identifier is the index name. Example:
     * <code>table/my-table/index/my-table-index</code>.</p> </li> <li> <p>Aurora DB
     * cluster - The resource type is <code>cluster</code> and the unique identifier is
     * the cluster name. Example: <code>cluster:my-db-cluster</code>.</p> </li> <li>
     * <p>SageMaker endpoint variant - The resource type is <code>variant</code> and
     * the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>Custom resources are not supported with a resource type. This parameter must
     * specify the <code>OutputValue</code> from the CloudFormation template stack used
     * to access the resources. The unique identifier is defined by the service
     * provider. More information is available in our <a
     * href="https://github.com/aws/aws-auto-scaling-custom-resource">GitHub
     * repository</a>.</p> </li> <li> <p>Amazon Comprehend document classification
     * endpoint - The resource type and unique identifier are specified using the
     * endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:document-classifier-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Amazon Comprehend entity recognizer endpoint - The resource type
     * and unique identifier are specified using the endpoint ARN. Example:
     * <code>arn:aws:comprehend:us-west-2:123456789012:entity-recognizer-endpoint/EXAMPLE</code>.</p>
     * </li> <li> <p>Lambda provisioned concurrency - The resource type is
     * <code>function</code> and the unique identifier is the function name with a
     * function version or alias name suffix that is not <code>$LATEST</code>. Example:
     * <code>function:my-function:prod</code> or
     * <code>function:my-function:1</code>.</p> </li> <li> <p>Amazon Keyspaces table -
     * The resource type is <code>table</code> and the unique identifier is the table
     * name. Example: <code>keyspace/mykeyspace/table/mytable</code>.</p> </li> <li>
     * <p>Amazon MSK cluster - The resource type and unique identifier are specified
     * using the cluster ARN. Example:
     * <code>arn:aws:kafka:us-east-1:123456789012:cluster/demo-cluster-1/6357e0b2-0e6a-4b86-a0b4-70df934c2e31-5</code>.</p>
     * </li> <li> <p>Amazon ElastiCache replication group - The resource type is
     * <code>replication-group</code> and the unique identifier is the replication
     * group name. Example: <code>replication-group/mycluster</code>.</p> </li> <li>
     * <p>Amazon ElastiCache cache cluster - The resource type is
     * <code>cache-cluster</code> and the unique identifier is the cache cluster name.
     * Example: <code>cache-cluster/mycluster</code>.</p> </li> <li> <p>Neptune cluster
     * - The resource type is <code>cluster</code> and the unique identifier is the
     * cluster name. Example: <code>cluster:mycluster</code>.</p> </li> <li>
     * <p>SageMaker serverless endpoint - The resource type is <code>variant</code> and
     * the unique identifier is the resource ID. Example:
     * <code>endpoint/my-end-point/variant/KMeansClustering</code>.</p> </li> <li>
     * <p>SageMaker inference component - The resource type is
     * <code>inference-component</code> and the unique identifier is the resource ID.
     * Example: <code>inference-component/my-inference-component</code>.</p> </li> <li>
     * <p>Pool of WorkSpaces - The resource type is <code>workspacespool</code> and the
     * unique identifier is the pool ID. Example:
     * <code>workspacespool/wspool-123456</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ScalingPolicy& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scalable dimension. This string consists of the service namespace,
     * resource type, and scaling property.</p> <ul> <li> <p>
     * <code>ecs:service:DesiredCount</code> - The task count of an ECS service.</p>
     * </li> <li> <p> <code>elasticmapreduce:instancegroup:InstanceCount</code> - The
     * instance count of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
     * <code>dynamodb:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB table.</p> </li> <li> <p>
     * <code>dynamodb:index:ReadCapacityUnits</code> - The provisioned read capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>dynamodb:index:WriteCapacityUnits</code> - The provisioned write capacity
     * for a DynamoDB global secondary index.</p> </li> <li> <p>
     * <code>rds:cluster:ReadReplicaCount</code> - The count of Aurora Replicas in an
     * Aurora DB cluster. Available for Aurora MySQL-compatible edition and Aurora
     * PostgreSQL-compatible edition.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredInstanceCount</code> - The number of EC2
     * instances for a SageMaker model endpoint variant.</p> </li> <li> <p>
     * <code>custom-resource:ResourceType:Property</code> - The scalable dimension for
     * a custom resource provided by your own application or service.</p> </li> <li>
     * <p> <code>comprehend:document-classifier-endpoint:DesiredInferenceUnits</code> -
     * The number of inference units for an Amazon Comprehend document classification
     * endpoint.</p> </li> <li> <p>
     * <code>comprehend:entity-recognizer-endpoint:DesiredInferenceUnits</code> - The
     * number of inference units for an Amazon Comprehend entity recognizer
     * endpoint.</p> </li> <li> <p> <code>lambda:function:ProvisionedConcurrency</code>
     * - The provisioned concurrency for a Lambda function.</p> </li> <li> <p>
     * <code>cassandra:table:ReadCapacityUnits</code> - The provisioned read capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>cassandra:table:WriteCapacityUnits</code> - The provisioned write capacity
     * for an Amazon Keyspaces table.</p> </li> <li> <p>
     * <code>kafka:broker-storage:VolumeSize</code> - The provisioned volume size (in
     * GiB) for brokers in an Amazon MSK cluster.</p> </li> <li> <p>
     * <code>elasticache:cache-cluster:Nodes</code> - The number of nodes for an Amazon
     * ElastiCache cache cluster.</p> </li> <li> <p>
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> <li> <p>
     * <code>sagemaker:variant:DesiredProvisionedConcurrency</code> - The provisioned
     * concurrency for a SageMaker serverless endpoint.</p> </li> <li> <p>
     * <code>sagemaker:inference-component:DesiredCopyCount</code> - The number of
     * copies across an endpoint for a SageMaker inference component.</p> </li> <li>
     * <p> <code>workspaces:workspacespool:DesiredUserSessions</code> - The number of
     * user sessions for the WorkSpaces in the pool.</p> </li> </ul>
     */
    inline ScalableDimension GetScalableDimension() const { return m_scalableDimension; }
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }
    inline void SetScalableDimension(ScalableDimension value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }
    inline ScalingPolicy& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling policy type.</p> <p>The following policy types are supported:
     * </p> <p> <code>TargetTrackingScaling</code>—Not supported for Amazon EMR</p> <p>
     * <code>StepScaling</code>—Not supported for DynamoDB, Amazon Comprehend, Lambda,
     * Amazon Keyspaces, Amazon MSK, Amazon ElastiCache, or Neptune.</p> <p>
     * <code>PredictiveScaling</code>—Only supported for Amazon ECS</p>
     */
    inline PolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(PolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline ScalingPolicy& WithPolicyType(PolicyType value) { SetPolicyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A step scaling policy.</p>
     */
    inline const StepScalingPolicyConfiguration& GetStepScalingPolicyConfiguration() const { return m_stepScalingPolicyConfiguration; }
    inline bool StepScalingPolicyConfigurationHasBeenSet() const { return m_stepScalingPolicyConfigurationHasBeenSet; }
    template<typename StepScalingPolicyConfigurationT = StepScalingPolicyConfiguration>
    void SetStepScalingPolicyConfiguration(StepScalingPolicyConfigurationT&& value) { m_stepScalingPolicyConfigurationHasBeenSet = true; m_stepScalingPolicyConfiguration = std::forward<StepScalingPolicyConfigurationT>(value); }
    template<typename StepScalingPolicyConfigurationT = StepScalingPolicyConfiguration>
    ScalingPolicy& WithStepScalingPolicyConfiguration(StepScalingPolicyConfigurationT&& value) { SetStepScalingPolicyConfiguration(std::forward<StepScalingPolicyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A target tracking scaling policy.</p>
     */
    inline const TargetTrackingScalingPolicyConfiguration& GetTargetTrackingScalingPolicyConfiguration() const { return m_targetTrackingScalingPolicyConfiguration; }
    inline bool TargetTrackingScalingPolicyConfigurationHasBeenSet() const { return m_targetTrackingScalingPolicyConfigurationHasBeenSet; }
    template<typename TargetTrackingScalingPolicyConfigurationT = TargetTrackingScalingPolicyConfiguration>
    void SetTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfigurationT&& value) { m_targetTrackingScalingPolicyConfigurationHasBeenSet = true; m_targetTrackingScalingPolicyConfiguration = std::forward<TargetTrackingScalingPolicyConfigurationT>(value); }
    template<typename TargetTrackingScalingPolicyConfigurationT = TargetTrackingScalingPolicyConfiguration>
    ScalingPolicy& WithTargetTrackingScalingPolicyConfiguration(TargetTrackingScalingPolicyConfigurationT&& value) { SetTargetTrackingScalingPolicyConfiguration(std::forward<TargetTrackingScalingPolicyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The predictive scaling policy configuration. </p>
     */
    inline const PredictiveScalingPolicyConfiguration& GetPredictiveScalingPolicyConfiguration() const { return m_predictiveScalingPolicyConfiguration; }
    inline bool PredictiveScalingPolicyConfigurationHasBeenSet() const { return m_predictiveScalingPolicyConfigurationHasBeenSet; }
    template<typename PredictiveScalingPolicyConfigurationT = PredictiveScalingPolicyConfiguration>
    void SetPredictiveScalingPolicyConfiguration(PredictiveScalingPolicyConfigurationT&& value) { m_predictiveScalingPolicyConfigurationHasBeenSet = true; m_predictiveScalingPolicyConfiguration = std::forward<PredictiveScalingPolicyConfigurationT>(value); }
    template<typename PredictiveScalingPolicyConfigurationT = PredictiveScalingPolicyConfiguration>
    ScalingPolicy& WithPredictiveScalingPolicyConfiguration(PredictiveScalingPolicyConfigurationT&& value) { SetPredictiveScalingPolicyConfiguration(std::forward<PredictiveScalingPolicyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms associated with the scaling policy.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Aws::Vector<Alarm>>
    ScalingPolicy& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    template<typename AlarmsT = Alarm>
    ScalingPolicy& AddAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms.emplace_back(std::forward<AlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the scaling policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ScalingPolicy& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyARN;
    bool m_policyARNHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    PolicyType m_policyType{PolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;

    StepScalingPolicyConfiguration m_stepScalingPolicyConfiguration;
    bool m_stepScalingPolicyConfigurationHasBeenSet = false;

    TargetTrackingScalingPolicyConfiguration m_targetTrackingScalingPolicyConfiguration;
    bool m_targetTrackingScalingPolicyConfigurationHasBeenSet = false;

    PredictiveScalingPolicyConfiguration m_predictiveScalingPolicyConfiguration;
    bool m_predictiveScalingPolicyConfigurationHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
