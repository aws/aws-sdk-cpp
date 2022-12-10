/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/rds-data/model/ArrayValue.h>
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
   * <p>Contains a value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Field">AWS API
   * Reference</a></p>
   */
  class Field
  {
  public:
    AWS_RDSDATASERVICE_API Field();
    AWS_RDSDATASERVICE_API Field(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline Field& WithIsNull(bool value) { SetIsNull(value); return *this;}


    /**
     * <p>A value of Boolean data type.</p>
     */
    inline bool GetBooleanValue() const{ return m_booleanValue; }

    /**
     * <p>A value of Boolean data type.</p>
     */
    inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }

    /**
     * <p>A value of Boolean data type.</p>
     */
    inline void SetBooleanValue(bool value) { m_booleanValueHasBeenSet = true; m_booleanValue = value; }

    /**
     * <p>A value of Boolean data type.</p>
     */
    inline Field& WithBooleanValue(bool value) { SetBooleanValue(value); return *this;}


    /**
     * <p>A value of long data type.</p>
     */
    inline long long GetLongValue() const{ return m_longValue; }

    /**
     * <p>A value of long data type.</p>
     */
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }

    /**
     * <p>A value of long data type.</p>
     */
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }

    /**
     * <p>A value of long data type.</p>
     */
    inline Field& WithLongValue(long long value) { SetLongValue(value); return *this;}


    /**
     * <p>A value of double data type.</p>
     */
    inline double GetDoubleValue() const{ return m_doubleValue; }

    /**
     * <p>A value of double data type.</p>
     */
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }

    /**
     * <p>A value of double data type.</p>
     */
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }

    /**
     * <p>A value of double data type.</p>
     */
    inline Field& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}


    /**
     * <p>A value of string data type.</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>A value of string data type.</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>A value of string data type.</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>A value of string data type.</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>A value of string data type.</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>A value of string data type.</p>
     */
    inline Field& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>A value of string data type.</p>
     */
    inline Field& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>A value of string data type.</p>
     */
    inline Field& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>A value of BLOB data type.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlobValue() const{ return m_blobValue; }

    /**
     * <p>A value of BLOB data type.</p>
     */
    inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }

    /**
     * <p>A value of BLOB data type.</p>
     */
    inline void SetBlobValue(const Aws::Utils::ByteBuffer& value) { m_blobValueHasBeenSet = true; m_blobValue = value; }

    /**
     * <p>A value of BLOB data type.</p>
     */
    inline void SetBlobValue(Aws::Utils::ByteBuffer&& value) { m_blobValueHasBeenSet = true; m_blobValue = std::move(value); }

    /**
     * <p>A value of BLOB data type.</p>
     */
    inline Field& WithBlobValue(const Aws::Utils::ByteBuffer& value) { SetBlobValue(value); return *this;}

    /**
     * <p>A value of BLOB data type.</p>
     */
    inline Field& WithBlobValue(Aws::Utils::ByteBuffer&& value) { SetBlobValue(std::move(value)); return *this;}


    /**
     * <p>An array of values.</p>
     */
    inline const ArrayValue& GetArrayValue() const{ return m_arrayValue; }

    /**
     * <p>An array of values.</p>
     */
    inline bool ArrayValueHasBeenSet() const { return m_arrayValueHasBeenSet; }

    /**
     * <p>An array of values.</p>
     */
    inline void SetArrayValue(const ArrayValue& value) { m_arrayValueHasBeenSet = true; m_arrayValue = value; }

    /**
     * <p>An array of values.</p>
     */
    inline void SetArrayValue(ArrayValue&& value) { m_arrayValueHasBeenSet = true; m_arrayValue = std::move(value); }

    /**
     * <p>An array of values.</p>
     */
    inline Field& WithArrayValue(const ArrayValue& value) { SetArrayValue(value); return *this;}

    /**
     * <p>An array of values.</p>
     */
    inline Field& WithArrayValue(ArrayValue&& value) { SetArrayValue(std::move(value)); return *this;}

  private:

    bool m_isNull;
    bool m_isNullHasBeenSet = false;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet = false;

    long long m_longValue;
    bool m_longValueHasBeenSet = false;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet = false;

    ArrayValue m_arrayValue;
    bool m_arrayValueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
