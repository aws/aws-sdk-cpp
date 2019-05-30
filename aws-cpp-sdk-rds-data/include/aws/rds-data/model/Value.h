/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds-data/model/StructValue.h>
#include <aws/rds-data/model/Value.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Contains the value of a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Value">AWS API
   * Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API Value
  {
  public:
    Value();
    Value(Aws::Utils::Json::JsonView jsonValue);
    Value& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of column values.</p>
     */
    inline const Aws::Vector<Value>& GetArrayValues() const{ return m_arrayValues; }

    /**
     * <p>An array of column values.</p>
     */
    inline bool ArrayValuesHasBeenSet() const { return m_arrayValuesHasBeenSet; }

    /**
     * <p>An array of column values.</p>
     */
    inline void SetArrayValues(const Aws::Vector<Value>& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = value; }

    /**
     * <p>An array of column values.</p>
     */
    inline void SetArrayValues(Aws::Vector<Value>&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues = std::move(value); }

    /**
     * <p>An array of column values.</p>
     */
    inline Value& WithArrayValues(const Aws::Vector<Value>& value) { SetArrayValues(value); return *this;}

    /**
     * <p>An array of column values.</p>
     */
    inline Value& WithArrayValues(Aws::Vector<Value>&& value) { SetArrayValues(std::move(value)); return *this;}

    /**
     * <p>An array of column values.</p>
     */
    inline Value& AddArrayValues(const Value& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(value); return *this; }

    /**
     * <p>An array of column values.</p>
     */
    inline Value& AddArrayValues(Value&& value) { m_arrayValuesHasBeenSet = true; m_arrayValues.push_back(std::move(value)); return *this; }


    /**
     * <p>A value for a column of big integer data type.</p>
     */
    inline long long GetBigIntValue() const{ return m_bigIntValue; }

    /**
     * <p>A value for a column of big integer data type.</p>
     */
    inline bool BigIntValueHasBeenSet() const { return m_bigIntValueHasBeenSet; }

    /**
     * <p>A value for a column of big integer data type.</p>
     */
    inline void SetBigIntValue(long long value) { m_bigIntValueHasBeenSet = true; m_bigIntValue = value; }

    /**
     * <p>A value for a column of big integer data type.</p>
     */
    inline Value& WithBigIntValue(long long value) { SetBigIntValue(value); return *this;}


    /**
     * <p>A value for a column of BIT data type.</p>
     */
    inline bool GetBitValue() const{ return m_bitValue; }

    /**
     * <p>A value for a column of BIT data type.</p>
     */
    inline bool BitValueHasBeenSet() const { return m_bitValueHasBeenSet; }

    /**
     * <p>A value for a column of BIT data type.</p>
     */
    inline void SetBitValue(bool value) { m_bitValueHasBeenSet = true; m_bitValue = value; }

    /**
     * <p>A value for a column of BIT data type.</p>
     */
    inline Value& WithBitValue(bool value) { SetBitValue(value); return *this;}


    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const{ return m_blobValue; }

    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }

    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline void SetBlobValue(const Aws::Utils::ByteBuffer& value) { m_blobValueHasBeenSet = true; m_blobValue = value; }

    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline void SetBlobValue(Aws::Utils::ByteBuffer&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::move(value); }

    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline Value& WithBlobValue(const Aws::Utils::ByteBuffer& value) { SetBlobValue(value); return *this;}

    /**
     * <p>A value for a column of BLOB data type.</p>
     */
    inline Value& WithBlobValue(Aws::Utils::ByteBuffer&& value) { SetBlobValue(std::move(value)); return *this;}


    /**
     * <p>A value for a column of double data type.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>A value for a column of double data type.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>A value for a column of double data type.</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>A value for a column of double data type.</p>
     */
    inline Value& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>A value for a column of integer data type.</p>
     */
    inline int GetIntValue() const{ return m_intValue; }

    /**
     * <p>A value for a column of integer data type.</p>
     */
    inline bool IntValueHasBeenSet() const { return m_intValueHasBeenSet; }

    /**
     * <p>A value for a column of integer data type.</p>
     */
    inline void SetIntValue(int value) { m_intValueHasBeenSet = true; m_intValue = value; }

    /**
     * <p>A value for a column of integer data type.</p>
     */
    inline Value& WithIntValue(int value) { SetIntValue(value); return *this;}


    /**
     * <p>A NULL value.</p>
     */
    inline bool GetIsNull() const{ return m_isNull; }

    /**
     * <p>A NULL value.</p>
     */
    inline bool IsNullHasBeenSet() const { return m_isNullHasBeenSet; }

    /**
     * <p>A NULL value.</p>
     */
    inline void SetIsNull(bool value) { m_isNullHasBeenSet = true; m_isNull = value; }

    /**
     * <p>A NULL value.</p>
     */
    inline Value& WithIsNull(bool value) { SetIsNull(value); return *this;}


    /**
     * <p>A value for a column of real data type.</p>
     */
    inline double GetRealValue() const{ return m_realValue; }

    /**
     * <p>A value for a column of real data type.</p>
     */
    inline bool RealValueHasBeenSet() const { return m_realValueHasBeenSet; }

    /**
     * <p>A value for a column of real data type.</p>
     */
    inline void SetRealValue(double value) { m_realValueHasBeenSet = true; m_realValue = value; }

    /**
     * <p>A value for a column of real data type.</p>
     */
    inline Value& WithRealValue(double value) { SetRealValue(value); return *this;}


    /**
     * <p>A value for a column of string data type.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline Value& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline Value& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>A value for a column of string data type.</p>
     */
    inline Value& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline const StructValue& GetStructValue() const{ return m_structValue; }

    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline bool StructValueHasBeenSet() const { return m_structValueHasBeenSet; }

    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline void SetStructValue(const StructValue& value) { m_structValueHasBeenSet = true; m_structValue = value; }

    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline void SetStructValue(StructValue&& value) { m_structValueHasBeenSet = true; m_structValue = std::move(value); }

    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline Value& WithStructValue(const StructValue& value) { SetStructValue(value); return *this;}

    /**
     * <p>A value for a column of STRUCT data type.</p>
     */
    inline Value& WithStructValue(StructValue&& value) { SetStructValue(std::move(value)); return *this;}

  private:

    Aws::Vector<Value> m_arrayValues;
    bool m_arrayValuesHasBeenSet;

    long long m_bigIntValue;
    bool m_bigIntValueHasBeenSet;

    bool m_bitValue;
    bool m_bitValueHasBeenSet;

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet;

    int m_intValue;
    bool m_intValueHasBeenSet;

    bool m_isNull;
    bool m_isNullHasBeenSet;

    double m_realValue;
    bool m_realValueHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;

    StructValue m_structValue;
    bool m_structValueHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
