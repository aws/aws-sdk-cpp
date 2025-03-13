/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Cloud9
{
namespace Model
{
  class ListEnvironmentsResult
  {
  public:
    AWS_CLOUD9_API ListEnvironmentsResult() = default;
    AWS_CLOUD9_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more than 25 items in the list, only the first 25 items are
     * returned, along with a unique string called a <i>next token</i>. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of environment identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentIds() const { return m_environmentIds; }
    template<typename EnvironmentIdsT = Aws::Vector<Aws::String>>
    void SetEnvironmentIds(EnvironmentIdsT&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = std::forward<EnvironmentIdsT>(value); }
    template<typename EnvironmentIdsT = Aws::Vector<Aws::String>>
    ListEnvironmentsResult& WithEnvironmentIds(EnvironmentIdsT&& value) { SetEnvironmentIds(std::forward<EnvironmentIdsT>(value)); return *this;}
    template<typename EnvironmentIdsT = Aws::String>
    ListEnvironmentsResult& AddEnvironmentIds(EnvironmentIdsT&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.emplace_back(std::forward<EnvironmentIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_environmentIds;
    bool m_environmentIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
