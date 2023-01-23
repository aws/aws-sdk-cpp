/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar/CodeStar_EXPORTS.h>
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
namespace CodeStar
{
namespace Model
{

  /**
   * <p>An indication of whether a project creation or deletion is failed or
   * successful.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codestar-2017-04-19/ProjectStatus">AWS
   * API Reference</a></p>
   */
  class ProjectStatus
  {
  public:
    AWS_CODESTAR_API ProjectStatus();
    AWS_CODESTAR_API ProjectStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API ProjectStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODESTAR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline ProjectStatus& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline ProjectStatus& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The phase of completion for a project creation or deletion.</p>
     */
    inline ProjectStatus& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline ProjectStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline ProjectStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>In the case of a project creation or deletion failure, a reason for the
     * failure.</p>
     */
    inline ProjectStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStar
} // namespace Aws
