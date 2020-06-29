/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TaskStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Polly
{
namespace Model
{

  /**
   */
  class AWS_POLLY_API ListSpeechSynthesisTasksRequest : public PollyRequest
  {
  public:
    ListSpeechSynthesisTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSpeechSynthesisTasks"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Maximum number of speech synthesis tasks returned in a List operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of speech synthesis tasks returned in a List operation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of speech synthesis tasks returned in a List operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of speech synthesis tasks returned in a List operation.</p>
     */
    inline ListSpeechSynthesisTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline ListSpeechSynthesisTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline ListSpeechSynthesisTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use in the next request to continue the listing of
     * speech synthesis tasks. </p>
     */
    inline ListSpeechSynthesisTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline ListSpeechSynthesisTasksRequest& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the speech synthesis tasks returned in a List operation</p>
     */
    inline ListSpeechSynthesisTasksRequest& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    TaskStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
