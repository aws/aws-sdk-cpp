/**
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


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to retrieve.</p>
     */
    inline ListDirectoriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline const DirectoryState& GetState() const{ return m_state; }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline ListDirectoriesRequest& WithState(const DirectoryState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline ListDirectoriesRequest& WithState(DirectoryState&& value) { SetState(std::move(value)); return *this;}

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
