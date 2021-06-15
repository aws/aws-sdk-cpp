/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/Transition.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Schedule configuration parameters. A channel must be stopped before changes
   * can be made to the schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API ScheduleConfiguration
  {
  public:
    ScheduleConfiguration();
    ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Program transition configurations.</p>
     */
    inline const Transition& GetTransition() const{ return m_transition; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline void SetTransition(const Transition& value) { m_transitionHasBeenSet = true; m_transition = value; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline void SetTransition(Transition&& value) { m_transitionHasBeenSet = true; m_transition = std::move(value); }

    /**
     * <p>Program transition configurations.</p>
     */
    inline ScheduleConfiguration& WithTransition(const Transition& value) { SetTransition(value); return *this;}

    /**
     * <p>Program transition configurations.</p>
     */
    inline ScheduleConfiguration& WithTransition(Transition&& value) { SetTransition(std::move(value)); return *this;}

  private:

    Transition m_transition;
    bool m_transitionHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
