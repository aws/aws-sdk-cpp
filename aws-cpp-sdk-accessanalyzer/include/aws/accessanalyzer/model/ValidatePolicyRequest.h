/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/accessanalyzer/model/Locale.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/PolicyType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class AWS_ACCESSANALYZER_API ValidatePolicyRequest : public AccessAnalyzerRequest
  {
  public:
    ValidatePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidatePolicy"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline ValidatePolicyRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale to use for localizing the findings.</p>
     */
    inline ValidatePolicyRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline ValidatePolicyRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ValidatePolicyRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ValidatePolicyRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ValidatePolicyRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline ValidatePolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline ValidatePolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline ValidatePolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline ValidatePolicyRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy to validate. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups. They also include service-control policies (SCPs) that are
     * attached to an AWS organization, organizational unit (OU), or an account.</p>
     * <p>Resource policies grant permissions on AWS resources. Resource policies
     * include trust policies for IAM roles and bucket policies for S3 buckets. You can
     * provide a generic input such as identity policy or resource policy or a specific
     * input such as managed policy or S3 bucket policy. </p>
     */
    inline ValidatePolicyRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
