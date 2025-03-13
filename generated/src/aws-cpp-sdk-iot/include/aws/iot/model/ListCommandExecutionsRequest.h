/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CommandNamespace.h>
#include <aws/iot/model/CommandExecutionStatus.h>
#include <aws/iot/model/SortOrder.h>
#include <aws/iot/model/TimeFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListCommandExecutionsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListCommandExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCommandExecutions"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCommandExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <code>null</code> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCommandExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the command.</p>
     */
    inline CommandNamespace GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(CommandNamespace value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline ListCommandExecutionsRequest& WithNamespace(CommandNamespace value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List all command executions for the device that have a particular status. For
     * example, you can filter the list to display only command executions that have
     * failed or timed out.</p>
     */
    inline CommandExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CommandExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListCommandExecutionsRequest& WithStatus(CommandExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify whether to list the command executions that were created in the
     * ascending or descending order. By default, the API returns all commands in the
     * descending order based on the start time or completion time of the executions,
     * that are determined by the <code>startTimeFilter</code> and
     * <code>completeTimeFilter</code> parameters.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListCommandExecutionsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List all command executions that started any time before or after the date
     * and time that you specify. The date and time uses the format
     * <code>yyyy-MM-dd'T'HH:mm</code>.</p>
     */
    inline const TimeFilter& GetStartedTimeFilter() const { return m_startedTimeFilter; }
    inline bool StartedTimeFilterHasBeenSet() const { return m_startedTimeFilterHasBeenSet; }
    template<typename StartedTimeFilterT = TimeFilter>
    void SetStartedTimeFilter(StartedTimeFilterT&& value) { m_startedTimeFilterHasBeenSet = true; m_startedTimeFilter = std::forward<StartedTimeFilterT>(value); }
    template<typename StartedTimeFilterT = TimeFilter>
    ListCommandExecutionsRequest& WithStartedTimeFilter(StartedTimeFilterT&& value) { SetStartedTimeFilter(std::forward<StartedTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List all command executions that completed any time before or after the date
     * and time that you specify. The date and time uses the format
     * <code>yyyy-MM-dd'T'HH:mm</code>.</p>
     */
    inline const TimeFilter& GetCompletedTimeFilter() const { return m_completedTimeFilter; }
    inline bool CompletedTimeFilterHasBeenSet() const { return m_completedTimeFilterHasBeenSet; }
    template<typename CompletedTimeFilterT = TimeFilter>
    void SetCompletedTimeFilter(CompletedTimeFilterT&& value) { m_completedTimeFilterHasBeenSet = true; m_completedTimeFilter = std::forward<CompletedTimeFilterT>(value); }
    template<typename CompletedTimeFilterT = TimeFilter>
    ListCommandExecutionsRequest& WithCompletedTimeFilter(CompletedTimeFilterT&& value) { SetCompletedTimeFilter(std::forward<CompletedTimeFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the target device. You can use this
     * information to list all command executions for a particular device.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ListCommandExecutionsRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the command. You can use this information
     * to list all command executions for a particular command.</p>
     */
    inline const Aws::String& GetCommandArn() const { return m_commandArn; }
    inline bool CommandArnHasBeenSet() const { return m_commandArnHasBeenSet; }
    template<typename CommandArnT = Aws::String>
    void SetCommandArn(CommandArnT&& value) { m_commandArnHasBeenSet = true; m_commandArn = std::forward<CommandArnT>(value); }
    template<typename CommandArnT = Aws::String>
    ListCommandExecutionsRequest& WithCommandArn(CommandArnT&& value) { SetCommandArn(std::forward<CommandArnT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    CommandNamespace m_namespace{CommandNamespace::NOT_SET};
    bool m_namespaceHasBeenSet = false;

    CommandExecutionStatus m_status{CommandExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    TimeFilter m_startedTimeFilter;
    bool m_startedTimeFilterHasBeenSet = false;

    TimeFilter m_completedTimeFilter;
    bool m_completedTimeFilterHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_commandArn;
    bool m_commandArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
