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
    AWS_CLOUDTRAIL_API GenerateQueryResult();
    AWS_CLOUDTRAIL_API GenerateQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GenerateQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The SQL query statement generated from the prompt. </p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatement = value; }
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatement = std::move(value); }
    inline void SetQueryStatement(const char* value) { m_queryStatement.assign(value); }
    inline GenerateQueryResult& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline GenerateQueryResult& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline GenerateQueryResult& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An alias that identifies the prompt. When you run the
     * <code>StartQuery</code> operation, you can pass in either the
     * <code>QueryAlias</code> or <code>QueryStatement</code> parameter. </p>
     */
    inline const Aws::String& GetQueryAlias() const{ return m_queryAlias; }
    inline void SetQueryAlias(const Aws::String& value) { m_queryAlias = value; }
    inline void SetQueryAlias(Aws::String&& value) { m_queryAlias = std::move(value); }
    inline void SetQueryAlias(const char* value) { m_queryAlias.assign(value); }
    inline GenerateQueryResult& WithQueryAlias(const Aws::String& value) { SetQueryAlias(value); return *this;}
    inline GenerateQueryResult& WithQueryAlias(Aws::String&& value) { SetQueryAlias(std::move(value)); return *this;}
    inline GenerateQueryResult& WithQueryAlias(const char* value) { SetQueryAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const{ return m_eventDataStoreOwnerAccountId; }
    inline void SetEventDataStoreOwnerAccountId(const Aws::String& value) { m_eventDataStoreOwnerAccountId = value; }
    inline void SetEventDataStoreOwnerAccountId(Aws::String&& value) { m_eventDataStoreOwnerAccountId = std::move(value); }
    inline void SetEventDataStoreOwnerAccountId(const char* value) { m_eventDataStoreOwnerAccountId.assign(value); }
    inline GenerateQueryResult& WithEventDataStoreOwnerAccountId(const Aws::String& value) { SetEventDataStoreOwnerAccountId(value); return *this;}
    inline GenerateQueryResult& WithEventDataStoreOwnerAccountId(Aws::String&& value) { SetEventDataStoreOwnerAccountId(std::move(value)); return *this;}
    inline GenerateQueryResult& WithEventDataStoreOwnerAccountId(const char* value) { SetEventDataStoreOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_queryStatement;

    Aws::String m_queryAlias;

    Aws::String m_eventDataStoreOwnerAccountId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
