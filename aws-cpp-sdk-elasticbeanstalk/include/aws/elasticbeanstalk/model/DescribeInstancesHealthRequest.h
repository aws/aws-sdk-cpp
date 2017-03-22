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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/InstancesHealthAttribute.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Parameters for a call to <code>DescribeInstancesHealth</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeInstancesHealthRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeInstancesHealthRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeInstancesHealthRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by name.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>Specify the AWS Elastic Beanstalk environment by ID.</p>
     */
    inline DescribeInstancesHealthRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline const Aws::Vector<InstancesHealthAttribute>& GetAttributeNames() const{ return m_attributeNames; }

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline void SetAttributeNames(const Aws::Vector<InstancesHealthAttribute>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline void SetAttributeNames(Aws::Vector<InstancesHealthAttribute>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline DescribeInstancesHealthRequest& WithAttributeNames(const Aws::Vector<InstancesHealthAttribute>& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline DescribeInstancesHealthRequest& WithAttributeNames(Aws::Vector<InstancesHealthAttribute>&& value) { SetAttributeNames(value); return *this;}

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline DescribeInstancesHealthRequest& AddAttributeNames(const InstancesHealthAttribute& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>Specifies the response elements you wish to receive. To retrieve all
     * attributes, set to <code>All</code>. If no attribute names are specified,
     * returns a list of instances.</p>
     */
    inline DescribeInstancesHealthRequest& AddAttributeNames(InstancesHealthAttribute&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline DescribeInstancesHealthRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline DescribeInstancesHealthRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token returned by a previous call.</p>
     */
    inline DescribeInstancesHealthRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet;
    Aws::Vector<InstancesHealthAttribute> m_attributeNames;
    bool m_attributeNamesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
