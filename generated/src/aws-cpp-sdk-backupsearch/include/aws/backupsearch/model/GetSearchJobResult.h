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
    AWS_BACKUPSEARCH_API GetSearchJobResult() = default;
    AWS_BACKUPSEARCH_API GetSearchJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSEARCH_API GetSearchJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returned name of the specified search job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetSearchJobResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned summary of the specified search job scope, including: </p> <ul> <li>
     * <p>TotalBackupsToScanCount, the number of recovery points returned by the
     * search.</p> </li> <li> <p>TotalItemsToScanCount, the number of items returned by
     * the search.</p> </li> </ul>
     */
    inline const SearchScopeSummary& GetSearchScopeSummary() const { return m_searchScopeSummary; }
    template<typename SearchScopeSummaryT = SearchScopeSummary>
    void SetSearchScopeSummary(SearchScopeSummaryT&& value) { m_searchScopeSummaryHasBeenSet = true; m_searchScopeSummary = std::forward<SearchScopeSummaryT>(value); }
    template<typename SearchScopeSummaryT = SearchScopeSummary>
    GetSearchJobResult& WithSearchScopeSummary(SearchScopeSummaryT&& value) { SetSearchScopeSummary(std::forward<SearchScopeSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns numbers representing BackupsScannedCount, ItemsScanned, and
     * ItemsMatched.</p>
     */
    inline const CurrentSearchProgress& GetCurrentSearchProgress() const { return m_currentSearchProgress; }
    template<typename CurrentSearchProgressT = CurrentSearchProgress>
    void SetCurrentSearchProgress(CurrentSearchProgressT&& value) { m_currentSearchProgressHasBeenSet = true; m_currentSearchProgress = std::forward<CurrentSearchProgressT>(value); }
    template<typename CurrentSearchProgressT = CurrentSearchProgress>
    GetSearchJobResult& WithCurrentSearchProgress(CurrentSearchProgressT&& value) { SetCurrentSearchProgress(std::forward<CurrentSearchProgressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message will be returned for either a earch job with a status of
     * <code>ERRORED</code> or a status of <code>COMPLETED</code> jobs with issues.</p>
     * <p>For example, a message may say that a search contained recovery points unable
     * to be scanned because of a permissions issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSearchJobResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the specified search job.</p> <p>Example:
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    GetSearchJobResult& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a search job completed, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CompletionTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    GetSearchJobResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the specified search job.</p> <p>A search job may have
     * one of the following statuses: <code>RUNNING</code>; <code>COMPLETED</code>;
     * <code>STOPPED</code>; <code>FAILED</code>; <code>TIMED_OUT</code>; or
     * <code>EXPIRED</code> .</p>
     */
    inline SearchJobState GetStatus() const { return m_status; }
    inline void SetStatus(SearchJobState value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSearchJobResult& WithStatus(SearchJobState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The search scope is all backup properties input into a search.</p>
     */
    inline const SearchScope& GetSearchScope() const { return m_searchScope; }
    template<typename SearchScopeT = SearchScope>
    void SetSearchScope(SearchScopeT&& value) { m_searchScopeHasBeenSet = true; m_searchScope = std::forward<SearchScopeT>(value); }
    template<typename SearchScopeT = SearchScope>
    GetSearchJobResult& WithSearchScope(SearchScopeT&& value) { SetSearchScope(std::forward<SearchScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Item Filters represent all input item properties specified when the search
     * was created.</p>
     */
    inline const ItemFilters& GetItemFilters() const { return m_itemFilters; }
    template<typename ItemFiltersT = ItemFilters>
    void SetItemFilters(ItemFiltersT&& value) { m_itemFiltersHasBeenSet = true; m_itemFilters = std::forward<ItemFiltersT>(value); }
    template<typename ItemFiltersT = ItemFilters>
    GetSearchJobResult& WithItemFilters(ItemFiltersT&& value) { SetItemFilters(std::forward<ItemFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a search job was created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetSearchJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the specified search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    GetSearchJobResult& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const { return m_searchJobArn; }
    template<typename SearchJobArnT = Aws::String>
    void SetSearchJobArn(SearchJobArnT&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::forward<SearchJobArnT>(value); }
    template<typename SearchJobArnT = Aws::String>
    GetSearchJobResult& WithSearchJobArn(SearchJobArnT&& value) { SetSearchJobArn(std::forward<SearchJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSearchJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SearchScopeSummary m_searchScopeSummary;
    bool m_searchScopeSummaryHasBeenSet = false;

    CurrentSearchProgress m_currentSearchProgress;
    bool m_currentSearchProgressHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    SearchJobState m_status{SearchJobState::NOT_SET};
    bool m_statusHasBeenSet = false;

    SearchScope m_searchScope;
    bool m_searchScopeHasBeenSet = false;

    ItemFilters m_itemFilters;
    bool m_itemFiltersHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
