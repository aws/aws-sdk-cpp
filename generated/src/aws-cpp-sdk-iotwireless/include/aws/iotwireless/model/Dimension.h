/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/DimensionName.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The required list of dimensions for the metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Dimension">AWS
   * API Reference</a></p>
   */
  class Dimension
  {
  public:
    AWS_IOTWIRELESS_API Dimension();
    AWS_IOTWIRELESS_API Dimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Dimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension.</p>
     */
    inline const DimensionName& GetName() const{ return m_name; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline void SetName(const DimensionName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the dimension.</p>
     */
    inline void SetName(DimensionName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the dimension.</p>
     */
    inline Dimension& WithName(const DimensionName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the dimension.</p>
     */
    inline Dimension& WithName(DimensionName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The dimension's value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The dimension's value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The dimension's value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The dimension's value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The dimension's value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The dimension's value.</p>
     */
    inline Dimension& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The dimension's value.</p>
     */
    inline Dimension& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The dimension's value.</p>
     */
    inline Dimension& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    DimensionName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
