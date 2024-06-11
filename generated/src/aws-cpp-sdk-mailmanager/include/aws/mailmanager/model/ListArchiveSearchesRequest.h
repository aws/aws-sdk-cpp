/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to list archive search jobs in your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ListArchiveSearchesRequest">AWS
   * API Reference</a></p>
   */
  class ListArchiveSearchesRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API ListArchiveSearchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListArchiveSearches"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the archive.</p>
     */
    inline const Aws::String& GetArchiveId() const{ return m_archiveId; }
    inline bool ArchiveIdHasBeenSet() const { return m_archiveIdHasBeenSet; }
    inline void SetArchiveId(const Aws::String& value) { m_archiveIdHasBeenSet = true; m_archiveId = value; }
    inline void SetArchiveId(Aws::String&& value) { m_archiveIdHasBeenSet = true; m_archiveId = std::move(value); }
    inline void SetArchiveId(const char* value) { m_archiveIdHasBeenSet = true; m_archiveId.assign(value); }
    inline ListArchiveSearchesRequest& WithArchiveId(const Aws::String& value) { SetArchiveId(value); return *this;}
    inline ListArchiveSearchesRequest& WithArchiveId(Aws::String&& value) { SetArchiveId(std::move(value)); return *this;}
    inline ListArchiveSearchesRequest& WithArchiveId(const char* value) { SetArchiveId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListArchiveSearchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListArchiveSearchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListArchiveSearchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of archive search jobs that are returned per call. You can
     * use NextToken to obtain further pages of archives. </p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListArchiveSearchesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::String m_archiveId;
    bool m_archiveIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
