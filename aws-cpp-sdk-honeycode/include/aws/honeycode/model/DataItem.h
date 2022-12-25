/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/model/Format.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>The data in a particular data cell defined on the screen.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/DataItem">AWS
   * API Reference</a></p>
   */
  class DataItem
  {
  public:
    AWS_HONEYCODE_API DataItem();
    AWS_HONEYCODE_API DataItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API DataItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline const Format& GetOverrideFormat() const{ return m_overrideFormat; }

    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline bool OverrideFormatHasBeenSet() const { return m_overrideFormatHasBeenSet; }

    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline void SetOverrideFormat(const Format& value) { m_overrideFormatHasBeenSet = true; m_overrideFormat = value; }

    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline void SetOverrideFormat(Format&& value) { m_overrideFormatHasBeenSet = true; m_overrideFormat = std::move(value); }

    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline DataItem& WithOverrideFormat(const Format& value) { SetOverrideFormat(value); return *this;}

    /**
     * <p> The overrideFormat is optional and is specified only if a particular row of
     * data has a different format for the data than the default format defined on the
     * screen or the table. </p>
     */
    inline DataItem& WithOverrideFormat(Format&& value) { SetOverrideFormat(std::move(value)); return *this;}


    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline const Aws::String& GetRawValue() const{ return m_rawValue; }

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline bool RawValueHasBeenSet() const { return m_rawValueHasBeenSet; }

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline void SetRawValue(const Aws::String& value) { m_rawValueHasBeenSet = true; m_rawValue = value; }

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline void SetRawValue(Aws::String&& value) { m_rawValueHasBeenSet = true; m_rawValue = std::move(value); }

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline void SetRawValue(const char* value) { m_rawValueHasBeenSet = true; m_rawValue.assign(value); }

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline DataItem& WithRawValue(const Aws::String& value) { SetRawValue(value); return *this;}

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline DataItem& WithRawValue(Aws::String&& value) { SetRawValue(std::move(value)); return *this;}

    /**
     * <p>The raw value of the data. e.g. jsmith@example.com</p>
     */
    inline DataItem& WithRawValue(const char* value) { SetRawValue(value); return *this;}


    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline const Aws::String& GetFormattedValue() const{ return m_formattedValue; }

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline bool FormattedValueHasBeenSet() const { return m_formattedValueHasBeenSet; }

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline void SetFormattedValue(const Aws::String& value) { m_formattedValueHasBeenSet = true; m_formattedValue = value; }

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline void SetFormattedValue(Aws::String&& value) { m_formattedValueHasBeenSet = true; m_formattedValue = std::move(value); }

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline void SetFormattedValue(const char* value) { m_formattedValueHasBeenSet = true; m_formattedValue.assign(value); }

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline DataItem& WithFormattedValue(const Aws::String& value) { SetFormattedValue(value); return *this;}

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline DataItem& WithFormattedValue(Aws::String&& value) { SetFormattedValue(std::move(value)); return *this;}

    /**
     * <p>The formatted value of the data. e.g. John Smith.</p>
     */
    inline DataItem& WithFormattedValue(const char* value) { SetFormattedValue(value); return *this;}

  private:

    Format m_overrideFormat;
    bool m_overrideFormatHasBeenSet = false;

    Aws::String m_rawValue;
    bool m_rawValueHasBeenSet = false;

    Aws::String m_formattedValue;
    bool m_formattedValueHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
