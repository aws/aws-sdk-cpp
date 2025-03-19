/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Object describing time with which the segment is associated. It can have
   * different representations of time. Currently supported:
   * absoluteTime</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisTimeData">AWS
   * API Reference</a></p>
   */
  class RealTimeContactAnalysisTimeData
  {
  public:
    AWS_CONNECT_API RealTimeContactAnalysisTimeData() = default;
    AWS_CONNECT_API RealTimeContactAnalysisTimeData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RealTimeContactAnalysisTimeData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time represented in ISO 8601 format: yyyy-MM-ddThh:mm:ss.SSSZ. For example,
     * 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::Utils::DateTime& GetAbsoluteTime() const { return m_absoluteTime; }
    inline bool AbsoluteTimeHasBeenSet() const { return m_absoluteTimeHasBeenSet; }
    template<typename AbsoluteTimeT = Aws::Utils::DateTime>
    void SetAbsoluteTime(AbsoluteTimeT&& value) { m_absoluteTimeHasBeenSet = true; m_absoluteTime = std::forward<AbsoluteTimeT>(value); }
    template<typename AbsoluteTimeT = Aws::Utils::DateTime>
    RealTimeContactAnalysisTimeData& WithAbsoluteTime(AbsoluteTimeT&& value) { SetAbsoluteTime(std::forward<AbsoluteTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_absoluteTime{};
    bool m_absoluteTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
