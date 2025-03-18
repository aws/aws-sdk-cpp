﻿/**
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
    AWS_MAILMANAGER_API StartArchiveSearchRequest() = default;

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
    inline const Aws::String& GetArchiveId() const { return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    template<typename ArchiveIdT = Aws::String>
    void SetArchiveId(ArchiveIdT&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::forward<ArchiveIdT>(value); }
    template<typename ArchiveIdT = Aws::String>
    StartArchiveSearchRequest& WithArchiveId(ArchiveIdT&& value) { SetArchiveId(std::forward<ArchiveIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Criteria to filter which emails are included in the search results.</p>
     */
    inline const ArchiveFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = ArchiveFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ArchiveFilters>
    StartArchiveSearchRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start timestamp of the range to search emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetFromTimestamp() const { return m_fromTimestamp; }
    inline bool FromTimestampHasBeenSet() const { return m_fromTimestampHasBeenSet; }
    template<typename FromTimestampT = Aws::Utils::DateTime>
    void SetFromTimestamp(FromTimestampT&& value) { m_fromTimestampHasBeenSet = true; m_fromTimestamp = std::forward<FromTimestampT>(value); }
    template<typename FromTimestampT = Aws::Utils::DateTime>
    StartArchiveSearchRequest& WithFromTimestamp(FromTimestampT&& value) { SetFromTimestamp(std::forward<FromTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of search results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline StartArchiveSearchRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end timestamp of the range to search emails from.</p>
     */
    inline const Aws::Utils::DateTime& GetToTimestamp() const { return m_toTimestamp; }
    inline bool ToTimestampHasBeenSet() const { return m_toTimestampHasBeenSet; }
    template<typename ToTimestampT = Aws::Utils::DateTime>
    void SetToTimestamp(ToTimestampT&& value) { m_toTimestampHasBeenSet = true; m_toTimestamp = std::forward<ToTimestampT>(value); }
    template<typename ToTimestampT = Aws::Utils::DateTime>
    StartArchiveSearchRequest& WithToTimestamp(ToTimestampT&& value) { SetToTimestamp(std::forward<ToTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    ArchiveFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Utils::DateTime m_fromTimestamp{};
    bool m_fromTimestampHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_toTimestamp{};
    bool m_toTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
