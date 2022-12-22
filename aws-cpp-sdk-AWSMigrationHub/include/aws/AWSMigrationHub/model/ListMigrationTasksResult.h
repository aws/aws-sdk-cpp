/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/AWSMigrationHub/MigrationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/AWSMigrationHub/model/MigrationTaskSummary.h>
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
namespace MigrationHub
{
namespace Model
{
  class ListMigrationTasksResult
  {
  public:
    AWS_MIGRATIONHUB_API ListMigrationTasksResult();
    AWS_MIGRATIONHUB_API ListMigrationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUB_API ListMigrationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListMigrationTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListMigrationTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more migration tasks than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListMigrationTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline const Aws::Vector<MigrationTaskSummary>& GetMigrationTaskSummaryList() const{ return m_migrationTaskSummaryList; }

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline void SetMigrationTaskSummaryList(const Aws::Vector<MigrationTaskSummary>& value) { m_migrationTaskSummaryList = value; }

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline void SetMigrationTaskSummaryList(Aws::Vector<MigrationTaskSummary>&& value) { m_migrationTaskSummaryList = std::move(value); }

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline ListMigrationTasksResult& WithMigrationTaskSummaryList(const Aws::Vector<MigrationTaskSummary>& value) { SetMigrationTaskSummaryList(value); return *this;}

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline ListMigrationTasksResult& WithMigrationTaskSummaryList(Aws::Vector<MigrationTaskSummary>&& value) { SetMigrationTaskSummaryList(std::move(value)); return *this;}

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline ListMigrationTasksResult& AddMigrationTaskSummaryList(const MigrationTaskSummary& value) { m_migrationTaskSummaryList.push_back(value); return *this; }

    /**
     * <p>Lists the migration task's summary which includes:
     * <code>MigrationTaskName</code>, <code>ProgressPercent</code>,
     * <code>ProgressUpdateStream</code>, <code>Status</code>, and the
     * <code>UpdateDateTime</code> for each task.</p>
     */
    inline ListMigrationTasksResult& AddMigrationTaskSummaryList(MigrationTaskSummary&& value) { m_migrationTaskSummaryList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<MigrationTaskSummary> m_migrationTaskSummaryList;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
