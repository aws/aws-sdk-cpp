/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/backupsearch/BackupSearchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

  /**
   */
  class GetSearchJobRequest : public BackupSearchRequest
  {
  public:
    AWS_BACKUPSEARCH_API GetSearchJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSearchJob"; }

    AWS_BACKUPSEARCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Required unique string that specifies the search job.</p>
     */
    inline const Aws::String& GetSearchJobIdentifier() const { return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    template<typename SearchJobIdentifierT = Aws::String>
    void SetSearchJobIdentifier(SearchJobIdentifierT&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::forward<SearchJobIdentifierT>(value); }
    template<typename SearchJobIdentifierT = Aws::String>
    GetSearchJobRequest& WithSearchJobIdentifier(SearchJobIdentifierT&& value) { SetSearchJobIdentifier(std::forward<SearchJobIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
