/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/ThresholdType.h>
#include <aws/databrew/model/ThresholdUnit.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>The threshold used with a non-aggregate check expression. The non-aggregate
   * check expression will be applied to each row in a specific column. Then the
   * threshold will be used to determine whether the validation
   * succeeds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/Threshold">AWS
   * API Reference</a></p>
   */
  class Threshold
  {
  public:
    AWS_GLUEDATABREW_API Threshold();
    AWS_GLUEDATABREW_API Threshold(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Threshold& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of a threshold.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline Threshold& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a threshold. Used for comparison of an actual count of rows that
     * satisfy the rule to the threshold value.</p>
     */
    inline const ThresholdType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ThresholdType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ThresholdType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Threshold& WithType(const ThresholdType& value) { SetType(value); return *this;}
    inline Threshold& WithType(ThresholdType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unit of threshold value. Can be either a COUNT or PERCENTAGE of the full
     * sample size used for validation.</p>
     */
    inline const ThresholdUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const ThresholdUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(ThresholdUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline Threshold& WithUnit(const ThresholdUnit& value) { SetUnit(value); return *this;}
    inline Threshold& WithUnit(ThresholdUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}
  private:

    double m_value;
    bool m_valueHasBeenSet = false;

    ThresholdType m_type;
    bool m_typeHasBeenSet = false;

    ThresholdUnit m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
