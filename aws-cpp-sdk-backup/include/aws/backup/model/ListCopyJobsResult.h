/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/CopyJob.h>
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
namespace Backup
{
namespace Model
{
  class ListCopyJobsResult
  {
  public:
    AWS_BACKUP_API ListCopyJobsResult();
    AWS_BACKUP_API ListCopyJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListCopyJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline const Aws::Vector<CopyJob>& GetCopyJobs() const{ return m_copyJobs; }

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline void SetCopyJobs(const Aws::Vector<CopyJob>& value) { m_copyJobs = value; }

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline void SetCopyJobs(Aws::Vector<CopyJob>&& value) { m_copyJobs = std::move(value); }

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline ListCopyJobsResult& WithCopyJobs(const Aws::Vector<CopyJob>& value) { SetCopyJobs(value); return *this;}

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline ListCopyJobsResult& WithCopyJobs(Aws::Vector<CopyJob>&& value) { SetCopyJobs(std::move(value)); return *this;}

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline ListCopyJobsResult& AddCopyJobs(const CopyJob& value) { m_copyJobs.push_back(value); return *this; }

    /**
     * <p>An array of structures containing metadata about your copy jobs returned in
     * JSON format. </p>
     */
    inline ListCopyJobsResult& AddCopyJobs(CopyJob&& value) { m_copyJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next item following a partial list of returned items. For example, if a
     * request is made to return maxResults number of items, NextToken allows you to
     * return more items in your list starting at the location pointed to by the next
     * token. </p>
     */
    inline ListCopyJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CopyJob> m_copyJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
