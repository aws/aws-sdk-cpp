/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>A dimension name and value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DimensionNameValue">AWS
   * API Reference</a></p>
   */
  class DimensionNameValue
  {
  public:
    AWS_LOOKOUTMETRICS_API DimensionNameValue();
    AWS_LOOKOUTMETRICS_API DimensionNameValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DimensionNameValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dimension.</p>
     */
    inline const Aws::String& GetDimensionName() const{ return m_dimensionName; }
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }
    inline void SetDimensionName(const Aws::String& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }
    inline void SetDimensionName(Aws::String&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }
    inline void SetDimensionName(const char* value) { m_dimensionNameHasBeenSet = true; m_dimensionName.assign(value); }
    inline DimensionNameValue& WithDimensionName(const Aws::String& value) { SetDimensionName(value); return *this;}
    inline DimensionNameValue& WithDimensionName(Aws::String&& value) { SetDimensionName(std::move(value)); return *this;}
    inline DimensionNameValue& WithDimensionName(const char* value) { SetDimensionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the dimension.</p>
     */
    inline const Aws::String& GetDimensionValue() const{ return m_dimensionValue; }
    inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
    inline void SetDimensionValue(const Aws::String& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = value; }
    inline void SetDimensionValue(Aws::String&& value) { m_dimensionValueHasBeenSet = true; m_dimensionValue = std::move(value); }
    inline void SetDimensionValue(const char* value) { m_dimensionValueHasBeenSet = true; m_dimensionValue.assign(value); }
    inline DimensionNameValue& WithDimensionValue(const Aws::String& value) { SetDimensionValue(value); return *this;}
    inline DimensionNameValue& WithDimensionValue(Aws::String&& value) { SetDimensionValue(std::move(value)); return *this;}
    inline DimensionNameValue& WithDimensionValue(const char* value) { SetDimensionValue(value); return *this;}
    ///@}
  private:

    Aws::String m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::String m_dimensionValue;
    bool m_dimensionValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
