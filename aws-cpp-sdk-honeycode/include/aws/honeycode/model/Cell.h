/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/honeycode/model/Format.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that represents a single cell in a table.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/Cell">AWS
   * API Reference</a></p>
   */
  class Cell
  {
  public:
    AWS_HONEYCODE_API Cell();
    AWS_HONEYCODE_API Cell(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Cell& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline const Aws::String& GetFormula() const{ return m_formula; }

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline bool FormulaHasBeenSet() const { return m_formulaHasBeenSet; }

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline void SetFormula(const Aws::String& value) { m_formulaHasBeenSet = true; m_formula = value; }

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline void SetFormula(Aws::String&& value) { m_formulaHasBeenSet = true; m_formula = std::move(value); }

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline void SetFormula(const char* value) { m_formulaHasBeenSet = true; m_formula.assign(value); }

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline Cell& WithFormula(const Aws::String& value) { SetFormula(value); return *this;}

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline Cell& WithFormula(Aws::String&& value) { SetFormula(std::move(value)); return *this;}

    /**
     * <p> The formula contained in the cell. This field is empty if a cell does not
     * have a formula. </p>
     */
    inline Cell& WithFormula(const char* value) { SetFormula(value); return *this;}


    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline const Format& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline void SetFormat(const Format& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline void SetFormat(Format&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline Cell& WithFormat(const Format& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the cell. If this field is empty, then the format is either not
     * specified in the workbook or the format is set to AUTO.</p>
     */
    inline Cell& WithFormat(Format&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline const Aws::String& GetRawValue() const{ return m_rawValue; }

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline bool RawValueHasBeenSet() const { return m_rawValueHasBeenSet; }

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline void SetRawValue(const Aws::String& value) { m_rawValueHasBeenSet = true; m_rawValue = value; }

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline void SetRawValue(Aws::String&& value) { m_rawValueHasBeenSet = true; m_rawValue = std::move(value); }

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline void SetRawValue(const char* value) { m_rawValueHasBeenSet = true; m_rawValue.assign(value); }

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline Cell& WithRawValue(const Aws::String& value) { SetRawValue(value); return *this;}

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline Cell& WithRawValue(Aws::String&& value) { SetRawValue(std::move(value)); return *this;}

    /**
     * <p> The raw value of the data contained in the cell. The raw value depends on
     * the format of the data in the cell. However the attribute in the API return
     * value is always a string containing the raw value. </p> <p> Cells with format
     * DATE, DATE_TIME or TIME have the raw value as a floating point number where the
     * whole number represents the number of days since 1/1/1900 and the fractional
     * part represents the fraction of the day since midnight. For example, a cell with
     * date 11/3/2020 has the raw value "44138". A cell with the time 9:00 AM has the
     * raw value "0.375" and a cell with date/time value of 11/3/2020 9:00 AM has the
     * raw value "44138.375". Notice that even though the raw value is a number in all
     * three cases, it is still represented as a string. </p> <p> Cells with format
     * NUMBER, CURRENCY, PERCENTAGE and ACCOUNTING have the raw value of the data as
     * the number representing the data being displayed. For example, the number 1.325
     * with two decimal places in the format will have it's raw value as "1.325" and
     * formatted value as "1.33". A currency value for $10 will have the raw value as
     * "10" and formatted value as "$10.00". A value representing 20% with two decimal
     * places in the format will have its raw value as "0.2" and the formatted value as
     * "20.00%". An accounting value of -$25 will have "-25" as the raw value and "$
     * (25.00)" as the formatted value. </p> <p> Cells with format TEXT will have the
     * raw text as the raw value. For example, a cell with text "John Smith" will have
     * "John Smith" as both the raw value and the formatted value. </p> <p> Cells with
     * format CONTACT will have the name of the contact as a formatted value and the
     * email address of the contact as the raw value. For example, a contact for John
     * Smith will have "John Smith" as the formatted value and "john.smith@example.com"
     * as the raw value. </p> <p> Cells with format ROWLINK (aka picklist) will have
     * the first column of the linked row as the formatted value and the row id of the
     * linked row as the raw value. For example, a cell containing a picklist to a
     * table that displays task status might have "Completed" as the formatted value
     * and
     * "row:dfcefaee-5b37-4355-8f28-40c3e4ff5dd4/ca432b2f-b8eb-431d-9fb5-cbe0342f9f03"
     * as the raw value. </p> <p> Cells with format ROWSET (aka multi-select or
     * multi-record picklist) will by default have the first column of each of the
     * linked rows as the formatted value in the list, and the rowset id of the linked
     * rows as the raw value. For example, a cell containing a multi-select picklist to
     * a table that contains items might have "Item A", "Item B" in the formatted value
     * list and "rows:b742c1f4-6cb0-4650-a845-35eb86fcc2bb/
     * [fdea123b-8f68-474a-aa8a-5ff87aa333af,6daf41f0-a138-4eee-89da-123086d36ecf]" as
     * the raw value. </p> <p> Cells with format ATTACHMENT will have the name of the
     * attachment as the formatted value and the attachment id as the raw value. For
     * example, a cell containing an attachment named "image.jpeg" will have
     * "image.jpeg" as the formatted value and
     * "attachment:ca432b2f-b8eb-431d-9fb5-cbe0342f9f03" as the raw value. </p> <p>
     * Cells with format AUTO or cells without any format that are auto-detected as one
     * of the formats above will contain the raw and formatted values as mentioned
     * above, based on the auto-detected formats. If there is no auto-detected format,
     * the raw and formatted values will be the same as the data in the cell. </p>
     */
    inline Cell& WithRawValue(const char* value) { SetRawValue(value); return *this;}


    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline const Aws::String& GetFormattedValue() const{ return m_formattedValue; }

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline bool FormattedValueHasBeenSet() const { return m_formattedValueHasBeenSet; }

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline void SetFormattedValue(const Aws::String& value) { m_formattedValueHasBeenSet = true; m_formattedValue = value; }

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline void SetFormattedValue(Aws::String&& value) { m_formattedValueHasBeenSet = true; m_formattedValue = std::move(value); }

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline void SetFormattedValue(const char* value) { m_formattedValueHasBeenSet = true; m_formattedValue.assign(value); }

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline Cell& WithFormattedValue(const Aws::String& value) { SetFormattedValue(value); return *this;}

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline Cell& WithFormattedValue(Aws::String&& value) { SetFormattedValue(std::move(value)); return *this;}

    /**
     * <p> The formatted value of the cell. This is the value that you see displayed in
     * the cell in the UI. </p> <p> Note that the formatted value of a cell is always
     * represented as a string irrespective of the data that is stored in the cell. For
     * example, if a cell contains a date, the formatted value of the cell is the
     * string representation of the formatted date being shown in the cell in the UI.
     * See details in the rawValue field below for how cells of different formats will
     * have different raw and formatted values. </p>
     */
    inline Cell& WithFormattedValue(const char* value) { SetFormattedValue(value); return *this;}


    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFormattedValues() const{ return m_formattedValues; }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline bool FormattedValuesHasBeenSet() const { return m_formattedValuesHasBeenSet; }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline void SetFormattedValues(const Aws::Vector<Aws::String>& value) { m_formattedValuesHasBeenSet = true; m_formattedValues = value; }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline void SetFormattedValues(Aws::Vector<Aws::String>&& value) { m_formattedValuesHasBeenSet = true; m_formattedValues = std::move(value); }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline Cell& WithFormattedValues(const Aws::Vector<Aws::String>& value) { SetFormattedValues(value); return *this;}

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline Cell& WithFormattedValues(Aws::Vector<Aws::String>&& value) { SetFormattedValues(std::move(value)); return *this;}

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline Cell& AddFormattedValues(const Aws::String& value) { m_formattedValuesHasBeenSet = true; m_formattedValues.push_back(value); return *this; }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline Cell& AddFormattedValues(Aws::String&& value) { m_formattedValuesHasBeenSet = true; m_formattedValues.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of formatted values of the cell. This field is only returned when the
     * cell is ROWSET format (aka multi-select or multi-record picklist). Values in the
     * list are always represented as strings. The formattedValue field will be empty
     * if this field is returned. </p>
     */
    inline Cell& AddFormattedValues(const char* value) { m_formattedValuesHasBeenSet = true; m_formattedValues.push_back(value); return *this; }

  private:

    Aws::String m_formula;
    bool m_formulaHasBeenSet = false;

    Format m_format;
    bool m_formatHasBeenSet = false;

    Aws::String m_rawValue;
    bool m_rawValueHasBeenSet = false;

    Aws::String m_formattedValue;
    bool m_formattedValueHasBeenSet = false;

    Aws::Vector<Aws::String> m_formattedValues;
    bool m_formattedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
