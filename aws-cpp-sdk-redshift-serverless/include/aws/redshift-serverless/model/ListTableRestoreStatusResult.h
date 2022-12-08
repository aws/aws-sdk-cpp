/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/TableRestoreStatus.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListTableRestoreStatusResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult();
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListTableRestoreStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline ListTableRestoreStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline ListTableRestoreStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListTableRestoreStatus</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * following <code>ListTableRestoreStatus</code> operations. This will returns
     * results on the next page.</p>
     */
    inline ListTableRestoreStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline const Aws::Vector<TableRestoreStatus>& GetTableRestoreStatuses() const{ return m_tableRestoreStatuses; }

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline void SetTableRestoreStatuses(const Aws::Vector<TableRestoreStatus>& value) { m_tableRestoreStatuses = value; }

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline void SetTableRestoreStatuses(Aws::Vector<TableRestoreStatus>&& value) { m_tableRestoreStatuses = std::move(value); }

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline ListTableRestoreStatusResult& WithTableRestoreStatuses(const Aws::Vector<TableRestoreStatus>& value) { SetTableRestoreStatuses(value); return *this;}

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline ListTableRestoreStatusResult& WithTableRestoreStatuses(Aws::Vector<TableRestoreStatus>&& value) { SetTableRestoreStatuses(std::move(value)); return *this;}

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline ListTableRestoreStatusResult& AddTableRestoreStatuses(const TableRestoreStatus& value) { m_tableRestoreStatuses.push_back(value); return *this; }

    /**
     * <p>The array of returned <code>TableRestoreStatus</code> objects.</p>
     */
    inline ListTableRestoreStatusResult& AddTableRestoreStatuses(TableRestoreStatus&& value) { m_tableRestoreStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TableRestoreStatus> m_tableRestoreStatuses;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
