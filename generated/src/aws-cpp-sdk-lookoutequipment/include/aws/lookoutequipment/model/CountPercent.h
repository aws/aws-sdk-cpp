/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>

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
namespace LookoutEquipment
{
namespace Model
{

  /**
   * <p> Entity that comprises information of count and percentage. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutequipment-2020-12-15/CountPercent">AWS
   * API Reference</a></p>
   */
  class CountPercent
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API CountPercent() = default;
    AWS_LOOKOUTEQUIPMENT_API CountPercent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API CountPercent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTEQUIPMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the count of occurences of the given statistic. </p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline CountPercent& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the percentage of occurances of the given statistic. </p>
     */
    inline double GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(double value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline CountPercent& WithPercentage(double value) { SetPercentage(value); return *this;}
    ///@}
  private:

    int m_count{0};
    bool m_countHasBeenSet = false;

    double m_percentage{0.0};
    bool m_percentageHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
