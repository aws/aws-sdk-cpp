/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{
  class GenerateQueryResult
  {
  public:
    AWS_CLOUDTRAIL_API GenerateQueryResult() = default;
    AWS_CLOUDTRAIL_API GenerateQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GenerateQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The SQL query statement generated from the prompt. </p>
     */
    inline const Aws::String& GetQueryStatement() const { return m_queryStatement; }
    template<typename QueryStatementT = Aws::String>
    void SetQueryStatement(QueryStatementT&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::forward<QueryStatementT>(value); }
    template<typename QueryStatementT = Aws::String>
    GenerateQueryResult& WithQueryStatement(QueryStatementT&& value) { SetQueryStatement(std::forward<QueryStatementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An alias that identifies the prompt. When you run the
     * <code>StartQuery</code> operation, you can pass in either the
     * <code>QueryAlias</code> or <code>QueryStatement</code> parameter. </p>
     */
    inline const Aws::String& GetQueryAlias() const { return m_queryAlias; }
    template<typename QueryAliasT = Aws::String>
    void SetQueryAlias(QueryAliasT&& value) { m_queryAliasHasBeenSet = true; m_queryAlias = std::forward<QueryAliasT>(value); }
    template<typename QueryAliasT = Aws::String>
    GenerateQueryResult& WithQueryAlias(QueryAliasT&& value) { SetQueryAlias(std::forward<QueryAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const { return m_eventDataStoreOwnerAccountId; }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    void SetEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = std::forward<EventDataStoreOwnerAccountIdT>(value); }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    GenerateQueryResult& WithEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { SetEventDataStoreOwnerAccountId(std::forward<EventDataStoreOwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_queryAlias;
    bool m_queryAliasHasBeenSet = false;

    Aws::String m_eventDataStoreOwnerAccountId;
    bool m_eventDataStoreOwnerAccountIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
