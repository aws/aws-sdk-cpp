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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ComplianceType.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API DescribeComplianceByResourceRequest : public ConfigServiceRequest
  {
  public:
    DescribeComplianceByResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(value); return *this;}

    /**
     * <p>The types of AWS resources for which you want compliance information; for
     * example, <code>AWS::EC2::Instance</code>. For this action, you can specify that
     * the resource type is an AWS account by specifying
     * <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the AWS resource for which you want compliance information. You can
     * specify only one resource ID. If you specify a resource ID, you must also
     * specify a type for <code>ResourceType</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const{ return m_complianceTypes; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetComplianceTypes(const Aws::Vector<ComplianceType>& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithComplianceTypes(const Aws::Vector<ComplianceType>& value) { SetComplianceTypes(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& AddComplianceTypes(const ComplianceType& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>INSUFFICIENT_DATA</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a limit greater than 100. If you specify 0, AWS Config
     * uses the default.</p>
     */
    inline DescribeComplianceByResourceRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
