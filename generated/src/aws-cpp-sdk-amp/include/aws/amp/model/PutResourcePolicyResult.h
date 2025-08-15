/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/WorkspacePolicyStatusCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutResourcePolicyResult
  {
  public:
    AWS_PROMETHEUSSERVICE_API PutResourcePolicyResult() = default;
    AWS_PROMETHEUSSERVICE_API PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROMETHEUSSERVICE_API PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The current status of the resource-based policy.</p>
     */
    inline WorkspacePolicyStatusCode GetPolicyStatus() const { return m_policyStatus; }
    inline void SetPolicyStatus(WorkspacePolicyStatusCode value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline PutResourcePolicyResult& WithPolicyStatus(WorkspacePolicyStatusCode value) { SetPolicyStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision ID of the newly created or updated resource-based policy.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    PutResourcePolicyResult& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutResourcePolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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
