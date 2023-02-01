/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SyncJobState.h>
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
   * <p>The SyncJob status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SyncJobStatus">AWS
   * API Reference</a></p>
   */
  class SyncJobStatus
  {
  public:
    AWS_IOTTWINMAKER_API SyncJobStatus();
    AWS_IOTTWINMAKER_API SyncJobStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncJobStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The SyncJob status state.</p>
     */
    inline const SyncJobState& GetState() const{ return m_state; }

    /**
     * <p>The SyncJob status state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The SyncJob status state.</p>
     */
    inline void SetState(const SyncJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The SyncJob status state.</p>
     */
    inline void SetState(SyncJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The SyncJob status state.</p>
     */
    inline SyncJobStatus& WithState(const SyncJobState& value) { SetState(value); return *this;}

    /**
     * <p>The SyncJob status state.</p>
     */
    inline SyncJobStatus& WithState(SyncJobState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The SyncJob error.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>The SyncJob error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The SyncJob error.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The SyncJob error.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The SyncJob error.</p>
     */
    inline SyncJobStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>The SyncJob error.</p>
     */
    inline SyncJobStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    SyncJobState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
