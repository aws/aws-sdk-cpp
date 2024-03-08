/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AccessCheckPolicyType.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class CheckNoNewAccessRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CheckNoNewAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckNoNewAccess"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline const Aws::String& GetNewPolicyDocument() const{ return m_newPolicyDocument; }

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline bool NewPolicyDocumentHasBeenSet() const { return m_newPolicyDocumentHasBeenSet; }

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline void SetNewPolicyDocument(const Aws::String& value) { m_newPolicyDocumentHasBeenSet = true; m_newPolicyDocument = value; }

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline void SetNewPolicyDocument(Aws::String&& value) { m_newPolicyDocumentHasBeenSet = true; m_newPolicyDocument = std::move(value); }

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline void SetNewPolicyDocument(const char* value) { m_newPolicyDocumentHasBeenSet = true; m_newPolicyDocument.assign(value); }

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline CheckNoNewAccessRequest& WithNewPolicyDocument(const Aws::String& value) { SetNewPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline CheckNoNewAccessRequest& WithNewPolicyDocument(Aws::String&& value) { SetNewPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline CheckNoNewAccessRequest& WithNewPolicyDocument(const char* value) { SetNewPolicyDocument(value); return *this;}


    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline const Aws::String& GetExistingPolicyDocument() const{ return m_existingPolicyDocument; }

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline bool ExistingPolicyDocumentHasBeenSet() const { return m_existingPolicyDocumentHasBeenSet; }

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline void SetExistingPolicyDocument(const Aws::String& value) { m_existingPolicyDocumentHasBeenSet = true; m_existingPolicyDocument = value; }

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline void SetExistingPolicyDocument(Aws::String&& value) { m_existingPolicyDocumentHasBeenSet = true; m_existingPolicyDocument = std::move(value); }

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline void SetExistingPolicyDocument(const char* value) { m_existingPolicyDocumentHasBeenSet = true; m_existingPolicyDocument.assign(value); }

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline CheckNoNewAccessRequest& WithExistingPolicyDocument(const Aws::String& value) { SetExistingPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline CheckNoNewAccessRequest& WithExistingPolicyDocument(Aws::String&& value) { SetExistingPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline CheckNoNewAccessRequest& WithExistingPolicyDocument(const char* value) { SetExistingPolicyDocument(value); return *this;}


    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline const AccessCheckPolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline void SetPolicyType(const AccessCheckPolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline void SetPolicyType(AccessCheckPolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline CheckNoNewAccessRequest& WithPolicyType(const AccessCheckPolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline CheckNoNewAccessRequest& WithPolicyType(AccessCheckPolicyType&& value) { SetPolicyType(std::move(value)); return *this;}

  private:

    Aws::String m_newPolicyDocument;
    bool m_newPolicyDocumentHasBeenSet = false;

    Aws::String m_existingPolicyDocument;
    bool m_existingPolicyDocumentHasBeenSet = false;

    AccessCheckPolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
