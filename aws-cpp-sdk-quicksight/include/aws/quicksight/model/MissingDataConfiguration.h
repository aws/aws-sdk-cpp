/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/MissingDataTreatmentOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration options that determine how missing data is treated during
   * the rendering of a line chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MissingDataConfiguration">AWS
   * API Reference</a></p>
   */
  class MissingDataConfiguration
  {
  public:
    AWS_QUICKSIGHT_API MissingDataConfiguration();
    AWS_QUICKSIGHT_API MissingDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MissingDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline const MissingDataTreatmentOption& GetTreatmentOption() const{ return m_treatmentOption; }

    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline bool TreatmentOptionHasBeenSet() const { return m_treatmentOptionHasBeenSet; }

    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline void SetTreatmentOption(const MissingDataTreatmentOption& value) { m_treatmentOptionHasBeenSet = true; m_treatmentOption = value; }

    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline void SetTreatmentOption(MissingDataTreatmentOption&& value) { m_treatmentOptionHasBeenSet = true; m_treatmentOption = std::move(value); }

    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline MissingDataConfiguration& WithTreatmentOption(const MissingDataTreatmentOption& value) { SetTreatmentOption(value); return *this;}

    /**
     * <p>The treatment option that determines how missing data should be rendered.
     * Choose from the following options:</p> <ul> <li> <p> <code>INTERPOLATE</code>:
     * Interpolate missing values between the prior and the next known value.</p> </li>
     * <li> <p> <code>SHOW_AS_ZERO</code>: Show missing values as the value
     * <code>0</code>.</p> </li> <li> <p> <code>SHOW_AS_BLANK</code>: Display a blank
     * space when rendering missing data.</p> </li> </ul>
     */
    inline MissingDataConfiguration& WithTreatmentOption(MissingDataTreatmentOption&& value) { SetTreatmentOption(std::move(value)); return *this;}

  private:

    MissingDataTreatmentOption m_treatmentOption;
    bool m_treatmentOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
