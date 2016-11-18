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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API GetComplianceSummaryByResourceTypeRequest : public ConfigServiceRequest
  {
  public:
    GetComplianceSummaryByResourceTypeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>Specify one or more resource types to get the number of resources that are
     * compliant and the number that are noncompliant for each resource type.</p>
     * <p>For this request, you can specify an AWS resource type such as
     * <code>AWS::EC2::Instance</code>, and you can specify that the resource type is
     * an AWS account by specifying <code>AWS::::Account</code>.</p>
     */
    inline GetComplianceSummaryByResourceTypeRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
