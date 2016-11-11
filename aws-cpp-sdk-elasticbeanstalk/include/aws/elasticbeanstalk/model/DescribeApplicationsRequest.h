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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to describe one or more applications.</p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeApplicationsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeApplicationsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationNames() const{ return m_applicationNames; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline void SetApplicationNames(const Aws::Vector<Aws::String>& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline void SetApplicationNames(Aws::Vector<Aws::String>&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline DescribeApplicationsRequest& WithApplicationNames(const Aws::Vector<Aws::String>& value) { SetApplicationNames(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline DescribeApplicationsRequest& WithApplicationNames(Aws::Vector<Aws::String>&& value) { SetApplicationNames(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationNames(const Aws::String& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationNames(Aws::String&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline DescribeApplicationsRequest& AddApplicationNames(const char* value) { m_applicationNamesHasBeenSet = true; m_applicationNames.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_applicationNames;
    bool m_applicationNamesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
