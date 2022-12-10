/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/PipesRequest.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Pipes
{
namespace Model
{

  /**
   */
  class ListPipesRequest : public PipesRequest
  {
  public:
    AWS_PIPES_API ListPipesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipes"; }

    AWS_PIPES_API Aws::String SerializePayload() const override;

    AWS_PIPES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The state the pipe is in.</p>
     */
    inline const PipeState& GetCurrentState() const{ return m_currentState; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(const PipeState& value) { m_currentStateHasBeenSet = true; m_currentState = value; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(PipeState&& value) { m_currentStateHasBeenSet = true; m_currentState = std::move(value); }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline ListPipesRequest& WithCurrentState(const PipeState& value) { SetCurrentState(value); return *this;}

    /**
     * <p>The state the pipe is in.</p>
     */
    inline ListPipesRequest& WithCurrentState(PipeState&& value) { SetCurrentState(std::move(value)); return *this;}


    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(const RequestedPipeState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(RequestedPipeState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline ListPipesRequest& WithDesiredState(const RequestedPipeState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline ListPipesRequest& WithDesiredState(RequestedPipeState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of pipes to include in the response.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of pipes to include in the response.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of pipes to include in the response.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of pipes to include in the response.</p>
     */
    inline ListPipesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline ListPipesRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline ListPipesRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>A value that will return a subset of the pipes associated with this account.
     * For example, <code>"NamePrefix": "ABC"</code> will return all endpoints with
     * "ABC" in the name.</p>
     */
    inline ListPipesRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListPipesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline const Aws::String& GetSourcePrefix() const{ return m_sourcePrefix; }

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline bool SourcePrefixHasBeenSet() const { return m_sourcePrefixHasBeenSet; }

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline void SetSourcePrefix(const Aws::String& value) { m_sourcePrefixHasBeenSet = true; m_sourcePrefix = value; }

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline void SetSourcePrefix(Aws::String&& value) { m_sourcePrefixHasBeenSet = true; m_sourcePrefix = std::move(value); }

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline void SetSourcePrefix(const char* value) { m_sourcePrefixHasBeenSet = true; m_sourcePrefix.assign(value); }

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline ListPipesRequest& WithSourcePrefix(const Aws::String& value) { SetSourcePrefix(value); return *this;}

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline ListPipesRequest& WithSourcePrefix(Aws::String&& value) { SetSourcePrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix matching the pipe source.</p>
     */
    inline ListPipesRequest& WithSourcePrefix(const char* value) { SetSourcePrefix(value); return *this;}


    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline const Aws::String& GetTargetPrefix() const{ return m_targetPrefix; }

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline bool TargetPrefixHasBeenSet() const { return m_targetPrefixHasBeenSet; }

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline void SetTargetPrefix(const Aws::String& value) { m_targetPrefixHasBeenSet = true; m_targetPrefix = value; }

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline void SetTargetPrefix(Aws::String&& value) { m_targetPrefixHasBeenSet = true; m_targetPrefix = std::move(value); }

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline void SetTargetPrefix(const char* value) { m_targetPrefixHasBeenSet = true; m_targetPrefix.assign(value); }

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline ListPipesRequest& WithTargetPrefix(const Aws::String& value) { SetTargetPrefix(value); return *this;}

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline ListPipesRequest& WithTargetPrefix(Aws::String&& value) { SetTargetPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix matching the pipe target.</p>
     */
    inline ListPipesRequest& WithTargetPrefix(const char* value) { SetTargetPrefix(value); return *this;}

  private:

    PipeState m_currentState;
    bool m_currentStateHasBeenSet = false;

    RequestedPipeState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_sourcePrefix;
    bool m_sourcePrefixHasBeenSet = false;

    Aws::String m_targetPrefix;
    bool m_targetPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
