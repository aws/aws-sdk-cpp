/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupsearch/model/SearchJobState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backupsearch/model/SearchScopeSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupSearch
{
namespace Model
{

  /**
   * <p>This is information pertaining to a search job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/SearchJobSummary">AWS
   * API Reference</a></p>
   */
  class SearchJobSummary
  {
  public:
    AWS_BACKUPSEARCH_API SearchJobSummary() = default;
    AWS_BACKUPSEARCH_API SearchJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    SearchJobSummary& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const { return m_searchJobArn; }
    inline bool SearchJobArnHasBeenSet() const { return m_searchJobArnHasBeenSet; }
    template<typename SearchJobArnT = Aws::String>
    void SetSearchJobArn(SearchJobArnT&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::forward<SearchJobArnT>(value); }
    template<typename SearchJobArnT = Aws::String>
    SearchJobSummary& WithSearchJobArn(SearchJobArnT&& value) { SetSearchJobArn(std::forward<SearchJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the search job.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SearchJobSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the status of the search job.</p>
     */
    inline SearchJobState GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SearchJobState value) { m_statusHasBeenSet = true; m_status = value; }
    inline SearchJobSummary& WithStatus(SearchJobState value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the search job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    SearchJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the completion time of the search job.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    SearchJobSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned summary of the specified search job scope, including: </p> <ul> <li>
     * <p>TotalBackupsToScanCount, the number of recovery points returned by the
     * search.</p> </li> <li> <p>TotalItemsToScanCount, the number of items returned by
     * the search.</p> </li> </ul>
     */
    inline const SearchScopeSummary& GetSearchScopeSummary() const { return m_searchScopeSummary; }
    inline bool SearchScopeSummaryHasBeenSet() const { return m_searchScopeSummaryHasBeenSet; }
    template<typename SearchScopeSummaryT = SearchScopeSummary>
    void SetSearchScopeSummary(SearchScopeSummaryT&& value) { m_searchScopeSummaryHasBeenSet = true; m_searchScopeSummary = std::forward<SearchScopeSummaryT>(value); }
    template<typename SearchScopeSummaryT = SearchScopeSummary>
    SearchJobSummary& WithSearchScopeSummary(SearchScopeSummaryT&& value) { SetSearchScopeSummary(std::forward<SearchScopeSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message will be returned for either a earch job with a status of
     * <code>ERRORED</code> or a status of <code>COMPLETED</code> jobs with issues.</p>
     * <p>For example, a message may say that a search contained recovery points unable
     * to be scanned because of a permissions issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    SearchJobSummary& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SearchJobState m_status{SearchJobState::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    SearchScopeSummary m_searchScopeSummary;
    bool m_searchScopeSummaryHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
