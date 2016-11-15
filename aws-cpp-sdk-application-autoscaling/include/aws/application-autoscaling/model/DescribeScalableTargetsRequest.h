/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/application-autoscaling/model/ServiceNamespace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API DescribeScalableTargetsRequest : public ApplicationAutoScalingRequest
  {
  public:
    DescribeScalableTargetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DescribeScalableTargetsRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scalable target is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DescribeScalableTargetsRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(value); return *this;}

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The resource type and unique identifier string for the resource associated
     * with the scalable target. For Amazon ECS services, the resource type is
     * <code>services</code>, and the identifier is the cluster name and service name;
     * for example, <code>service/default/sample-webapp</code>. For Amazon EC2 Spot
     * fleet requests, the resource type is <code>spot-fleet-request</code>, and the
     * identifier is the Spot fleet request ID; for example,
     * <code>spot-fleet-request/sfr-73fbd2ce-aa30-494c-8788-1cee4EXAMPLE</code>. If you
     * specify a scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request. If you specify a
     * scalable dimension, you must also specify a resource ID.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request. If you specify a
     * scalable dimension, you must also specify a resource ID.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request. If you specify a
     * scalable dimension, you must also specify a resource ID.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request. If you specify a
     * scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scalable target. The scalable
     * dimension contains the service namespace, resource type, and scaling property,
     * such as <code>ecs:service:DesiredCount</code> for the desired task count of an
     * Amazon ECS service, or <code>ec2:spot-fleet-request:TargetCapacity</code> for
     * the target capacity of an Amazon EC2 Spot fleet request. If you specify a
     * scalable dimension, you must also specify a resource ID.</p>
     */
    inline DescribeScalableTargetsRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The maximum number of scalable target results returned by
     * <code>DescribeScalableTargets</code> in paginated output. When this parameter is
     * used, <code>DescribeScalableTargets</code> returns up to <code>MaxResults</code>
     * results in a single page along with a <code>NextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>DescribeScalableTargets</code> request with the returned
     * <code>NextToken</code> value. This value can be between 1 and 50. If this
     * parameter is not used, then <code>DescribeScalableTargets</code> returns up to
     * 50 results and a <code>NextToken</code> value, if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of scalable target results returned by
     * <code>DescribeScalableTargets</code> in paginated output. When this parameter is
     * used, <code>DescribeScalableTargets</code> returns up to <code>MaxResults</code>
     * results in a single page along with a <code>NextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>DescribeScalableTargets</code> request with the returned
     * <code>NextToken</code> value. This value can be between 1 and 50. If this
     * parameter is not used, then <code>DescribeScalableTargets</code> returns up to
     * 50 results and a <code>NextToken</code> value, if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of scalable target results returned by
     * <code>DescribeScalableTargets</code> in paginated output. When this parameter is
     * used, <code>DescribeScalableTargets</code> returns up to <code>MaxResults</code>
     * results in a single page along with a <code>NextToken</code> response element.
     * The remaining results of the initial request can be seen by sending another
     * <code>DescribeScalableTargets</code> request with the returned
     * <code>NextToken</code> value. This value can be between 1 and 50. If this
     * parameter is not used, then <code>DescribeScalableTargets</code> returns up to
     * 50 results and a <code>NextToken</code> value, if applicable.</p>
     */
    inline DescribeScalableTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalableTargets</code> request. Pagination continues from the end
     * of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalableTargetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
