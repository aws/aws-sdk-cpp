/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The logarithmic axis scale setup.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisLogarithmicScale">AWS
   * API Reference</a></p>
   */
  class AxisLogarithmicScale
  {
  public:
    AWS_QUICKSIGHT_API AxisLogarithmicScale();
    AWS_QUICKSIGHT_API AxisLogarithmicScale(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisLogarithmicScale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The base setup of a logarithmic axis scale.</p>
     */
    inline double GetBase() const{ return m_base; }

    /**
     * <p>The base setup of a logarithmic axis scale.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The base setup of a logarithmic axis scale.</p>
     */
    inline void SetBase(double value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The base setup of a logarithmic axis scale.</p>
     */
    inline AxisLogarithmicScale& WithBase(double value) { SetBase(value); return *this;}

  private:

    double m_base;
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
