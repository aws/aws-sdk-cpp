﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API DeregisterScalableTargetRequest : public ApplicationAutoScalingRequest
  {
  public:
    DeregisterScalableTargetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterScalableTarget"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline bool ServiceNamespaceHasBeenSet() const { return m_serviceNamespaceHasBeenSet; }

    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = std::move(value); }

    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline DeregisterScalableTargetRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace of the Amazon Web Services service that provides the resource.
     * For a resource provided by your own application or service, use
     * <code>custom-resource</code> instead.</p>
     */
    inline DeregisterScalableTargetRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(std::move(value)); return *this;}


    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource associated with the scalable target. This
     * string consists of the resource type and unique identifier.</p> <ul> <li> <p>ECS
     * service - The resource type is <code>service</code> and the unique identifier is
     * the cluster name and service name. Example:
     * <code>service/default/sample-webapp</code>.</p> </li> <li> <p>Spot Fleet - The
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
     * <p>Neptune cluster - The resource type is <code>cluster</code> and the unique
     * identifier is the cluster name. Example: <code>cluster:mycluster</code>.</p>
     * </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline bool ScalableDimensionHasBeenSet() const { return m_scalableDimensionHasBeenSet; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = std::move(value); }

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. This string
     * consists of the service namespace, resource type, and scaling property.</p> <ul>
     * <li> <p> <code>ecs:service:DesiredCount</code> - The desired task count of an
     * ECS service.</p> </li> <li> <p>
     * <code>elasticmapreduce:instancegroup:InstanceCount</code> - The instance count
     * of an EMR Instance Group.</p> </li> <li> <p>
     * <code>ec2:spot-fleet-request:TargetCapacity</code> - The target capacity of a
     * Spot Fleet.</p> </li> <li> <p> <code>appstream:fleet:DesiredCapacity</code> -
     * The desired capacity of an AppStream 2.0 fleet.</p> </li> <li> <p>
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
     * instances for an SageMaker model endpoint variant.</p> </li> <li> <p>
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
     * <code>elasticache:replication-group:NodeGroups</code> - The number of node
     * groups for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>elasticache:replication-group:Replicas</code> - The number of replicas per
     * node group for an Amazon ElastiCache replication group.</p> </li> <li> <p>
     * <code>neptune:cluster:ReadReplicaCount</code> - The count of read replicas in an
     * Amazon Neptune DB cluster.</p> </li> </ul>
     */
    inline DeregisterScalableTargetRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(std::move(value)); return *this;}

  private:

    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
