/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SyncResourceState.h>
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
   * <p>The sync resource status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SyncResourceStatus">AWS
   * API Reference</a></p>
   */
  class SyncResourceStatus
  {
  public:
    AWS_IOTTWINMAKER_API SyncResourceStatus();
    AWS_IOTTWINMAKER_API SyncResourceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SyncResourceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sync resource status state.</p>
     */
    inline const SyncResourceState& GetState() const{ return m_state; }

    /**
     * <p>The sync resource status state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The sync resource status state.</p>
     */
    inline void SetState(const SyncResourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The sync resource status state.</p>
     */
    inline void SetState(SyncResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The sync resource status state.</p>
     */
    inline SyncResourceStatus& WithState(const SyncResourceState& value) { SetState(value); return *this;}

    /**
     * <p>The sync resource status state.</p>
     */
    inline SyncResourceStatus& WithState(SyncResourceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status error.</p>
     */
    inline const ErrorDetails& GetError() const{ return m_error; }

    /**
     * <p>The status error.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The status error.</p>
     */
    inline void SetError(const ErrorDetails& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The status error.</p>
     */
    inline void SetError(ErrorDetails&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The status error.</p>
     */
    inline SyncResourceStatus& WithError(const ErrorDetails& value) { SetError(value); return *this;}

    /**
     * <p>The status error.</p>
     */
    inline SyncResourceStatus& WithError(ErrorDetails&& value) { SetError(std::move(value)); return *this;}

  private:

    SyncResourceState m_state;
    bool m_stateHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
