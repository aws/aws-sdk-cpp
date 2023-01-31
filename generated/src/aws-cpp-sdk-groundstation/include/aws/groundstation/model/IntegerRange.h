/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>

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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>An integer range that has a minimum and maximum value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/IntegerRange">AWS
   * API Reference</a></p>
   */
  class IntegerRange
  {
  public:
    AWS_GROUNDSTATION_API IntegerRange();
    AWS_GROUNDSTATION_API IntegerRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API IntegerRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A maximum value.</p>
     */
    inline int GetMaximum() const{ return m_maximum; }

    /**
     * <p>A maximum value.</p>
     */
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }

    /**
     * <p>A maximum value.</p>
     */
    inline void SetMaximum(int value) { m_maximumHasBeenSet = true; m_maximum = value; }

    /**
     * <p>A maximum value.</p>
     */
    inline IntegerRange& WithMaximum(int value) { SetMaximum(value); return *this;}


    /**
     * <p>A minimum value.</p>
     */
    inline int GetMinimum() const{ return m_minimum; }

    /**
     * <p>A minimum value.</p>
     */
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }

    /**
     * <p>A minimum value.</p>
     */
    inline void SetMinimum(int value) { m_minimumHasBeenSet = true; m_minimum = value; }

    /**
     * <p>A minimum value.</p>
     */
    inline IntegerRange& WithMinimum(int value) { SetMinimum(value); return *this;}

  private:

    int m_maximum;
    bool m_maximumHasBeenSet = false;

    int m_minimum;
    bool m_minimumHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
