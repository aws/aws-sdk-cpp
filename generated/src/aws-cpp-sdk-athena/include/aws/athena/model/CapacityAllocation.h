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
    AWS_ATHENA_API CapacityAllocation();
    AWS_ATHENA_API CapacityAllocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CapacityAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the capacity allocation.</p>
     */
    inline const CapacityAllocationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CapacityAllocationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CapacityAllocationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CapacityAllocation& WithStatus(const CapacityAllocationStatus& value) { SetStatus(value); return *this;}
    inline CapacityAllocation& WithStatus(CapacityAllocationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message of the capacity allocation.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline CapacityAllocation& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline CapacityAllocation& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline CapacityAllocation& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the capacity allocation was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }
    inline CapacityAllocation& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}
    inline CapacityAllocation& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the capacity allocation request was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestCompletionTime() const{ return m_requestCompletionTime; }
    inline bool RequestCompletionTimeHasBeenSet() const { return m_requestCompletionTimeHasBeenSet; }
    inline void SetRequestCompletionTime(const Aws::Utils::DateTime& value) { m_requestCompletionTimeHasBeenSet = true; m_requestCompletionTime = value; }
    inline void SetRequestCompletionTime(Aws::Utils::DateTime&& value) { m_requestCompletionTimeHasBeenSet = true; m_requestCompletionTime = std::move(value); }
    inline CapacityAllocation& WithRequestCompletionTime(const Aws::Utils::DateTime& value) { SetRequestCompletionTime(value); return *this;}
    inline CapacityAllocation& WithRequestCompletionTime(Aws::Utils::DateTime&& value) { SetRequestCompletionTime(std::move(value)); return *this;}
    ///@}
  private:

    CapacityAllocationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet = false;

    Aws::Utils::DateTime m_requestCompletionTime;
    bool m_requestCompletionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
