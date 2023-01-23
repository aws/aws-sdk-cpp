/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
   * <p>Describes the percentile and percentile value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PercentPair">AWS API
   * Reference</a></p>
   */
  class PercentPair
  {
  public:
    AWS_IOT_API PercentPair();
    AWS_IOT_API PercentPair(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PercentPair& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentile.</p>
     */
    inline double GetPercent() const{ return m_percent; }

    /**
     * <p>The percentile.</p>
     */
    inline bool PercentHasBeenSet() const { return m_percentHasBeenSet; }

    /**
     * <p>The percentile.</p>
     */
    inline void SetPercent(double value) { m_percentHasBeenSet = true; m_percent = value; }

    /**
     * <p>The percentile.</p>
     */
    inline PercentPair& WithPercent(double value) { SetPercent(value); return *this;}


    /**
     * <p>The value of the percentile.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the percentile.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the percentile.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the percentile.</p>
     */
    inline PercentPair& WithValue(double value) { SetValue(value); return *this;}

  private:

    double m_percent;
    bool m_percentHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
