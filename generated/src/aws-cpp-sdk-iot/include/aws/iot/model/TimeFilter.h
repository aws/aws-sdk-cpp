/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A filter that can be used to list command executions for a device that
   * started or completed before or after a particular date and time.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TimeFilter">AWS API
   * Reference</a></p>
   */
  class TimeFilter
  {
  public:
    AWS_IOT_API TimeFilter() = default;
    AWS_IOT_API TimeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API TimeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter to display command executions that started or completed only after a
     * particular date and time.</p>
     */
    inline const Aws::String& GetAfter() const { return m_after; }
    inline bool AfterHasBeenSet() const { return m_afterHasBeenSet; }
    template<typename AfterT = Aws::String>
    void SetAfter(AfterT&& value) { m_afterHasBeenSet = true; m_after = std::forward<AfterT>(value); }
    template<typename AfterT = Aws::String>
    TimeFilter& WithAfter(AfterT&& value) { SetAfter(std::forward<AfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter to display command executions that started or completed only before a
     * particular date and time.</p>
     */
    inline const Aws::String& GetBefore() const { return m_before; }
    inline bool BeforeHasBeenSet() const { return m_beforeHasBeenSet; }
    template<typename BeforeT = Aws::String>
    void SetBefore(BeforeT&& value) { m_beforeHasBeenSet = true; m_before = std::forward<BeforeT>(value); }
    template<typename BeforeT = Aws::String>
    TimeFilter& WithBefore(BeforeT&& value) { SetBefore(std::forward<BeforeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_after;
    bool m_afterHasBeenSet = false;

    Aws::String m_before;
    bool m_beforeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
