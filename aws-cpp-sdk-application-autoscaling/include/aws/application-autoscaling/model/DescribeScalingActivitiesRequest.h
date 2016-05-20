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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScalableDimension.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONAUTOSCALING_API DescribeScalingActivitiesRequest : public ApplicationAutoScalingRequest
  {
  public:
    DescribeScalingActivitiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline const ServiceNamespace& GetServiceNamespace() const{ return m_serviceNamespace; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(const ServiceNamespace& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline void SetServiceNamespace(ServiceNamespace&& value) { m_serviceNamespaceHasBeenSet = true; m_serviceNamespace = value; }

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DescribeScalingActivitiesRequest& WithServiceNamespace(const ServiceNamespace& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The namespace for the AWS service that the scaling activity is associated
     * with. For more information, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#genref-aws-service-namespaces">AWS
     * Service Namespaces</a> in the Amazon Web Services General Reference.</p>
     */
    inline DescribeScalingActivitiesRequest& WithServiceNamespace(ServiceNamespace&& value) { SetServiceNamespace(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline DescribeScalingActivitiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline DescribeScalingActivitiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The unique identifier string for the resource associated with the scaling
     * activity. For Amazon ECS services, this value is the resource type, followed by
     * the cluster name, and then the service name, such as
     * <code>service/default/sample-webapp</code>. If you specify a scalable dimension,
     * you must also specify a resource ID.</p>
     */
    inline DescribeScalingActivitiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service. If you specify a scalable dimension, you must
     * also specify a resource ID.</p>
     */
    inline const ScalableDimension& GetScalableDimension() const{ return m_scalableDimension; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service. If you specify a scalable dimension, you must
     * also specify a resource ID.</p>
     */
    inline void SetScalableDimension(const ScalableDimension& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service. If you specify a scalable dimension, you must
     * also specify a resource ID.</p>
     */
    inline void SetScalableDimension(ScalableDimension&& value) { m_scalableDimensionHasBeenSet = true; m_scalableDimension = value; }

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service. If you specify a scalable dimension, you must
     * also specify a resource ID.</p>
     */
    inline DescribeScalingActivitiesRequest& WithScalableDimension(const ScalableDimension& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The scalable dimension associated with the scaling activity. The scalable
     * dimension contains the service namespace, the resource type, and the scaling
     * property, such as <code>ecs:service:DesiredCount</code> for the desired task
     * count for an Amazon ECS service. If you specify a scalable dimension, you must
     * also specify a resource ID.</p>
     */
    inline DescribeScalingActivitiesRequest& WithScalableDimension(ScalableDimension&& value) { SetScalableDimension(value); return *this;}

    /**
     * <p>The maximum number of scaling activity results returned by
     * <code>DescribeScalingActivities</code> in paginated output. When this parameter
     * is used, <code>DescribeScalingActivities</code> returns up to
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeScalingActivities</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 1 and 50. If this parameter is not used, then
     * <code>DescribeScalingActivities</code> returns up to 50 results and a
     * <code>NextToken</code> value, if applicable.</p>
     */
    inline long GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of scaling activity results returned by
     * <code>DescribeScalingActivities</code> in paginated output. When this parameter
     * is used, <code>DescribeScalingActivities</code> returns up to
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeScalingActivities</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 1 and 50. If this parameter is not used, then
     * <code>DescribeScalingActivities</code> returns up to 50 results and a
     * <code>NextToken</code> value, if applicable.</p>
     */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of scaling activity results returned by
     * <code>DescribeScalingActivities</code> in paginated output. When this parameter
     * is used, <code>DescribeScalingActivities</code> returns up to
     * <code>MaxResults</code> results in a single page along with a
     * <code>NextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeScalingActivities</code>
     * request with the returned <code>NextToken</code> value. This value can be
     * between 1 and 50. If this parameter is not used, then
     * <code>DescribeScalingActivities</code> returns up to 50 results and a
     * <code>NextToken</code> value, if applicable.</p>
     */
    inline DescribeScalingActivitiesRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value returned from a previous paginated
     * <code>DescribeScalingActivities</code> request. Pagination continues from the
     * end of the previous results that returned the <code>NextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeScalingActivitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    ServiceNamespace m_serviceNamespace;
    bool m_serviceNamespaceHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    ScalableDimension m_scalableDimension;
    bool m_scalableDimensionHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
