/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>

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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The range of values that the property supports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/Range">AWS API
   * Reference</a></p>
   */
  class Range
  {
  public:
    AWS_APPFLOW_API Range() = default;
    AWS_APPFLOW_API Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum value supported by the field.</p>
     */
    inline double GetMaximum() const { return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline Range& WithMaximum(double value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum value supported by the field.</p>
     */
    inline double GetMinimum() const { return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline Range& WithMinimum(double value) { SetMinimum(value); return *this;}
    ///@}
  private:

    double m_maximum{0.0};
    bool m_maximumHasBeenSet = false;

    double m_minimum{0.0};
    bool m_minimumHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
