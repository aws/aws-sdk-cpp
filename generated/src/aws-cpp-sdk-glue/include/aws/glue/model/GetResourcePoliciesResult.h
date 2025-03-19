/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/GluePolicy.h>
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
namespace Glue
{
namespace Model
{
  class GetResourcePoliciesResult
  {
  public:
    AWS_GLUE_API GetResourcePoliciesResult() = default;
    AWS_GLUE_API GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the individual resource policies and the account-level resource
     * policy.</p>
     */
    inline const Aws::Vector<GluePolicy>& GetGetResourcePoliciesResponseList() const { return m_getResourcePoliciesResponseList; }
    template<typename GetResourcePoliciesResponseListT = Aws::Vector<GluePolicy>>
    void SetGetResourcePoliciesResponseList(GetResourcePoliciesResponseListT&& value) { m_getResourcePoliciesResponseListHasBeenSet = true; m_getResourcePoliciesResponseList = std::forward<GetResourcePoliciesResponseListT>(value); }
    template<typename GetResourcePoliciesResponseListT = Aws::Vector<GluePolicy>>
    GetResourcePoliciesResult& WithGetResourcePoliciesResponseList(GetResourcePoliciesResponseListT&& value) { SetGetResourcePoliciesResponseList(std::forward<GetResourcePoliciesResponseListT>(value)); return *this;}
    template<typename GetResourcePoliciesResponseListT = GluePolicy>
    GetResourcePoliciesResult& AddGetResourcePoliciesResponseList(GetResourcePoliciesResponseListT&& value) { m_getResourcePoliciesResponseListHasBeenSet = true; m_getResourcePoliciesResponseList.emplace_back(std::forward<GetResourcePoliciesResponseListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last resource
     * policy available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourcePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GluePolicy> m_getResourcePoliciesResponseList;
    bool m_getResourcePoliciesResponseListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
