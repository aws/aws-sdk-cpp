/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/SearchStatus.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Summary details of an archive search job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/SearchSummary">AWS
   * API Reference</a></p>
   */
  class SearchSummary
  {
  public:
    AWS_MAILMANAGER_API SearchSummary() = default;
    AWS_MAILMANAGER_API SearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API SearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline const Aws::String& GetSearchId() const { return m_searchId; }
    inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }
    template<typename SearchIdT = Aws::String>
    void SetSearchId(SearchIdT&& value) { m_searchIdHasBeenSet = true; m_searchId = std::forward<SearchIdT>(value); }
    template<typename SearchIdT = Aws::String>
    SearchSummary& WithSearchId(SearchIdT&& value) { SetSearchId(std::forward<SearchIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the search job.</p>
     */
    inline const SearchStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = SearchStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = SearchStatus>
    SearchSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchId;
    bool m_searchIdHasBeenSet = false;

    SearchStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
