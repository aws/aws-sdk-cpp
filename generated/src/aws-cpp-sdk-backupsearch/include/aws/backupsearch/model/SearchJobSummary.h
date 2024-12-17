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
    AWS_BACKUPSEARCH_API SearchJobSummary();
    AWS_BACKUPSEARCH_API SearchJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API SearchJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSEARCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const{ return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    inline void SetSearchJobIdentifier(const Aws::String& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = value; }
    inline void SetSearchJobIdentifier(Aws::String&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::move(value); }
    inline void SetSearchJobIdentifier(const char* value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier.assign(value); }
    inline SearchJobSummary& WithSearchJobIdentifier(const Aws::String& value) { SetSearchJobIdentifier(value); return *this;}
    inline SearchJobSummary& WithSearchJobIdentifier(Aws::String&& value) { SetSearchJobIdentifier(std::move(value)); return *this;}
    inline SearchJobSummary& WithSearchJobIdentifier(const char* value) { SetSearchJobIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique string that identifies the Amazon Resource Name (ARN) of the
     * specified search job.</p>
     */
    inline const Aws::String& GetSearchJobArn() const{ return m_searchJobArn; }
    inline bool SearchJobArnHasBeenSet() const { return m_searchJobArnHasBeenSet; }
    inline void SetSearchJobArn(const Aws::String& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = value; }
    inline void SetSearchJobArn(Aws::String&& value) { m_searchJobArnHasBeenSet = true; m_searchJobArn = std::move(value); }
    inline void SetSearchJobArn(const char* value) { m_searchJobArnHasBeenSet = true; m_searchJobArn.assign(value); }
    inline SearchJobSummary& WithSearchJobArn(const Aws::String& value) { SetSearchJobArn(value); return *this;}
    inline SearchJobSummary& WithSearchJobArn(Aws::String&& value) { SetSearchJobArn(std::move(value)); return *this;}
    inline SearchJobSummary& WithSearchJobArn(const char* value) { SetSearchJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the search job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SearchJobSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SearchJobSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SearchJobSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the status of the search job.</p>
     */
    inline const SearchJobState& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SearchJobState& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SearchJobState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline SearchJobSummary& WithStatus(const SearchJobState& value) { SetStatus(value); return *this;}
    inline SearchJobSummary& WithStatus(SearchJobState&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the creation time of the search job.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline SearchJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline SearchJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the completion time of the search job.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline SearchJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline SearchJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned summary of the specified search job scope, including: </p> <ul> <li>
     * <p>TotalBackupsToScanCount, the number of recovery points returned by the
     * search.</p> </li> <li> <p>TotalItemsToScanCount, the number of items returned by
     * the search.</p> </li> </ul>
     */
    inline const SearchScopeSummary& GetSearchScopeSummary() const{ return m_searchScopeSummary; }
    inline bool SearchScopeSummaryHasBeenSet() const { return m_searchScopeSummaryHasBeenSet; }
    inline void SetSearchScopeSummary(const SearchScopeSummary& value) { m_searchScopeSummaryHasBeenSet = true; m_searchScopeSummary = value; }
    inline void SetSearchScopeSummary(SearchScopeSummary&& value) { m_searchScopeSummaryHasBeenSet = true; m_searchScopeSummary = std::move(value); }
    inline SearchJobSummary& WithSearchScopeSummary(const SearchScopeSummary& value) { SetSearchScopeSummary(value); return *this;}
    inline SearchJobSummary& WithSearchScopeSummary(SearchScopeSummary&& value) { SetSearchScopeSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A status message will be returned for either a earch job with a status of
     * <code>ERRORED</code> or a status of <code>COMPLETED</code> jobs with issues.</p>
     * <p>For example, a message may say that a search contained recovery points unable
     * to be scanned because of a permissions issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline SearchJobSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline SearchJobSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline SearchJobSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;

    Aws::String m_searchJobArn;
    bool m_searchJobArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SearchJobState m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    SearchScopeSummary m_searchScopeSummary;
    bool m_searchScopeSummaryHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
