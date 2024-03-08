/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/AccessCheckPolicyType.h>
#include <aws/accessanalyzer/model/Access.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class CheckAccessNotGrantedRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckAccessNotGranted"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


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
    inline CheckAccessNotGrantedRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline const Aws::Vector<Access>& GetAccess() const{ return m_access; }

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline void SetAccess(const Aws::Vector<Access>& value) { m_accessHasBeenSet = true; m_access = value; }

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline void SetAccess(Aws::Vector<Access>&& value) { m_accessHasBeenSet = true; m_access = std::move(value); }

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithAccess(const Aws::Vector<Access>& value) { SetAccess(value); return *this;}

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithAccess(Aws::Vector<Access>&& value) { SetAccess(std::move(value)); return *this;}

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline CheckAccessNotGrantedRequest& AddAccess(const Access& value) { m_accessHasBeenSet = true; m_access.push_back(value); return *this; }

    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy.</p>
     */
    inline CheckAccessNotGrantedRequest& AddAccess(Access&& value) { m_accessHasBeenSet = true; m_access.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline const AccessCheckPolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline void SetPolicyType(const AccessCheckPolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline void SetPolicyType(AccessCheckPolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithPolicyType(const AccessCheckPolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets. You can provide a generic input such as identity
     * policy or resource policy or a specific input such as managed policy or Amazon
     * S3 bucket policy.</p>
     */
    inline CheckAccessNotGrantedRequest& WithPolicyType(AccessCheckPolicyType&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Access> m_access;
    bool m_accessHasBeenSet = false;

    AccessCheckPolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
