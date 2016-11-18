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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to describe the resources in an environment.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentResourcesRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeEnvironmentResourcesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentName, or both. If you
     * do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to retrieve AWS resource usage data.</p> <p>
     * Condition: You must specify either this or an EnvironmentId, or both. If you do
     * not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline DescribeEnvironmentResourcesRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
