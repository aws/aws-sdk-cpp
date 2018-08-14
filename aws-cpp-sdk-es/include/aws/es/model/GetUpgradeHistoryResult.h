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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/UpgradeHistory.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>GetUpgradeHistory</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistoryResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult
  {
  public:
    GetUpgradeHistoryResult();
    GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetUpgradeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline const Aws::Vector<UpgradeHistory>& GetUpgradeHistories() const{ return m_upgradeHistories; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline void SetUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { m_upgradeHistories = value; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline void SetUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { m_upgradeHistories = std::move(value); }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& WithUpgradeHistories(const Aws::Vector<UpgradeHistory>& value) { SetUpgradeHistories(value); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& WithUpgradeHistories(Aws::Vector<UpgradeHistory>&& value) { SetUpgradeHistories(std::move(value)); return *this;}

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& AddUpgradeHistories(const UpgradeHistory& value) { m_upgradeHistories.push_back(value); return *this; }

    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline GetUpgradeHistoryResult& AddUpgradeHistories(UpgradeHistory&& value) { m_upgradeHistories.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline GetUpgradeHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UpgradeHistory> m_upgradeHistories;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
