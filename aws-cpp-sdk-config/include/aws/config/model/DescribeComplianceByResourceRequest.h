/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/ComplianceType.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResourceRequest">AWS
   * API Reference</a></p>
   */
  class DescribeComplianceByResourceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeComplianceByResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComplianceByResource"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The types of Amazon Web Services resources for which you want compliance
     * information (for example, <code>AWS::EC2::Instance</code>). For this action, you
     * can specify that the resource type is an Amazon Web Services account by
     * specifying <code>AWS::::Account</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
     */
    inline DescribeComplianceByResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information. You can specify only one resource ID. If you specify a resource ID,
     * you must also specify a type for <code>ResourceType</code>.</p>
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
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }

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
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::move(value); }

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
    inline DescribeComplianceByResourceRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(std::move(value)); return *this;}

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
    inline DescribeComplianceByResourceRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
     * uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of evaluation results returned on each page. The default
     * is 10. You cannot specify a number greater than 100. If you specify 0, Config
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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline DescribeComplianceByResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
