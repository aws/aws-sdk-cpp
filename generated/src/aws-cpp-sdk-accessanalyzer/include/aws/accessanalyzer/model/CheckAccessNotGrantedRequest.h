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
    AWS_ACCESSANALYZER_API CheckAccessNotGrantedRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckAccessNotGranted"; }

    AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The JSON policy document to use as the content for the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    CheckAccessNotGrantedRequest& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An access object containing the permissions that shouldn't be granted by the
     * specified policy. If only actions are specified, IAM Access Analyzer checks for
     * access to peform at least one of the actions on any resource in the policy. If
     * only resources are specified, then IAM Access Analyzer checks for access to
     * perform any action on at least one of the resources. If both actions and
     * resources are specified, IAM Access Analyzer checks for access to perform at
     * least one of the specified actions on at least one of the specified
     * resources.</p>
     */
    inline const Aws::Vector<Access>& GetAccess() const { return m_access; }
    inline bool AccessHasBeenSet() const { return m_accessHasBeenSet; }
    template<typename AccessT = Aws::Vector<Access>>
    void SetAccess(AccessT&& value) { m_accessHasBeenSet = true; m_access = std::forward<AccessT>(value); }
    template<typename AccessT = Aws::Vector<Access>>
    CheckAccessNotGrantedRequest& WithAccess(AccessT&& value) { SetAccess(std::forward<AccessT>(value)); return *this;}
    template<typename AccessT = Access>
    CheckAccessNotGrantedRequest& AddAccess(AccessT&& value) { m_accessHasBeenSet = true; m_access.emplace_back(std::forward<AccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of policy. Identity policies grant permissions to IAM principals.
     * Identity policies include managed and inline policies for IAM roles, users, and
     * groups.</p> <p>Resource policies grant permissions on Amazon Web Services
     * resources. Resource policies include trust policies for IAM roles and bucket
     * policies for Amazon S3 buckets.</p>
     */
    inline AccessCheckPolicyType GetPolicyType() const { return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(AccessCheckPolicyType value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline CheckAccessNotGrantedRequest& WithPolicyType(AccessCheckPolicyType value) { SetPolicyType(value); return *this;}
    ///@}
  private:

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::Vector<Access> m_access;
    bool m_accessHasBeenSet = false;

    AccessCheckPolicyType m_policyType{AccessCheckPolicyType::NOT_SET};
    bool m_policyTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
