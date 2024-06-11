/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourceStatus.h>
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
   * <p>Contains the state of an impacted resource that the runtime instance of the
   * lifecycle policy identified for action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionResourceState">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionResourceState
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceState();
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResourceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The runtime status of the lifecycle action taken for the impacted
     * resource.</p>
     */
    inline const LifecycleExecutionResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LifecycleExecutionResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LifecycleExecutionResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LifecycleExecutionResourceState& WithStatus(const LifecycleExecutionResourceStatus& value) { SetStatus(value); return *this;}
    inline LifecycleExecutionResourceState& WithStatus(LifecycleExecutionResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Messaging that clarifies the reason for the assigned status.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline LifecycleExecutionResourceState& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline LifecycleExecutionResourceState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline LifecycleExecutionResourceState& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    LifecycleExecutionResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
