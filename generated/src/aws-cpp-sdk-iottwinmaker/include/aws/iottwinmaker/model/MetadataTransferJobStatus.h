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
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus();
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API MetadataTransferJobStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metadata transfer job state.</p>
     */
    inline const MetadataTransferJobState& GetState() const{ return m_state; }

    /**
     * <p>The metadata transfer job state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The metadata transfer job state.</p>
     */
    inline void SetState(const MetadataTransferJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The metadata transfer job state.</p>
     */
    inline void SetState(MetadataTransferJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The metadata transfer job state.</p>
     */
    inline MetadataTransferJobStatus& WithState(const MetadataTransferJobState& value) { SetState(value); return *this;}

    /**
     * <p>The metadata transfer job state.</p>
     */
    inline MetadataTransferJobStatus& WithState(MetadataTransferJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The metadata transfer job error.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>The metadata transfer job error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The metadata transfer job error.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The metadata transfer job error.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The metadata transfer job error.</p>
     */
    inline MetadataTransferJobStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>The metadata transfer job error.</p>
     */
    inline MetadataTransferJobStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>The queued position.</p>
     */
    inline int GetQueuedPosition() const{ return m_queuedPosition; }

    /**
     * <p>The queued position.</p>
     */
    inline bool QueuedPositionHasBeenSet() const { return m_queuedPositionHasBeenSet; }

    /**
     * <p>The queued position.</p>
     */
    inline void SetQueuedPosition(int value) { m_queuedPositionHasBeenSet = true; m_queuedPosition = value; }

    /**
     * <p>The queued position.</p>
     */
    inline MetadataTransferJobStatus& WithQueuedPosition(int value) { SetQueuedPosition(value); return *this;}

  private:

    MetadataTransferJobState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    int m_queuedPosition;
    bool m_queuedPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
