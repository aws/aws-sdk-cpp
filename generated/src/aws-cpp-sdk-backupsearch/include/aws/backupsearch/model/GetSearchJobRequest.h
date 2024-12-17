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
    AWS_BACKUPSEARCH_API GetSearchJobRequest();

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
    inline const Aws::String& GetSearchJobIdentifier() const{ return m_searchJobIdentifier; }
    inline bool SearchJobIdentifierHasBeenSet() const { return m_searchJobIdentifierHasBeenSet; }
    inline void SetSearchJobIdentifier(const Aws::String& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = value; }
    inline void SetSearchJobIdentifier(Aws::String&& value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier = std::move(value); }
    inline void SetSearchJobIdentifier(const char* value) { m_searchJobIdentifierHasBeenSet = true; m_searchJobIdentifier.assign(value); }
    inline GetSearchJobRequest& WithSearchJobIdentifier(const Aws::String& value) { SetSearchJobIdentifier(value); return *this;}
    inline GetSearchJobRequest& WithSearchJobIdentifier(Aws::String&& value) { SetSearchJobIdentifier(std::move(value)); return *this;}
    inline GetSearchJobRequest& WithSearchJobIdentifier(const char* value) { SetSearchJobIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_searchJobIdentifier;
    bool m_searchJobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
