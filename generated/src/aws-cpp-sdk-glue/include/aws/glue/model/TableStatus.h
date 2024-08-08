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
#include <utility>
#include <memory>

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
    AWS_GLUE_API TableStatus();
    AWS_GLUE_API TableStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API TableStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the user who requested the asynchronous change.</p>
     */
    inline const Aws::String& GetRequestedBy() const{ return m_requestedBy; }
    inline bool RequestedByHasBeenSet() const { return m_requestedByHasBeenSet; }
    inline void SetRequestedBy(const Aws::String& value) { m_requestedByHasBeenSet = true; m_requestedBy = value; }
    inline void SetRequestedBy(Aws::String&& value) { m_requestedByHasBeenSet = true; m_requestedBy = std::move(value); }
    inline void SetRequestedBy(const char* value) { m_requestedByHasBeenSet = true; m_requestedBy.assign(value); }
    inline TableStatus& WithRequestedBy(const Aws::String& value) { SetRequestedBy(value); return *this;}
    inline TableStatus& WithRequestedBy(Aws::String&& value) { SetRequestedBy(std::move(value)); return *this;}
    inline TableStatus& WithRequestedBy(const char* value) { SetRequestedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user to last manually alter the asynchronous change
     * (requesting cancellation, etc).</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline TableStatus& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline TableStatus& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline TableStatus& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ISO 8601 formatted date string indicating the time that the change was
     * initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }
    inline TableStatus& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}
    inline TableStatus& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ISO 8601 formatted date string indicating the time that the state was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline TableStatus& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline TableStatus& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates which action was called on the table, currently only
     * <code>CREATE</code> or <code>UPDATE</code>.</p>
     */
    inline const ResourceAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ResourceAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ResourceAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline TableStatus& WithAction(const ResourceAction& value) { SetAction(value); return *this;}
    inline TableStatus& WithAction(ResourceAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A generic status for the change in progress, such as QUEUED, IN_PROGRESS,
     * SUCCESS, or FAILED.</p>
     */
    inline const ResourceState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ResourceState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TableStatus& WithState(const ResourceState& value) { SetState(value); return *this;}
    inline TableStatus& WithState(ResourceState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error that will only appear when the state is "FAILED". This is a parent
     * level exception message, there may be different <code>Error</code>s for each
     * dialect.</p>
     */
    inline const ErrorDetail& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorDetail& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorDetail&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline TableStatus& WithError(const ErrorDetail& value) { SetError(value); return *this;}
    inline TableStatus& WithError(ErrorDetail&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>StatusDetails</code> object with information about the requested
     * change.</p>
     */
    AWS_GLUE_API const StatusDetails& GetDetails() const;
    AWS_GLUE_API bool DetailsHasBeenSet() const;
    AWS_GLUE_API void SetDetails(const StatusDetails& value);
    AWS_GLUE_API void SetDetails(StatusDetails&& value);
    AWS_GLUE_API TableStatus& WithDetails(const StatusDetails& value);
    AWS_GLUE_API TableStatus& WithDetails(StatusDetails&& value);
    ///@}
  private:

    Aws::String m_requestedBy;
    bool m_requestedByHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    ResourceAction m_action;
    bool m_actionHasBeenSet = false;

    ResourceState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetail m_error;
    bool m_errorHasBeenSet = false;

    std::shared_ptr<StatusDetails> m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
