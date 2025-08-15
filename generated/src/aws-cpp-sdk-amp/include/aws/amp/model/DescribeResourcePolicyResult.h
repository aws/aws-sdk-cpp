/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amp/model/WorkspacePolicyStatusCode.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PrometheusService
{
namespace Model
{
  class DescribeResourcePolicyResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API DescribeResourcePolicyResult() = default;
    AWS_PROMETHEUSSERVICE_API DescribeResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API DescribeResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The JSON policy document for the resource-based policy attached to the
     * workspace.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    DescribeResourcePolicyResult& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the resource-based policy.</p>
     */
    inline WorkspacePolicyStatusCode GetPolicyStatus() const { return m_policyStatus; }
    inline void SetPolicyStatus(WorkspacePolicyStatusCode value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline DescribeResourcePolicyResult& WithPolicyStatus(WorkspacePolicyStatusCode value) { SetPolicyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID of the current resource-based policy.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    DescribeResourcePolicyResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    WorkspacePolicyStatusCode m_policyStatus{WorkspacePolicyStatusCode::NOT_SET};
    bool m_policyStatusHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
