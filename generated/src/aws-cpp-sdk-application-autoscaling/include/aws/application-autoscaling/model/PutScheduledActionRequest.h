/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/core/utils/DateTime.h>
#include <aws/application-autoscaling/model/ScalableTargetAction.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class PutScheduledActionRequest : public ApplicationAutoScalingRequest
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API PutScheduledActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutScheduledAction"; }

    AWS_APPLICATIONAUTOSCALING_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONAUTOSCALING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline ServiceNamespace GetServiceNamespace() const { return m_serviceNamespace; }
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }
    inline void SetServiceNamespace(ServiceNamespace value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }
    inline PutScheduledActionRequest& WithServiceNamespace(ServiceNamespace value) { SetServiceNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for this action. The following formats are supported:</p> <ul>
     * <li> <p>At expressions -
     * "<code>at(<i>yyyy</i>-<i>mm</i>-<i>dd</i>T<i>hh</i>:<i>mm</i>:<i>ss</i>)</code>"</p>
     * </li> <li> <p>Rate expressions - "<code>rate(<i>value</i>
     * <i>unit</i>)</code>"</p> </li> <li> <p>Cron expressions -
     * "<code>cron(<i>fields</i>)</code>"</p> </li> </ul> <p>At expressions are useful
     * for one-time schedules. Cron expressions are useful for scheduled actions that
     * run periodically at a specified date and time, and rate expressions are useful
     * for scheduled actions that run at a regular interval.</p> <p>At and cron
     * expressions use Universal Coordinated Time (UTC) by default.</p> <p>The cron
     * format consists of six fields separated by white spaces: [Minutes] [Hours]
     * [Day_of_Month] [Month] [Day_of_Week] [Year].</p> <p>For rate expressions,
     * <i>value</i> is a positive integer and <i>unit</i> is <code>minute</code> |
     * <code>minutes</code> | <code>hour</code> | <code>hours</code> | <code>day</code>
     * | <code>days</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/application/userguide/scheduled-scaling-using-cron-expressions.html">Schedule
     * recurring scaling actions using cron expressions</a> in the <i>Application Auto
     * Scaling User Guide</i>.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    PutScheduledActionRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time zone used when setting a scheduled action by using an at
     * or cron expression. If a time zone is not provided, UTC is used by default.</p>
     * <p>Valid values are the canonical names of the IANA time zones supported by
     * Joda-Time (such as <code>Etc/GMT+9</code> or <code>Pacific/Tahiti</code>). For
     * more information, see <a
     * href="https://www.joda.org/joda-time/timezones.html">https://www.joda.org/joda-time/timezones.html</a>.</p>
     */
    inline const Aws::String& GetTimezone() const { return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    template<typename TimezoneT = Aws::String>
    void SetTimezone(TimezoneT&& value) { m_timezoneHasBeenSet = true; m_timezone = std::forward<TimezoneT>(value); }
    template<typename TimezoneT = Aws::String>
    PutScheduledActionRequest& WithTimezone(TimezoneT&& value) { SetTimezone(std::forward<TimezoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled action. This name must be unique among all other
     * scheduled actions on the specified scalable target. </p>
     */
    inline const Aws::String& GetScheduledActionName() const { return m_scheduledActionName; }
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }
    template<typename ScheduledActionNameT = Aws::String>
    void SetScheduledActionName(ScheduledActionNameT&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::forward<ScheduledActionNameT>(value); }
    template<typename ScheduledActionNameT = Aws::String>
    PutScheduledActionRequest& WithScheduledActionName(ScheduledActionNameT&& value) { SetScheduledActionName(std::forward<ScheduledActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the resource associated with the scheduled action. This
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
    PutScheduledActionRequest& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
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
    inline PutScheduledActionRequest& WithScalableDimension(ScalableDimension value) { SetScalableDimension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time for this scheduled action to start, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PutScheduledActionRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time for the recurring schedule to end, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    PutScheduledActionRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new minimum and maximum capacity. You can set both values or just one. At
     * the scheduled time, if the current capacity is below the minimum capacity,
     * Application Auto Scaling scales out to the minimum capacity. If the current
     * capacity is above the maximum capacity, Application Auto Scaling scales in to
     * the maximum capacity.</p>
     */
    inline const ScalableTargetAction& GetScalableTargetAction() const { return m_scalableTargetAction; }
    inline bool ScalableTargetActionHasBeenSet() const { return m_scalableTargetActionHasBeenSet; }
    template<typename ScalableTargetActionT = ScalableTargetAction>
    void SetScalableTargetAction(ScalableTargetActionT&& value) { m_scalableTargetActionHasBeenSet = true; m_scalableTargetAction = std::forward<ScalableTargetActionT>(value); }
    template<typename ScalableTargetActionT = ScalableTargetAction>
    PutScheduledActionRequest& WithScalableTargetAction(ScalableTargetActionT&& value) { SetScalableTargetAction(std::forward<ScalableTargetActionT>(value)); return *this;}
    ///@}
  private:

    ServiceNamespace m_serviceNamespace{ServiceNamespace::NOT_SET};
    bool m_serviceNamespaceHasBeenSet = false;

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    ScalableDimension m_scalableDimension{ScalableDimension::NOT_SET};
    bool m_scalableDimensionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ScalableTargetAction m_scalableTargetAction;
    bool m_scalableTargetActionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
