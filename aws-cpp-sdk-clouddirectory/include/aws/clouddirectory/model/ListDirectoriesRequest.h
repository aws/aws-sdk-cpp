/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/DirectoryState.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class AWS_CLOUDDIRECTORY_API ListDirectoriesRequest : public CloudDirectoryRequest
  {
  public:
    ListDirectoriesRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline ListDirectoriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

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
    inline void SetState(const DirectoryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline void SetState(DirectoryState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline ListDirectoriesRequest& WithState(const DirectoryState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the directories in the list. Can be either Enabled, Disabled, or
     * Deleted.</p>
     */
    inline ListDirectoriesRequest& WithState(DirectoryState&& value) { SetState(value); return *this;}

  private:
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    DirectoryState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
