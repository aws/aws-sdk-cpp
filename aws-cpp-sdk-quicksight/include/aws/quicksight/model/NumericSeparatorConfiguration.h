/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericSeparatorSymbol.h>
#include <aws/quicksight/model/ThousandSeparatorOptions.h>
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
   * <p>The options that determine the numeric separator configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericSeparatorConfiguration">AWS
   * API Reference</a></p>
   */
  class NumericSeparatorConfiguration
  {
  public:
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration();
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericSeparatorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the decimal separator.</p>
     */
    inline const NumericSeparatorSymbol& GetDecimalSeparator() const{ return m_decimalSeparator; }

    /**
     * <p>Determines the decimal separator.</p>
     */
    inline bool DecimalSeparatorHasBeenSet() const { return m_decimalSeparatorHasBeenSet; }

    /**
     * <p>Determines the decimal separator.</p>
     */
    inline void SetDecimalSeparator(const NumericSeparatorSymbol& value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = value; }

    /**
     * <p>Determines the decimal separator.</p>
     */
    inline void SetDecimalSeparator(NumericSeparatorSymbol&& value) { m_decimalSeparatorHasBeenSet = true; m_decimalSeparator = std::move(value); }

    /**
     * <p>Determines the decimal separator.</p>
     */
    inline NumericSeparatorConfiguration& WithDecimalSeparator(const NumericSeparatorSymbol& value) { SetDecimalSeparator(value); return *this;}

    /**
     * <p>Determines the decimal separator.</p>
     */
    inline NumericSeparatorConfiguration& WithDecimalSeparator(NumericSeparatorSymbol&& value) { SetDecimalSeparator(std::move(value)); return *this;}


    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline const ThousandSeparatorOptions& GetThousandsSeparator() const{ return m_thousandsSeparator; }

    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline bool ThousandsSeparatorHasBeenSet() const { return m_thousandsSeparatorHasBeenSet; }

    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline void SetThousandsSeparator(const ThousandSeparatorOptions& value) { m_thousandsSeparatorHasBeenSet = true; m_thousandsSeparator = value; }

    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline void SetThousandsSeparator(ThousandSeparatorOptions&& value) { m_thousandsSeparatorHasBeenSet = true; m_thousandsSeparator = std::move(value); }

    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline NumericSeparatorConfiguration& WithThousandsSeparator(const ThousandSeparatorOptions& value) { SetThousandsSeparator(value); return *this;}

    /**
     * <p>The options that determine the thousands separator configuration.</p>
     */
    inline NumericSeparatorConfiguration& WithThousandsSeparator(ThousandSeparatorOptions&& value) { SetThousandsSeparator(std::move(value)); return *this;}

  private:

    NumericSeparatorSymbol m_decimalSeparator;
    bool m_decimalSeparatorHasBeenSet = false;

    ThousandSeparatorOptions m_thousandsSeparator;
    bool m_thousandsSeparatorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
