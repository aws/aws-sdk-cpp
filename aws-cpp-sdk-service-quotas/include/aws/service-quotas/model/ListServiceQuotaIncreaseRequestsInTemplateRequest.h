/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class AWS_SERVICEQUOTAS_API ListServiceQuotaIncreaseRequestsInTemplateRequest : public ServiceQuotasRequest
  {
  public:
    ListServiceQuotaIncreaseRequestsInTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceQuotaIncreaseRequestsInTemplate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The identifier for a service. When performing an operation, use the
     * <code>ServiceCode</code> to specify a particular service. </p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>Specifies the AWS Region for the quota that you want to use.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>(Optional) Use this parameter in a request if you receive a
     * <code>NextToken</code> response in a previous request that indicates that
     * there's more output available. In a subsequent call, set it to the value of the
     * previous call's <code>NextToken</code> response to indicate where the output
     * should continue from.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>(Optional) Limits the number of results that you want to include in the
     * response. If you don't include this parameter, the response defaults to a value
     * that's specific to the operation. If additional items exist beyond the specified
     * maximum, the <code>NextToken</code> element is present and has a value (isn't
     * null). Include that value as the <code>NextToken</code> request parameter in the
     * call to the operation to get the next part of the results. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>(Optional) Limits the number of results that you want to include in the
     * response. If you don't include this parameter, the response defaults to a value
     * that's specific to the operation. If additional items exist beyond the specified
     * maximum, the <code>NextToken</code> element is present and has a value (isn't
     * null). Include that value as the <code>NextToken</code> request parameter in the
     * call to the operation to get the next part of the results. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>(Optional) Limits the number of results that you want to include in the
     * response. If you don't include this parameter, the response defaults to a value
     * that's specific to the operation. If additional items exist beyond the specified
     * maximum, the <code>NextToken</code> element is present and has a value (isn't
     * null). Include that value as the <code>NextToken</code> request parameter in the
     * call to the operation to get the next part of the results. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>(Optional) Limits the number of results that you want to include in the
     * response. If you don't include this parameter, the response defaults to a value
     * that's specific to the operation. If additional items exist beyond the specified
     * maximum, the <code>NextToken</code> element is present and has a value (isn't
     * null). Include that value as the <code>NextToken</code> request parameter in the
     * call to the operation to get the next part of the results. You should check
     * <code>NextToken</code> after every operation to ensure that you receive all of
     * the results.</p>
     */
    inline ListServiceQuotaIncreaseRequestsInTemplateRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
