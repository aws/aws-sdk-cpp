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
#include <aws/core/utils/Array.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Contains a value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/Field">AWS API
   * Reference</a></p>
   */
  class AWS_RDSDATASERVICE_API Field
  {
  public:
    Field();
    Field(Aws::Utils::Json::JsonView jsonValue);
    Field& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::Utils::ByteBuffer m_blobValue;
    bool m_blobValueHasBeenSet;

    bool m_booleanValue;
    bool m_booleanValueHasBeenSet;

    double m_doubleValue;
    bool m_doubleValueHasBeenSet;

    bool m_isNull;
    bool m_isNullHasBeenSet;

    long long m_longValue;
    bool m_longValueHasBeenSet;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
