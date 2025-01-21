﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyValueNullValue.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains an asset property value (of a single type only).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Variant">AWS
   * API Reference</a></p>
   */
  class Variant
  {
  public:
    AWS_IOTSITEWISE_API Variant();
    AWS_IOTSITEWISE_API Variant(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Variant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Asset property data of type string (sequence of characters). The allowed
     * pattern: "^$|[^\u0000-\u001F\u007F]+". The max length is 1024. </p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }
    inline Variant& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline Variant& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline Variant& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asset property data of type integer (whole number).</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }
    inline Variant& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Asset property data of type double (floating point number). The min value is
     * -10^10. The max value is 10^10. Double.NaN is allowed. </p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline Variant& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asset property data of type Boolean (true or false).</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }
    inline Variant& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of null asset property data with BAD and UNCERTAIN qualities.</p>
     */
    inline const PropertyValueNullValue& GetNullValue() const{ return m_nullValue; }
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }
    inline void SetNullValue(const PropertyValueNullValue& value) { m_nullValueHasBeenSet = true; m_nullValue = value; }
    inline void SetNullValue(PropertyValueNullValue&& value) { m_nullValueHasBeenSet = true; m_nullValue = std::move(value); }
    inline Variant& WithNullValue(const PropertyValueNullValue& value) { SetNullValue(value); return *this;}
    inline Variant& WithNullValue(PropertyValueNullValue&& value) { SetNullValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    PropertyValueNullValue m_nullValue;
    bool m_nullValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
