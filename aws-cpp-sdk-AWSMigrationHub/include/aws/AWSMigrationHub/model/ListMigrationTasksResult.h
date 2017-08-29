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
  class AWS_MIGRATIONHUB_API ListMigrationTasksResult
  {
  public:
    ListMigrationTasksResult();
    ListMigrationTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMigrationTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
