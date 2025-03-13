/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/ResourceAction.h>
#include <aws/glue/model/ResourceState.h>
#include <aws/glue/model/ErrorDetail.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{
  class StatusDetails;

  /**
   * <p>A structure containing information about the state of an asynchronous change
   * to a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TableStatus">AWS
   * API Reference</a></p>
   */
  class TableStatus
  {
  public:
    AWS_GLUE_API TableStatus() = default;
    AWS_GLUE_API TableStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user who requested the asynchronous change.</p>
     */
    inline const Aws::String& GetRequestedBy() const { return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    template<typename RequestedByT = Aws::String>
    void SetRequestedBy(RequestedByT&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::forward<RequestedByT>(value); }
    template<typename RequestedByT = Aws::String>
    TableStatus& WithRequestedBy(RequestedByT&& value) { SetRequestedBy(std::forward<RequestedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user to last manually alter the asynchronous change
     * (requesting cancellation, etc).</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    TableStatus& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ISO 8601 formatted date string indicating the time that the change was
     * initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    TableStatus& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ISO 8601 formatted date string indicating the time that the state was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    TableStatus& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates which action was called on the table, currently only
     * <code>CREATE</code> or <code>UPDATE</code>.</p>
     */
    inline ResourceAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ResourceAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline TableStatus& WithAction(ResourceAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generic status for the change in progress, such as QUEUED, IN_PROGRESS,
     * SUCCESS, or FAILED.</p>
     */
    inline ResourceState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ResourceState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TableStatus& WithState(ResourceState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that will only appear when the state is "FAILED". This is a parent
     * level exception message, there may be different <code>Error</code>s for each
     * dialect.</p>
     */
    inline const ErrorDetail& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetail>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetail>
    TableStatus& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>StatusDetails</code> object with information about the requested
     * change.</p>
     */
    inline const StatusDetails& GetDetails() const{
      return *m_details;
    }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = StatusDetails>
    void SetDetails(DetailsT&& value) {
      m_detailsHasBeenSet = true; 
      m_details = Aws::MakeShared<StatusDetails>("TableStatus", std::forward<DetailsT>(value));
    }
    template<typename DetailsT = StatusDetails>
    TableStatus& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    ResourceAction m_action{ResourceAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    ResourceState m_state{ResourceState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    std::shared_ptr<StatusDetails> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
