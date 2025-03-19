/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/MetadataTransferJobState.h>
#include <aws/iottwinmaker/model/ErrorDetails.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The metadata transfer job status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/MetadataTransferJobStatus">AWS
   * API Reference</a></p>
   */
  class MetadataTransferJobStatus
  {
  public:
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus() = default;
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata transfer job state.</p>
     */
    inline MetadataTransferJobState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(MetadataTransferJobState value) { m_stateHasBeenSet = true; m_state = value; }
    inline MetadataTransferJobStatus& WithState(MetadataTransferJobState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job error.</p>
     */
    inline const ErrorDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    MetadataTransferJobStatus& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queued position.</p>
     */
    inline int GetQueuedPosition() const { return m_queuedPosition; }
    inline bool QueuedPositionHasBeenSet() const { return m_queuedPositionHasBeenSet; }
    inline void SetQueuedPosition(int value) { m_queuedPositionHasBeenSet = true; m_queuedPosition = value; }
    inline MetadataTransferJobStatus& WithQueuedPosition(int value) { SetQueuedPosition(value); return *this;}
    ///@}
  private:

    MetadataTransferJobState m_state{MetadataTransferJobState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    int m_queuedPosition{0};
    bool m_queuedPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
