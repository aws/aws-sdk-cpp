/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Determines the row alternate color options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RowAlternateColorOptions">AWS
   * API Reference</a></p>
   */
  class RowAlternateColorOptions
  {
  public:
    AWS_QUICKSIGHT_API RowAlternateColorOptions();
    AWS_QUICKSIGHT_API RowAlternateColorOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RowAlternateColorOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the widget status.</p>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Determines the widget status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Determines the widget status.</p>
     */
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Determines the widget status.</p>
     */
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Determines the widget status.</p>
     */
    inline RowAlternateColorOptions& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Determines the widget status.</p>
     */
    inline RowAlternateColorOptions& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRowAlternateColors() const{ return m_rowAlternateColors; }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline bool RowAlternateColorsHasBeenSet() const { return m_rowAlternateColorsHasBeenSet; }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline void SetRowAlternateColors(const Aws::Vector<Aws::String>& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors = value; }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline void SetRowAlternateColors(Aws::Vector<Aws::String>&& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors = std::move(value); }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline RowAlternateColorOptions& WithRowAlternateColors(const Aws::Vector<Aws::String>& value) { SetRowAlternateColors(value); return *this;}

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline RowAlternateColorOptions& WithRowAlternateColors(Aws::Vector<Aws::String>&& value) { SetRowAlternateColors(std::move(value)); return *this;}

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline RowAlternateColorOptions& AddRowAlternateColors(const Aws::String& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(value); return *this; }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline RowAlternateColorOptions& AddRowAlternateColors(Aws::String&& value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(std::move(value)); return *this; }

    /**
     * <p>Determines the list of row alternate colors.</p>
     */
    inline RowAlternateColorOptions& AddRowAlternateColors(const char* value) { m_rowAlternateColorsHasBeenSet = true; m_rowAlternateColors.push_back(value); return *this; }

  private:

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_rowAlternateColors;
    bool m_rowAlternateColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
