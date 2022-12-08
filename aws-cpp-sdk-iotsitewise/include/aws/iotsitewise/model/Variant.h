/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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


    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline Variant& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline Variant& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>Asset property data of type string (sequence of characters).</p>
     */
    inline Variant& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>Asset property data of type integer (whole number).</p>
     */
    inline int GetIntegerValue() const{ return m_integerValue; }

    /**
     * <p>Asset property data of type integer (whole number).</p>
     */
    inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }

    /**
     * <p>Asset property data of type integer (whole number).</p>
     */
    inline void SetIntegerValue(int value) { m_integerValueHasBeenSet = true; m_integerValue = value; }

    /**
     * <p>Asset property data of type integer (whole number).</p>
     */
    inline Variant& WithIntegerValue(int value) { SetIntegerValue(value); return *this;}


    /**
     * <p>Asset property data of type double (floating point number).</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>Asset property data of type double (floating point number).</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>Asset property data of type double (floating point number).</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>Asset property data of type double (floating point number).</p>
     */
    inline Variant& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>Asset property data of type Boolean (true or false).</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>Asset property data of type Boolean (true or false).</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>Asset property data of type Boolean (true or false).</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>Asset property data of type Boolean (true or false).</p>
     */
    inline Variant& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    int m_integerValue;
    bool m_integerValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
