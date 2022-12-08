/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>Determines the color that is applied to a particular data
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataColor">AWS
   * API Reference</a></p>
   */
  class DataColor
  {
  public:
    AWS_QUICKSIGHT_API DataColor();
    AWS_QUICKSIGHT_API DataColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline DataColor& WithColor(const Aws::String& value) { SetColor(value); return *this;}

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline DataColor& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}

    /**
     * <p>The color that is applied to the data value.</p>
     */
    inline DataColor& WithColor(const char* value) { SetColor(value); return *this;}


    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline double GetDataValue() const{ return m_dataValue; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline bool DataValueHasBeenSet() const { return m_dataValueHasBeenSet; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline void SetDataValue(double value) { m_dataValueHasBeenSet = true; m_dataValue = value; }

    /**
     * <p>The data value that the color is applied to.</p>
     */
    inline DataColor& WithDataValue(double value) { SetDataValue(value); return *this;}

  private:

    Aws::String m_color;
    bool m_colorHasBeenSet = false;

    double m_dataValue;
    bool m_dataValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
