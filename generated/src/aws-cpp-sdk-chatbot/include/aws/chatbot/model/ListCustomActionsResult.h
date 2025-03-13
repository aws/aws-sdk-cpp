/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
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
namespace chatbot
{
namespace Model
{
  class ListCustomActionsResult
  {
  public:
    AWS_CHATBOT_API ListCustomActionsResult() = default;
    AWS_CHATBOT_API ListCustomActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListCustomActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of custom actions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomActions() const { return m_customActions; }
    template<typename CustomActionsT = Aws::Vector<Aws::String>>
    void SetCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions = std::forward<CustomActionsT>(value); }
    template<typename CustomActionsT = Aws::Vector<Aws::String>>
    ListCustomActionsResult& WithCustomActions(CustomActionsT&& value) { SetCustomActions(std::forward<CustomActionsT>(value)); return *this;}
    template<typename CustomActionsT = Aws::String>
    ListCustomActionsResult& AddCustomActions(CustomActionsT&& value) { m_customActionsHasBeenSet = true; m_customActions.emplace_back(std::forward<CustomActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_customActions;
    bool m_customActionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
