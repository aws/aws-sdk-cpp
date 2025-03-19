/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/PolicyToPath.h>
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
  class LookupPolicyResult
  {
  public:
    AWS_CLOUDDIRECTORY_API LookupPolicyResult() = default;
    AWS_CLOUDDIRECTORY_API LookupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API LookupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides list of path to policies. Policies contain <code>PolicyId</code>,
     * <code>ObjectIdentifier</code>, and <code>PolicyType</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/key_concepts_directory.html#key_concepts_policies">Policies</a>.</p>
     */
    inline const Aws::Vector<PolicyToPath>& GetPolicyToPathList() const { return m_policyToPathList; }
    template<typename PolicyToPathListT = Aws::Vector<PolicyToPath>>
    void SetPolicyToPathList(PolicyToPathListT&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList = std::forward<PolicyToPathListT>(value); }
    template<typename PolicyToPathListT = Aws::Vector<PolicyToPath>>
    LookupPolicyResult& WithPolicyToPathList(PolicyToPathListT&& value) { SetPolicyToPathList(std::forward<PolicyToPathListT>(value)); return *this;}
    template<typename PolicyToPathListT = PolicyToPath>
    LookupPolicyResult& AddPolicyToPathList(PolicyToPathListT&& value) { m_policyToPathListHasBeenSet = true; m_policyToPathList.emplace_back(std::forward<PolicyToPathListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    LookupPolicyResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    LookupPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyToPath> m_policyToPathList;
    bool m_policyToPathListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
