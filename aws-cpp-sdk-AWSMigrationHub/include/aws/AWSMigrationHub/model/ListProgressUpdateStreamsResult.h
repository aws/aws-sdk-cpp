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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/AWSMigrationHub/model/ProgressUpdateStreamSummary.h>
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
  class AWS_MIGRATIONHUB_API ListProgressUpdateStreamsResult
  {
  public:
    ListProgressUpdateStreamsResult();
    ListProgressUpdateStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListProgressUpdateStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline const Aws::Vector<ProgressUpdateStreamSummary>& GetProgressUpdateStreamSummaryList() const{ return m_progressUpdateStreamSummaryList; }

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline void SetProgressUpdateStreamSummaryList(const Aws::Vector<ProgressUpdateStreamSummary>& value) { m_progressUpdateStreamSummaryList = value; }

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline void SetProgressUpdateStreamSummaryList(Aws::Vector<ProgressUpdateStreamSummary>&& value) { m_progressUpdateStreamSummaryList = std::move(value); }

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline ListProgressUpdateStreamsResult& WithProgressUpdateStreamSummaryList(const Aws::Vector<ProgressUpdateStreamSummary>& value) { SetProgressUpdateStreamSummaryList(value); return *this;}

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline ListProgressUpdateStreamsResult& WithProgressUpdateStreamSummaryList(Aws::Vector<ProgressUpdateStreamSummary>&& value) { SetProgressUpdateStreamSummaryList(std::move(value)); return *this;}

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline ListProgressUpdateStreamsResult& AddProgressUpdateStreamSummaryList(const ProgressUpdateStreamSummary& value) { m_progressUpdateStreamSummaryList.push_back(value); return *this; }

    /**
     * <p>List of progress update streams up to the max number of results passed in the
     * input.</p>
     */
    inline ListProgressUpdateStreamsResult& AddProgressUpdateStreamSummaryList(ProgressUpdateStreamSummary&& value) { m_progressUpdateStreamSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListProgressUpdateStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListProgressUpdateStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more streams created than the max result, return the next token
     * to be passed to the next call as a bookmark of where to start from.</p>
     */
    inline ListProgressUpdateStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProgressUpdateStreamSummary> m_progressUpdateStreamSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MigrationHub
} // namespace Aws
