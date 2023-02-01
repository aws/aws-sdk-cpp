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
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResourceRequest">AWS
   * API Reference</a></p>
   */
  class GetComplianceDetailsByResourceRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetComplianceDetailsByResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComplianceDetailsByResource"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services resource for which you want compliance
     * information.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline const Aws::Vector<ComplianceType>& GetComplianceTypes() const{ return m_complianceTypes; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline bool ComplianceTypesHasBeenSet() const { return m_complianceTypesHasBeenSet; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceTypes(const Aws::Vector<ComplianceType>& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = value; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline void SetComplianceTypes(Aws::Vector<ComplianceType>&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes = std::move(value); }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithComplianceTypes(const Aws::Vector<ComplianceType>& value) { SetComplianceTypes(value); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithComplianceTypes(Aws::Vector<ComplianceType>&& value) { SetComplianceTypes(std::move(value)); return *this;}

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByResourceRequest& AddComplianceTypes(const ComplianceType& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(value); return *this; }

    /**
     * <p>Filters the results by compliance.</p> <p>The allowed values are
     * <code>COMPLIANT</code>, <code>NON_COMPLIANT</code>, and
     * <code>NOT_APPLICABLE</code>.</p>
     */
    inline GetComplianceDetailsByResourceRequest& AddComplianceTypes(ComplianceType&& value) { m_complianceTypesHasBeenSet = true; m_complianceTypes.push_back(std::move(value)); return *this; }


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
    inline GetComplianceDetailsByResourceRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetComplianceDetailsByResourceRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = value; }

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::move(value); }

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId.assign(value); }

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of Amazon Web Services resource execution for which you want to
     * retrieve evaluation results. </p>  <p>You need to only provide either a
     * <code>ResourceEvaluationID</code> or a <code>ResourceID </code>and
     * <code>ResourceType</code>.</p> 
     */
    inline GetComplianceDetailsByResourceRequest& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Vector<ComplianceType> m_complianceTypes;
    bool m_complianceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
