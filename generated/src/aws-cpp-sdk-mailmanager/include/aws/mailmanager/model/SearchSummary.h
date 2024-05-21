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
    AWS_MAILMANAGER_API SearchSummary();
    AWS_MAILMANAGER_API SearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API SearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline const Aws::String& GetSearchId() const{ return m_searchId; }

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline bool SearchIdHasBeenSet() const { return m_searchIdHasBeenSet; }

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline void SetSearchId(const Aws::String& value) { m_searchIdHasBeenSet = true; m_searchId = value; }

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline void SetSearchId(Aws::String&& value) { m_searchIdHasBeenSet = true; m_searchId = std::move(value); }

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline void SetSearchId(const char* value) { m_searchIdHasBeenSet = true; m_searchId.assign(value); }

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline SearchSummary& WithSearchId(const Aws::String& value) { SetSearchId(value); return *this;}

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline SearchSummary& WithSearchId(Aws::String&& value) { SetSearchId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the search job.</p>
     */
    inline SearchSummary& WithSearchId(const char* value) { SetSearchId(value); return *this;}


    /**
     * <p>The current status of the search job.</p>
     */
    inline const SearchStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the search job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the search job.</p>
     */
    inline void SetStatus(const SearchStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the search job.</p>
     */
    inline void SetStatus(SearchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the search job.</p>
     */
    inline SearchSummary& WithStatus(const SearchStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the search job.</p>
     */
    inline SearchSummary& WithStatus(SearchStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_searchId;
    bool m_searchIdHasBeenSet = false;

    SearchStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
