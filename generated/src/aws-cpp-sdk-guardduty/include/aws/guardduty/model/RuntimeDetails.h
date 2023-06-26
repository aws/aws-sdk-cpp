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
    AWS_GUARDDUTY_API RuntimeDetails();
    AWS_GUARDDUTY_API RuntimeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API RuntimeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the observed process.</p>
     */
    inline const ProcessDetails& GetProcess() const{ return m_process; }

    /**
     * <p>Information about the observed process.</p>
     */
    inline bool ProcessHasBeenSet() const { return m_processHasBeenSet; }

    /**
     * <p>Information about the observed process.</p>
     */
    inline void SetProcess(const ProcessDetails& value) { m_processHasBeenSet = true; m_process = value; }

    /**
     * <p>Information about the observed process.</p>
     */
    inline void SetProcess(ProcessDetails&& value) { m_processHasBeenSet = true; m_process = std::move(value); }

    /**
     * <p>Information about the observed process.</p>
     */
    inline RuntimeDetails& WithProcess(const ProcessDetails& value) { SetProcess(value); return *this;}

    /**
     * <p>Information about the observed process.</p>
     */
    inline RuntimeDetails& WithProcess(ProcessDetails&& value) { SetProcess(std::move(value)); return *this;}


    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline const RuntimeContext& GetContext() const{ return m_context; }

    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }

    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline void SetContext(const RuntimeContext& value) { m_contextHasBeenSet = true; m_context = value; }

    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline void SetContext(RuntimeContext&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }

    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline RuntimeDetails& WithContext(const RuntimeContext& value) { SetContext(value); return *this;}

    /**
     * <p>Additional information about the suspicious activity.</p>
     */
    inline RuntimeDetails& WithContext(RuntimeContext&& value) { SetContext(std::move(value)); return *this;}

  private:

    ProcessDetails m_process;
    bool m_processHasBeenSet = false;

    RuntimeContext m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
