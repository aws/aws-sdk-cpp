/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>

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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the port range associated with a finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PortRange">AWS
   * API Reference</a></p>
   */
  class PortRange
  {
  public:
    AWS_INSPECTOR2_API PortRange() = default;
    AWS_INSPECTOR2_API PortRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The beginning port in a port range.</p>
     */
    inline int GetBegin() const { return m_begin; }
    inline bool BeginHasBeenSet() const { return m_beginHasBeenSet; }
    inline void SetBegin(int value) { m_beginHasBeenSet = true; m_begin = value; }
    inline PortRange& WithBegin(int value) { SetBegin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending port in a port range.</p>
     */
    inline int GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }
    inline PortRange& WithEnd(int value) { SetEnd(value); return *this;}
    ///@}
  private:

    int m_begin{0};
    bool m_beginHasBeenSet = false;

    int m_end{0};
    bool m_endHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
