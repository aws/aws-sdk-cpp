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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/CommandFilter.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API ListCommandsRequest : public SSMRequest
  {
  public:
    ListCommandsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline const Aws::String& GetCommandId() const{ return m_commandId; }

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline void SetCommandId(const Aws::String& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline void SetCommandId(Aws::String&& value) { m_commandIdHasBeenSet = true; m_commandId = value; }

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline void SetCommandId(const char* value) { m_commandIdHasBeenSet = true; m_commandId.assign(value); }

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline ListCommandsRequest& WithCommandId(const Aws::String& value) { SetCommandId(value); return *this;}

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline ListCommandsRequest& WithCommandId(Aws::String&& value) { SetCommandId(value); return *this;}

    /**
     * (Optional) If provided, lists only the specified command.
     */
    inline ListCommandsRequest& WithCommandId(const char* value) { SetCommandId(value); return *this;}

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline ListCommandsRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline ListCommandsRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * (Optional) Lists commands issued against this instance ID.
     */
    inline ListCommandsRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * (Optional) The maximum number of items to return for this call. The call also
     * returns a token that you can specify in a subsequent call to get the next set of
     * results.
     */
    inline long GetMaxResults() const{ return m_maxResults; }

    /**
     * (Optional) The maximum number of items to return for this call. The call also
     * returns a token that you can specify in a subsequent call to get the next set of
     * results.
     */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * (Optional) The maximum number of items to return for this call. The call also
     * returns a token that you can specify in a subsequent call to get the next set of
     * results.
     */
    inline ListCommandsRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * (Optional) The token for the next set of items to return. (You received this
     * token from a previous call.)
     */
    inline ListCommandsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline const Aws::Vector<CommandFilter>& GetFilters() const{ return m_filters; }

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline void SetFilters(const Aws::Vector<CommandFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline void SetFilters(Aws::Vector<CommandFilter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline ListCommandsRequest& WithFilters(const Aws::Vector<CommandFilter>& value) { SetFilters(value); return *this;}

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline ListCommandsRequest& WithFilters(Aws::Vector<CommandFilter>&& value) { SetFilters(value); return *this;}

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline ListCommandsRequest& AddFilters(const CommandFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * (Optional) One or more filters. Use a filter to return a more specific list of
     * results.
     */
    inline ListCommandsRequest& AddFilters(CommandFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    Aws::String m_commandId;
    bool m_commandIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    Aws::Vector<CommandFilter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
