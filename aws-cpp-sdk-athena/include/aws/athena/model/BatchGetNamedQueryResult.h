/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_ATHENA_API BatchGetNamedQueryResult
  {
  public:
    BatchGetNamedQueryResult();
    BatchGetNamedQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetNamedQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline const Aws::Vector<NamedQuery>& GetNamedQueries() const{ return m_namedQueries; }

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline void SetNamedQueries(const Aws::Vector<NamedQuery>& value) { m_namedQueries = value; }

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline void SetNamedQueries(Aws::Vector<NamedQuery>&& value) { m_namedQueries = std::move(value); }

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline BatchGetNamedQueryResult& WithNamedQueries(const Aws::Vector<NamedQuery>& value) { SetNamedQueries(value); return *this;}

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline BatchGetNamedQueryResult& WithNamedQueries(Aws::Vector<NamedQuery>&& value) { SetNamedQueries(std::move(value)); return *this;}

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline BatchGetNamedQueryResult& AddNamedQueries(const NamedQuery& value) { m_namedQueries.push_back(value); return *this; }

    /**
     * <p>Information about the named query IDs submitted.</p>
     */
    inline BatchGetNamedQueryResult& AddNamedQueries(NamedQuery&& value) { m_namedQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about provided query IDs.</p>
     */
    inline const Aws::Vector<UnprocessedNamedQueryId>& GetUnprocessedNamedQueryIds() const{ return m_unprocessedNamedQueryIds; }

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline void SetUnprocessedNamedQueryIds(const Aws::Vector<UnprocessedNamedQueryId>& value) { m_unprocessedNamedQueryIds = value; }

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline void SetUnprocessedNamedQueryIds(Aws::Vector<UnprocessedNamedQueryId>&& value) { m_unprocessedNamedQueryIds = std::move(value); }

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline BatchGetNamedQueryResult& WithUnprocessedNamedQueryIds(const Aws::Vector<UnprocessedNamedQueryId>& value) { SetUnprocessedNamedQueryIds(value); return *this;}

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline BatchGetNamedQueryResult& WithUnprocessedNamedQueryIds(Aws::Vector<UnprocessedNamedQueryId>&& value) { SetUnprocessedNamedQueryIds(std::move(value)); return *this;}

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline BatchGetNamedQueryResult& AddUnprocessedNamedQueryIds(const UnprocessedNamedQueryId& value) { m_unprocessedNamedQueryIds.push_back(value); return *this; }

    /**
     * <p>Information about provided query IDs.</p>
     */
    inline BatchGetNamedQueryResult& AddUnprocessedNamedQueryIds(UnprocessedNamedQueryId&& value) { m_unprocessedNamedQueryIds.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NamedQuery> m_namedQueries;

    Aws::Vector<UnprocessedNamedQueryId> m_unprocessedNamedQueryIds;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
