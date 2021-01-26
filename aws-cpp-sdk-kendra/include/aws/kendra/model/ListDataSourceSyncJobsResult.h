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
  class AWS_KENDRA_API ListDataSourceSyncJobsResult
  {
  public:
    ListDataSourceSyncJobsResult();
    ListDataSourceSyncJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDataSourceSyncJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline const Aws::Vector<DataSourceSyncJob>& GetHistory() const{ return m_history; }

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline void SetHistory(const Aws::Vector<DataSourceSyncJob>& value) { m_history = value; }

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline void SetHistory(Aws::Vector<DataSourceSyncJob>&& value) { m_history = std::move(value); }

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline ListDataSourceSyncJobsResult& WithHistory(const Aws::Vector<DataSourceSyncJob>& value) { SetHistory(value); return *this;}

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline ListDataSourceSyncJobsResult& WithHistory(Aws::Vector<DataSourceSyncJob>&& value) { SetHistory(std::move(value)); return *this;}

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline ListDataSourceSyncJobsResult& AddHistory(const DataSourceSyncJob& value) { m_history.push_back(value); return *this; }

    /**
     * <p>A history of synchronization jobs for the data source.</p>
     */
    inline ListDataSourceSyncJobsResult& AddHistory(DataSourceSyncJob&& value) { m_history.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>GetDataSourceSyncJobHistory</code> operation returns a page of
     * vocabularies at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If there are more jobs in the list than the
     * page size, Amazon Kendra returns the NextPage token. Include the token in the
     * next request to the <code>GetDataSourceSyncJobHistory</code> operation to return
     * in the next page of jobs.</p>
     */
    inline ListDataSourceSyncJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSourceSyncJob> m_history;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
