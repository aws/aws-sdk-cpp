/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ProcessDetails.h>
#include <aws/guardduty/model/RuntimeContext.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the process and any required context values for a specific
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/RuntimeDetails">AWS
   * API Reference</a></p>
   */
  class RuntimeDetails
  {
  public:
    AWS_GUARDDUTY_API RuntimeDetails() = default;
    AWS_GUARDDUTY_API RuntimeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RuntimeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the observed process.</p>
     */
    inline const ProcessDetails& GetProcess() const { return m_process; }
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }
    template<typename ProcessT = ProcessDetails>
    void SetProcess(ProcessT&& value) { m_processHasBeenSet = true; m_process = std::forward<ProcessT>(value); }
    template<typename ProcessT = ProcessDetails>
    RuntimeDetails& WithProcess(ProcessT&& value) { SetProcess(std::forward<ProcessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline const RuntimeContext& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = RuntimeContext>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = RuntimeContext>
    RuntimeDetails& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    ProcessDetails m_process;
    bool m_processHasBeenSet = false;

    RuntimeContext m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
