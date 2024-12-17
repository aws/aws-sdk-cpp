/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/SearchScopeSummary.h>
#include <aws/backupsearch/model/CurrentSearchProgress.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backupsearch/model/SearchJobState.h>
#include <aws/backupsearch/model/SearchScope.h>
#include <aws/backupsearch/model/ItemFilters.h>
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
namespace BackupSearch
{
namespace Model
{
  class GetSearchJobResult
  {
  public:
    AWS_BACKUPSEARCH_API GetSearchJobResult();
    AWS_BACKUPSEARCH_API GetSearchJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API GetSearchJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returned name of the specified search job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetSearchJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetSearchJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetSearchJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned summary of the specified search job scope, including: </p> <ul> <li>
     * <p>TotalBackupsToScanCount, the number of recovery points returned by the
     * search.</p> </li> <li> <p>TotalItemsToScanCount, the number of items returned by
     * the search.</p> </li> </ul>
     */
    inline const SearchScopeSummary& GetSearchScopeSummary() const{ return m_searchScopeSummary; }
    inline void SetSearchScopeSummary(const SearchScopeSummary& value) { m_searchScopeSummary = value; }
    inline void SetSearchScopeSummary(SearchScopeSummary&& value) { m_searchScopeSummary = std::move(value); }
    inline GetSearchJobResult& WithSearchScopeSummary(const SearchScopeSummary& value) { SetSearchScopeSummary(value); return *this;}
    inline GetSearchJobResult& WithSearchScopeSummary(SearchScopeSummary&& value) { SetSearchScopeSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns numbers representing BackupsScannedCount, ItemsScanned, and
     * ItemsMatched.</p>
     */
    inline const CurrentSearchProgress& GetCurrentSearchProgress() const{ return m_currentSearchProgress; }
    inline void SetCurrentSearchProgress(const CurrentSearchProgress& value) { m_currentSearchProgress = value; }
    inline void SetCurrentSearchProgress(CurrentSearchProgress&& value) { m_currentSearchProgress = std::move(value); }
    inline GetSearchJobResult& WithCurrentSearchProgress(const CurrentSearchProgress& value) { SetCurrentSearchProgress(value); return *this;}
    inline GetSearchJobResult& WithCurrentSearchProgress(CurrentSearchProgress&& value) { SetCurrentSearchProgress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message will be returned for either a earch job with a status of
     * <code>ERRORED</code> or a status of <code>COMPLETED</code> jobs with issues.</p>
     * <p>For example, a message may say that a search contained recovery points unable
     * to be scanned because of a permissions issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetSearchJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetSearchJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetSearchJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the specified search job.</p> <p>Example:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }
    inline GetSearchJobResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline GetSearchJobResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline GetSearchJobResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a search job completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }
    inline GetSearchJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline GetSearchJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the specified search job.</p> <p>A search job may have
     * one of the following statuses: <code>RUNNING</code>; <code>COMPLETED</code>;
     * <code>STOPPED</code>; <code>FAILED</code>; <code>TIMED_OUT</code>; or
     * <code>EXPIRED</code> .</p>
     */
    inline const SearchJobState& GetStatus() const{ return m_status; }
    inline void SetStatus(const SearchJobState& value) { m_status = value; }
    inline void SetStatus(SearchJobState&& value) { m_status = std::move(value); }
    inline GetSearchJobResult& WithStatus(const SearchJobState& value) { SetStatus(value); return *this;}
    inline GetSearchJobResult& WithStatus(SearchJobState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search scope is all backup properties input into a search.</p>
     */
    inline const SearchScope& GetSearchScope() const{ return m_searchScope; }
    inline void SetSearchScope(const SearchScope& value) { m_searchScope = value; }
    inline void SetSearchScope(SearchScope&& value) { m_searchScope = std::move(value); }
    inline GetSearchJobResult& WithSearchScope(const SearchScope& value) { SetSearchScope(value); return *this;}
    inline GetSearchJobResult& WithSearchScope(SearchScope&& value) { SetSearchScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Item Filters represent all input item properties specified when the search
     * was created.</p>
     */
    inline const ItemFilters& GetItemFilters() const{ return m_itemFilters; }
    inline void SetItemFilters(const ItemFilters& value) { m_itemFilters = value; }
    inline void SetItemFilters(ItemFilters&& value) { m_itemFilters = std::move(value); }
    inline GetSearchJobResult& WithItemFilters(const ItemFilters& value) { SetItemFilters(value); return *this;}
    inline GetSearchJobResult& WithItemFilters(ItemFilters&& value) { SetItemFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a search job was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetSearchJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetSearchJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the specified search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const{ return m_searchJobIdentifier; }
    inline void SetSearchJobIdentifier(const Aws::String& value) { m_searchJobIdentifier = value; }
    inline void SetSearchJobIdentifier(Aws::String&& value) { m_searchJobIdentifier = std::move(value); }
    inline void SetSearchJobIdentifier(const char* value) { m_searchJobIdentifier.assign(value); }
    inline GetSearchJobResult& WithSearchJobIdentifier(const Aws::String& value) { SetSearchJobIdentifier(value); return *this;}
    inline GetSearchJobResult& WithSearchJobIdentifier(Aws::String&& value) { SetSearchJobIdentifier(std::move(value)); return *this;}
    inline GetSearchJobResult& WithSearchJobIdentifier(const char* value) { SetSearchJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const{ return m_searchJobArn; }
    inline void SetSearchJobArn(const Aws::String& value) { m_searchJobArn = value; }
    inline void SetSearchJobArn(Aws::String&& value) { m_searchJobArn = std::move(value); }
    inline void SetSearchJobArn(const char* value) { m_searchJobArn.assign(value); }
    inline GetSearchJobResult& WithSearchJobArn(const Aws::String& value) { SetSearchJobArn(value); return *this;}
    inline GetSearchJobResult& WithSearchJobArn(Aws::String&& value) { SetSearchJobArn(std::move(value)); return *this;}
    inline GetSearchJobResult& WithSearchJobArn(const char* value) { SetSearchJobArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSearchJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSearchJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSearchJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    SearchScopeSummary m_searchScopeSummary;

    CurrentSearchProgress m_currentSearchProgress;

    Aws::String m_statusMessage;

    Aws::String m_encryptionKeyArn;

    Aws::Utils::DateTime m_completionTime;

    SearchJobState m_status;

    SearchScope m_searchScope;

    ItemFilters m_itemFilters;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_searchJobIdentifier;

    Aws::String m_searchJobArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
