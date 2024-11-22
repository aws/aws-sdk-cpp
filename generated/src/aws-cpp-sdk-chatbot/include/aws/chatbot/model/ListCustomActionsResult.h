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
    AWS_CHATBOT_API ListCustomActionsResult();
    AWS_CHATBOT_API ListCustomActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API ListCustomActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of custom actions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomActions() const{ return m_customActions; }
    inline void SetCustomActions(const Aws::Vector<Aws::String>& value) { m_customActions = value; }
    inline void SetCustomActions(Aws::Vector<Aws::String>&& value) { m_customActions = std::move(value); }
    inline ListCustomActionsResult& WithCustomActions(const Aws::Vector<Aws::String>& value) { SetCustomActions(value); return *this;}
    inline ListCustomActionsResult& WithCustomActions(Aws::Vector<Aws::String>&& value) { SetCustomActions(std::move(value)); return *this;}
    inline ListCustomActionsResult& AddCustomActions(const Aws::String& value) { m_customActions.push_back(value); return *this; }
    inline ListCustomActionsResult& AddCustomActions(Aws::String&& value) { m_customActions.push_back(std::move(value)); return *this; }
    inline ListCustomActionsResult& AddCustomActions(const char* value) { m_customActions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCustomActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCustomActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCustomActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCustomActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCustomActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCustomActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_customActions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
