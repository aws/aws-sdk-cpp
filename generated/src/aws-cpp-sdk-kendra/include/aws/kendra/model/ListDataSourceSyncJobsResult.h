/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/DataSourceSyncJob.h>
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
namespace kendra
{
namespace Model
{
  class ListDataSourceSyncJobsResult
  {
  public:
    AWS_KENDRA_API ListDataSourceSyncJobsResult();
    AWS_KENDRA_API ListDataSourceSyncJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListDataSourceSyncJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline const Aws::Vector<DataSourceSyncJob>& GetHistory() const{ return m_history; }

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline void SetHistory(const Aws::Vector<DataSourceSyncJob>& value) { m_history = value; }

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline void SetHistory(Aws::Vector<DataSourceSyncJob>&& value) { m_history = std::move(value); }

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline ListDataSourceSyncJobsResult& WithHistory(const Aws::Vector<DataSourceSyncJob>& value) { SetHistory(value); return *this;}

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline ListDataSourceSyncJobsResult& WithHistory(Aws::Vector<DataSourceSyncJob>&& value) { SetHistory(std::move(value)); return *this;}

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline ListDataSourceSyncJobsResult& AddHistory(const DataSourceSyncJob& value) { m_history.push_back(value); return *this; }

    /**
     * <p>A history of synchronization jobs for the data source connector.</p>
     */
    inline ListDataSourceSyncJobsResult& AddHistory(DataSourceSyncJob&& value) { m_history.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSourceSyncJob> m_history;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
