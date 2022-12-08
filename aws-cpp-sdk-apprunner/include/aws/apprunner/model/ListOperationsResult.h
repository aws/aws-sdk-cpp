/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/OperationSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListOperationsResult
  {
  public:
    AWS_APPRUNNER_API ListOperationsResult();
    AWS_APPRUNNER_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperationSummaryList() const{ return m_operationSummaryList; }

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetOperationSummaryList(const Aws::Vector<OperationSummary>& value) { m_operationSummaryList = value; }

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline void SetOperationSummaryList(Aws::Vector<OperationSummary>&& value) { m_operationSummaryList = std::move(value); }

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListOperationsResult& WithOperationSummaryList(const Aws::Vector<OperationSummary>& value) { SetOperationSummaryList(value); return *this;}

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListOperationsResult& WithOperationSummaryList(Aws::Vector<OperationSummary>&& value) { SetOperationSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListOperationsResult& AddOperationSummaryList(const OperationSummary& value) { m_operationSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline ListOperationsResult& AddOperationSummaryList(OperationSummary&& value) { m_operationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline ListOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OperationSummary> m_operationSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
