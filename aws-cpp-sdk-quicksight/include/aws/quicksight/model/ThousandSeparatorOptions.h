/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericSeparatorSymbol.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The options that determine the thousands separator
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThousandSeparatorOptions">AWS
   * API Reference</a></p>
   */
  class ThousandSeparatorOptions
  {
  public:
    AWS_QUICKSIGHT_API ThousandSeparatorOptions();
    AWS_QUICKSIGHT_API ThousandSeparatorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThousandSeparatorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline const NumericSeparatorSymbol& GetSymbol() const{ return m_symbol; }

    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline bool SymbolHasBeenSet() const { return m_symbolHasBeenSet; }

    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline void SetSymbol(const NumericSeparatorSymbol& value) { m_symbolHasBeenSet = true; m_symbol = value; }

    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline void SetSymbol(NumericSeparatorSymbol&& value) { m_symbolHasBeenSet = true; m_symbol = std::move(value); }

    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline ThousandSeparatorOptions& WithSymbol(const NumericSeparatorSymbol& value) { SetSymbol(value); return *this;}

    /**
     * <p>Determines the thousands separator symbol.</p>
     */
    inline ThousandSeparatorOptions& WithSymbol(NumericSeparatorSymbol&& value) { SetSymbol(std::move(value)); return *this;}


    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline ThousandSeparatorOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines the visibility of the thousands separator.</p>
     */
    inline ThousandSeparatorOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    NumericSeparatorSymbol m_symbol;
    bool m_symbolHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
