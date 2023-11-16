/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecycleExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The current state of the runtime instance of the lifecycle
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionState">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionState
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionState();
    AWS_IMAGEBUILDER_API LifecycleExecutionState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline const LifecycleExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline void SetStatus(const LifecycleExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline void SetStatus(LifecycleExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline LifecycleExecutionState& WithStatus(const LifecycleExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The runtime status of the lifecycle execution.</p>
     */
    inline LifecycleExecutionState& WithStatus(LifecycleExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the current status.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the current status.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the current status.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the current status.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the current status.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the current status.</p>
     */
    inline LifecycleExecutionState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the current status.</p>
     */
    inline LifecycleExecutionState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the current status.</p>
     */
    inline LifecycleExecutionState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    LifecycleExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
