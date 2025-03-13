/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/OverrideTimeSlice.h>
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
   * <p>Information about the hours of operations with the effective override
   * applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OperationalHour">AWS
   * API Reference</a></p>
   */
  class OperationalHour
  {
  public:
    AWS_CONNECT_API OperationalHour() = default;
    AWS_CONNECT_API OperationalHour(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OperationalHour& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time that your contact center opens.</p>
     */
    inline const OverrideTimeSlice& GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    template<typename StartT = OverrideTimeSlice>
    void SetStart(StartT&& value) { m_startHasBeenSet = true; m_start = std::forward<StartT>(value); }
    template<typename StartT = OverrideTimeSlice>
    OperationalHour& WithStart(StartT&& value) { SetStart(std::forward<StartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time that your contact center closes.</p>
     */
    inline const OverrideTimeSlice& GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    template<typename EndT = OverrideTimeSlice>
    void SetEnd(EndT&& value) { m_endHasBeenSet = true; m_end = std::forward<EndT>(value); }
    template<typename EndT = OverrideTimeSlice>
    OperationalHour& WithEnd(EndT&& value) { SetEnd(std::forward<EndT>(value)); return *this;}
    ///@}
  private:

    OverrideTimeSlice m_start;
    bool m_startHasBeenSet = false;

    OverrideTimeSlice m_end;
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
