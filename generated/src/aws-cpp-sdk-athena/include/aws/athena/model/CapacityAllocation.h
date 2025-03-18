/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/CapacityAllocationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains the submission time of a single allocation request for a capacity
   * reservation and the most recent status of the attempted
   * allocation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CapacityAllocation">AWS
   * API Reference</a></p>
   */
  class CapacityAllocation
  {
  public:
    AWS_ATHENA_API CapacityAllocation() = default;
    AWS_ATHENA_API CapacityAllocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the capacity allocation.</p>
     */
    inline CapacityAllocationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CapacityAllocationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CapacityAllocation& WithStatus(CapacityAllocationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the capacity allocation.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    CapacityAllocation& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the capacity allocation was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const { return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    void SetRequestTime(RequestTimeT&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::forward<RequestTimeT>(value); }
    template<typename RequestTimeT = Aws::Utils::DateTime>
    CapacityAllocation& WithRequestTime(RequestTimeT&& value) { SetRequestTime(std::forward<RequestTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the capacity allocation request was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestCompletionTime() const { return m_requestCompletionTime; }
    inline bool RequestCompletionTimeHasBeenSet() const { return m_requestCompletionTimeHasBeenSet; }
    template<typename RequestCompletionTimeT = Aws::Utils::DateTime>
    void SetRequestCompletionTime(RequestCompletionTimeT&& value) { m_requestCompletionTimeHasBeenSet = true; m_requestCompletionTime = std::forward<RequestCompletionTimeT>(value); }
    template<typename RequestCompletionTimeT = Aws::Utils::DateTime>
    CapacityAllocation& WithRequestCompletionTime(RequestCompletionTimeT&& value) { SetRequestCompletionTime(std::forward<RequestCompletionTimeT>(value)); return *this;}
    ///@}
  private:

    CapacityAllocationStatus m_status{CapacityAllocationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime{};
    bool m_requestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_requestCompletionTime{};
    bool m_requestCompletionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
