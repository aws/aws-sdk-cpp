﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/NamedQuery.h>
#include <aws/athena/model/UnprocessedNamedQueryId.h>
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
namespace Athena
{
namespace Model
{
  class BatchGetNamedQueryResult
  {
  public:
    AWS_ATHENA_API BatchGetNamedQueryResult();
    AWS_ATHENA_API BatchGetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ATHENA_API BatchGetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline const Aws::Vector<NamedQuery>& GetNamedQueries() const{ return m_namedQueries; }
    inline void SetNamedQueries(const Aws::Vector<NamedQuery>& value) { m_namedQueries = value; }
    inline void SetNamedQueries(Aws::Vector<NamedQuery>&& value) { m_namedQueries = std::move(value); }
    inline BatchGetNamedQueryResult& WithNamedQueries(const Aws::Vector<NamedQuery>& value) { SetNamedQueries(value); return *this;}
    inline BatchGetNamedQueryResult& WithNamedQueries(Aws::Vector<NamedQuery>&& value) { SetNamedQueries(std::move(value)); return *this;}
    inline BatchGetNamedQueryResult& AddNamedQueries(const NamedQuery& value) { m_namedQueries.push_back(value); return *this; }
    inline BatchGetNamedQueryResult& AddNamedQueries(NamedQuery&& value) { m_namedQueries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about provided query IDs.</p>
     */
    inline const Aws::Vector<UnprocessedNamedQueryId>& GetUnprocessedNamedQueryIds() const{ return m_unprocessedNamedQueryIds; }
    inline void SetUnprocessedNamedQueryIds(const Aws::Vector<UnprocessedNamedQueryId>& value) { m_unprocessedNamedQueryIds = value; }
    inline void SetUnprocessedNamedQueryIds(Aws::Vector<UnprocessedNamedQueryId>&& value) { m_unprocessedNamedQueryIds = std::move(value); }
    inline BatchGetNamedQueryResult& WithUnprocessedNamedQueryIds(const Aws::Vector<UnprocessedNamedQueryId>& value) { SetUnprocessedNamedQueryIds(value); return *this;}
    inline BatchGetNamedQueryResult& WithUnprocessedNamedQueryIds(Aws::Vector<UnprocessedNamedQueryId>&& value) { SetUnprocessedNamedQueryIds(std::move(value)); return *this;}
    inline BatchGetNamedQueryResult& AddUnprocessedNamedQueryIds(const UnprocessedNamedQueryId& value) { m_unprocessedNamedQueryIds.push_back(value); return *this; }
    inline BatchGetNamedQueryResult& AddUnprocessedNamedQueryIds(UnprocessedNamedQueryId&& value) { m_unprocessedNamedQueryIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetNamedQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetNamedQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetNamedQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NamedQuery> m_namedQueries;

    Aws::Vector<UnprocessedNamedQueryId> m_unprocessedNamedQueryIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
