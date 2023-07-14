/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/UpgradeHistory.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p> Container for the response returned by the <code> <a>GetUpgradeHistory</a>
   * </code> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/GetUpgradeHistoryResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API GetUpgradeHistoryResult
  {
  public:
    GetUpgradeHistoryResult();
    GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUpgradeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline const Aws::Vector<UpgradeHistory>& GetUpgradeHistories() const{ return m_upgradeHistories; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline void SetUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { m_upgradeHistories = value; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline void SetUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { m_upgradeHistories = std::move(value); }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& WithUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { SetUpgradeHistories(value); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& WithUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { SetUpgradeHistories(std::move(value)); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& AddUpgradeHistories(const UpgradeHistory& value) { m_upgradeHistories.push_back(value); return *this; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * upgrade or upgrade eligibility check performed on a domain returned as part of
     * the <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& AddUpgradeHistories(UpgradeHistory&& value) { m_upgradeHistories.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results.</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UpgradeHistory> m_upgradeHistories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
