/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ServiceJobRetryAction.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Specifies conditions for when to exit or retry a service job based on the
   * exit status or status reason.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobEvaluateOnExit">AWS
   * API Reference</a></p>
   */
  class ServiceJobEvaluateOnExit
  {
  public:
    AWS_BATCH_API ServiceJobEvaluateOnExit() = default;
    AWS_BATCH_API ServiceJobEvaluateOnExit(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceJobEvaluateOnExit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to take if the service job exits with the specified condition.
     * Valid values are <code>RETRY</code> and <code>EXIT</code>.</p>
     */
    inline ServiceJobRetryAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ServiceJobRetryAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline ServiceJobEvaluateOnExit& WithAction(ServiceJobRetryAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a glob pattern to match against the StatusReason returned for a job.
     * The pattern can contain up to 512 characters and can contain all printable
     * characters. It can optionally end with an asterisk (*) so that only the start of
     * the string needs to be an exact match.</p>
     */
    inline const Aws::String& GetOnStatusReason() const { return m_onStatusReason; }
    inline bool OnStatusReasonHasBeenSet() const { return m_onStatusReasonHasBeenSet; }
    template<typename OnStatusReasonT = Aws::String>
    void SetOnStatusReason(OnStatusReasonT&& value) { m_onStatusReasonHasBeenSet = true; m_onStatusReason = std::forward<OnStatusReasonT>(value); }
    template<typename OnStatusReasonT = Aws::String>
    ServiceJobEvaluateOnExit& WithOnStatusReason(OnStatusReasonT&& value) { SetOnStatusReason(std::forward<OnStatusReasonT>(value)); return *this;}
    ///@}
  private:

    ServiceJobRetryAction m_action{ServiceJobRetryAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    Aws::String m_onStatusReason;
    bool m_onStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
