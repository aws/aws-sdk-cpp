/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies the location of an occurrence of sensitive data in an Apache Avro
   * object container, Apache Parquet file, JSON file, or JSON Lines
   * file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Record">AWS API
   * Reference</a></p>
   */
  class Record
  {
  public:
    AWS_MACIE2_API Record();
    AWS_MACIE2_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline Record& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline Record& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>The path, as a JSONPath expression, to the sensitive data. For an Avro object
     * container or Parquet file, this is the path to the field in the record
     * (recordIndex) that contains the data. For a JSON or JSON Lines file, this is the
     * path to the field or array that contains the data. If the data is a value in an
     * array, the path also indicates which value contains the data.</p> <p>If Amazon
     * Macie detects sensitive data in the name of any element in the path, Macie omits
     * this field. If the name of an element exceeds 20 characters, Macie truncates the
     * name by removing characters from the beginning of the name. If the resulting
     * full path exceeds 250 characters, Macie also truncates the path, starting with
     * the first element in the path, until the path contains 250 or fewer
     * characters.</p>
     */
    inline Record& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}


    /**
     * <p>For an Avro object container or Parquet file, the record index, starting from
     * 0, for the record that contains the sensitive data. For a JSON Lines file, the
     * line index, starting from 0, for the line that contains the sensitive data. This
     * value is always 0 for JSON files.</p>
     */
    inline long long GetRecordIndex() const{ return m_recordIndex; }

    /**
     * <p>For an Avro object container or Parquet file, the record index, starting from
     * 0, for the record that contains the sensitive data. For a JSON Lines file, the
     * line index, starting from 0, for the line that contains the sensitive data. This
     * value is always 0 for JSON files.</p>
     */
    inline bool RecordIndexHasBeenSet() const { return m_recordIndexHasBeenSet; }

    /**
     * <p>For an Avro object container or Parquet file, the record index, starting from
     * 0, for the record that contains the sensitive data. For a JSON Lines file, the
     * line index, starting from 0, for the line that contains the sensitive data. This
     * value is always 0 for JSON files.</p>
     */
    inline void SetRecordIndex(long long value) { m_recordIndexHasBeenSet = true; m_recordIndex = value; }

    /**
     * <p>For an Avro object container or Parquet file, the record index, starting from
     * 0, for the record that contains the sensitive data. For a JSON Lines file, the
     * line index, starting from 0, for the line that contains the sensitive data. This
     * value is always 0 for JSON files.</p>
     */
    inline Record& WithRecordIndex(long long value) { SetRecordIndex(value); return *this;}

  private:

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet = false;

    long long m_recordIndex;
    bool m_recordIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
