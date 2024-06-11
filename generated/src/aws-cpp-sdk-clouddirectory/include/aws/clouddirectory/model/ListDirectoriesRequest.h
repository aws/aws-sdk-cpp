﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/DirectoryState.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class ListDirectoriesRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API ListDirectoriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDirectories"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDirectoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline const DirectoryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ListDirectoriesRequest& WithState(const DirectoryState& value) { SetState(value); return *this;}
    inline ListDirectoriesRequest& WithState(DirectoryState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    DirectoryState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
