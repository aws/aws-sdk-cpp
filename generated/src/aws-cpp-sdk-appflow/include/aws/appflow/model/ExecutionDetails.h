/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appflow/model/ExecutionStatus.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> Describes the details of the flow run, including the timestamp, status, and
   * message. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/ExecutionDetails">AWS
   * API Reference</a></p>
   */
  class ExecutionDetails
  {
  public:
    AWS_APPFLOW_API ExecutionDetails() = default;
    AWS_APPFLOW_API ExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API ExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Describes the details of the most recent flow run. </p>
     */
    inline const Aws::String& GetMostRecentExecutionMessage() const { return m_mostRecentExecutionMessage; }
    inline bool MostRecentExecutionMessageHasBeenSet() const { return m_mostRecentExecutionMessageHasBeenSet; }
    template<typename MostRecentExecutionMessageT = Aws::String>
    void SetMostRecentExecutionMessage(MostRecentExecutionMessageT&& value) { m_mostRecentExecutionMessageHasBeenSet = true; m_mostRecentExecutionMessage = std::forward<MostRecentExecutionMessageT>(value); }
    template<typename MostRecentExecutionMessageT = Aws::String>
    ExecutionDetails& WithMostRecentExecutionMessage(MostRecentExecutionMessageT&& value) { SetMostRecentExecutionMessage(std::forward<MostRecentExecutionMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the time of the most recent flow run. </p>
     */
    inline const Aws::Utils::DateTime& GetMostRecentExecutionTime() const { return m_mostRecentExecutionTime; }
    inline bool MostRecentExecutionTimeHasBeenSet() const { return m_mostRecentExecutionTimeHasBeenSet; }
    template<typename MostRecentExecutionTimeT = Aws::Utils::DateTime>
    void SetMostRecentExecutionTime(MostRecentExecutionTimeT&& value) { m_mostRecentExecutionTimeHasBeenSet = true; m_mostRecentExecutionTime = std::forward<MostRecentExecutionTimeT>(value); }
    template<typename MostRecentExecutionTimeT = Aws::Utils::DateTime>
    ExecutionDetails& WithMostRecentExecutionTime(MostRecentExecutionTimeT&& value) { SetMostRecentExecutionTime(std::forward<MostRecentExecutionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the most recent flow run. </p>
     */
    inline ExecutionStatus GetMostRecentExecutionStatus() const { return m_mostRecentExecutionStatus; }
    inline bool MostRecentExecutionStatusHasBeenSet() const { return m_mostRecentExecutionStatusHasBeenSet; }
    inline void SetMostRecentExecutionStatus(ExecutionStatus value) { m_mostRecentExecutionStatusHasBeenSet = true; m_mostRecentExecutionStatus = value; }
    inline ExecutionDetails& WithMostRecentExecutionStatus(ExecutionStatus value) { SetMostRecentExecutionStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_mostRecentExecutionMessage;
    bool m_mostRecentExecutionMessageHasBeenSet = false;

    Aws::Utils::DateTime m_mostRecentExecutionTime{};
    bool m_mostRecentExecutionTimeHasBeenSet = false;

    ExecutionStatus m_mostRecentExecutionStatus{ExecutionStatus::NOT_SET};
    bool m_mostRecentExecutionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
