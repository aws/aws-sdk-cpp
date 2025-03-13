/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a time range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeRange">AWS
   * API Reference</a></p>
   */
  class TimeRange
  {
  public:
    AWS_CODEDEPLOY_API TimeRange() = default;
    AWS_CODEDEPLOY_API TimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API TimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the time range.</p>  <p>Specify null to leave the
     * start time open-ended.</p> 
     */
    inline const Aws::Utils::DateTime& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = Aws::Utils::DateTime>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = Aws::Utils::DateTime>
    TimeRange& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the time range.</p>  <p>Specify null to leave the end
     * time open-ended.</p> 
     */
    inline const Aws::Utils::DateTime& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = Aws::Utils::DateTime>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = Aws::Utils::DateTime>
    TimeRange& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_start{};
    bool m_startHasBeenSet = false;

    Aws::Utils::DateTime m_end{};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
