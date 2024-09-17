/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveFilters.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to initiate a search across emails in an archive.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/StartArchiveSearchRequest">AWS
   * API Reference</a></p>
   */
  class StartArchiveSearchRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API StartArchiveSearchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartArchiveSearch"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the archive to search emails in.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline StartArchiveSearchRequest& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline StartArchiveSearchRequest& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline StartArchiveSearchRequest& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Criteria to filter which emails are included in the search results.</p>
     */
    inline const ArchiveFilters& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ArchiveFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ArchiveFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline StartArchiveSearchRequest& WithFilters(const ArchiveFilters& value) { SetFilters(value); return *this;}
    inline StartArchiveSearchRequest& WithFilters(ArchiveFilters&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp of the range to search emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetFromTimestamp() const{ return m_fromTimestamp; }
    inline bool FromTimestampHasBeenSet() const { return m_fromTimestampHasBeenSet; }
    inline void SetFromTimestamp(const Aws::Utils::DateTime& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = value; }
    inline void SetFromTimestamp(Aws::Utils::DateTime&& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = std::move(value); }
    inline StartArchiveSearchRequest& WithFromTimestamp(const Aws::Utils::DateTime& value) { SetFromTimestamp(value); return *this;}
    inline StartArchiveSearchRequest& WithFromTimestamp(Aws::Utils::DateTime&& value) { SetFromTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of search results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline StartArchiveSearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp of the range to search emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetToTimestamp() const{ return m_toTimestamp; }
    inline bool ToTimestampHasBeenSet() const { return m_toTimestampHasBeenSet; }
    inline void SetToTimestamp(const Aws::Utils::DateTime& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = value; }
    inline void SetToTimestamp(Aws::Utils::DateTime&& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = std::move(value); }
    inline StartArchiveSearchRequest& WithToTimestamp(const Aws::Utils::DateTime& value) { SetToTimestamp(value); return *this;}
    inline StartArchiveSearchRequest& WithToTimestamp(Aws::Utils::DateTime&& value) { SetToTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    ArchiveFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Utils::DateTime m_fromTimestamp;
    bool m_fromTimestampHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_toTimestamp;
    bool m_toTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
