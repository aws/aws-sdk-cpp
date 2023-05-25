/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/accessanalyzer/model/PolicyGenerationDetails.h>
#include <aws/accessanalyzer/model/CloudTrailDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class StartPolicyGenerationRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API StartPolicyGenerationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPolicyGeneration"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline const PolicyGenerationDetails& GetPolicyGenerationDetails() const{ return m_policyGenerationDetails; }

    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline bool PolicyGenerationDetailsHasBeenSet() const { return m_policyGenerationDetailsHasBeenSet; }

    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline void SetPolicyGenerationDetails(const PolicyGenerationDetails& value) { m_policyGenerationDetailsHasBeenSet = true; m_policyGenerationDetails = value; }

    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline void SetPolicyGenerationDetails(PolicyGenerationDetails&& value) { m_policyGenerationDetailsHasBeenSet = true; m_policyGenerationDetails = std::move(value); }

    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline StartPolicyGenerationRequest& WithPolicyGenerationDetails(const PolicyGenerationDetails& value) { SetPolicyGenerationDetails(value); return *this;}

    /**
     * <p>Contains the ARN of the IAM entity (user or role) for which you are
     * generating a policy.</p>
     */
    inline StartPolicyGenerationRequest& WithPolicyGenerationDetails(PolicyGenerationDetails&& value) { SetPolicyGenerationDetails(std::move(value)); return *this;}


    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline const CloudTrailDetails& GetCloudTrailDetails() const{ return m_cloudTrailDetails; }

    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline bool CloudTrailDetailsHasBeenSet() const { return m_cloudTrailDetailsHasBeenSet; }

    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline void SetCloudTrailDetails(const CloudTrailDetails& value) { m_cloudTrailDetailsHasBeenSet = true; m_cloudTrailDetails = value; }

    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline void SetCloudTrailDetails(CloudTrailDetails&& value) { m_cloudTrailDetailsHasBeenSet = true; m_cloudTrailDetails = std::move(value); }

    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline StartPolicyGenerationRequest& WithCloudTrailDetails(const CloudTrailDetails& value) { SetCloudTrailDetails(value); return *this;}

    /**
     * <p>A <code>CloudTrailDetails</code> object that contains details about a
     * <code>Trail</code> that you want to analyze to generate policies.</p>
     */
    inline StartPolicyGenerationRequest& WithCloudTrailDetails(CloudTrailDetails&& value) { SetCloudTrailDetails(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline StartPolicyGenerationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline StartPolicyGenerationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully, the subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you do not specify a client token, one is automatically
     * generated by the Amazon Web Services SDK.</p>
     */
    inline StartPolicyGenerationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    PolicyGenerationDetails m_policyGenerationDetails;
    bool m_policyGenerationDetailsHasBeenSet = false;

    CloudTrailDetails m_cloudTrailDetails;
    bool m_cloudTrailDetailsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
