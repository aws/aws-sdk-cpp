/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/AccessCheckResourceType.h>
#include <utility>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

  /**
   */
  class CheckNoPublicAccessRequest : public AccessAnalyzerRequest
  {
  public:
    AWS_ACCESSANALYZER_API CheckNoPublicAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckNoPublicAccess"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline CheckNoPublicAccessRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline CheckNoPublicAccessRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON policy document to evaluate for public access.</p>
     */
    inline CheckNoPublicAccessRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline const AccessCheckResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline void SetResourceType(const AccessCheckResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline void SetResourceType(AccessCheckResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline CheckNoPublicAccessRequest& WithResourceType(const AccessCheckResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to evaluate for public access. For example, to check for
     * public access to Amazon S3 buckets, you can choose <code>AWS::S3::Bucket</code>
     * for the resource type.</p> <p>For resource types not supported as valid values,
     * IAM Access Analyzer will return an error.</p>
     */
    inline CheckNoPublicAccessRequest& WithResourceType(AccessCheckResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    AccessCheckResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
