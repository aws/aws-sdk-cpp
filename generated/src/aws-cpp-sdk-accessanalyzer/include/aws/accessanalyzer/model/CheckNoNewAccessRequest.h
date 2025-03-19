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
    AWS_ACCESSANALYZER_API CheckNoNewAccessRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckNoNewAccess"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The JSON policy document to use as the content for the updated policy.</p>
     */
    inline const Aws::String& GetNewPolicyDocument() const { return m_newPolicyDocument; }
    inline bool NewPolicyDocumentHasBeenSet() const { return m_newPolicyDocumentHasBeenSet; }
    template<typename NewPolicyDocumentT = Aws::String>
    void SetNewPolicyDocument(NewPolicyDocumentT&& value) { m_newPolicyDocumentHasBeenSet = true; m_newPolicyDocument = std::forward<NewPolicyDocumentT>(value); }
    template<typename NewPolicyDocumentT = Aws::String>
    CheckNoNewAccessRequest& WithNewPolicyDocument(NewPolicyDocumentT&& value) { SetNewPolicyDocument(std::forward<NewPolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON policy document to use as the content for the existing policy.</p>
     */
    inline const Aws::String& GetExistingPolicyDocument() const { return m_existingPolicyDocument; }
    inline bool ExistingPolicyDocumentHasBeenSet() const { return m_existingPolicyDocumentHasBeenSet; }
    template<typename ExistingPolicyDocumentT = Aws::String>
    void SetExistingPolicyDocument(ExistingPolicyDocumentT&& value) { m_existingPolicyDocumentHasBeenSet = true; m_existingPolicyDocument = std::forward<ExistingPolicyDocumentT>(value); }
    template<typename ExistingPolicyDocumentT = Aws::String>
    CheckNoNewAccessRequest& WithExistingPolicyDocument(ExistingPolicyDocumentT&& value) { SetExistingPolicyDocument(std::forward<ExistingPolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of policy to compare. Identity policies grant permissions to IAM
     * principals. Identity policies include managed and inline policies for IAM roles,
     * users, and groups.</p> <p>Resource policies grant permissions on Amazon Web
     * Services resources. Resource policies include trust policies for IAM roles and
     * bucket policies for Amazon S3 buckets. You can provide a generic input such as
     * identity policy or resource policy or a specific input such as managed policy or
     * Amazon S3 bucket policy.</p>
     */
    inline AccessCheckPolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(AccessCheckPolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline CheckNoNewAccessRequest& WithPolicyType(AccessCheckPolicyType value) { SetPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_newPolicyDocument;
    bool m_newPolicyDocumentHasBeenSet = false;

    Aws::String m_existingPolicyDocument;
    bool m_existingPolicyDocumentHasBeenSet = false;

    AccessCheckPolicyType m_policyType{AccessCheckPolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
