/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListObjectPoliciesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectPoliciesResult() = default;
    AWS_CLOUDDIRECTORY_API ListObjectPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of policy <code>ObjectIdentifiers</code>, that are attached to the
     * object.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttachedPolicyIds() const { return m_attachedPolicyIds; }
    template<typename AttachedPolicyIdsT = Aws::Vector<Aws::String>>
    void SetAttachedPolicyIds(AttachedPolicyIdsT&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds = std::forward<AttachedPolicyIdsT>(value); }
    template<typename AttachedPolicyIdsT = Aws::Vector<Aws::String>>
    ListObjectPoliciesResult& WithAttachedPolicyIds(AttachedPolicyIdsT&& value) { SetAttachedPolicyIds(std::forward<AttachedPolicyIdsT>(value)); return *this;}
    template<typename AttachedPolicyIdsT = Aws::String>
    ListObjectPoliciesResult& AddAttachedPolicyIds(AttachedPolicyIdsT&& value) { m_attachedPolicyIdsHasBeenSet = true; m_attachedPolicyIds.emplace_back(std::forward<AttachedPolicyIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObjectPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_attachedPolicyIds;
    bool m_attachedPolicyIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
