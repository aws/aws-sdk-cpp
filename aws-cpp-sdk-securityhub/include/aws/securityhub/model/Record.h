/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An occurrence of sensitive data in an Apache Avro object container or an
   * Apache Parquet file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_SECURITYHUB_API Record();
    AWS_SECURITYHUB_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline const Aws::String& GetJsonPath() const{ return m_jsonPath; }

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline bool JsonPathHasBeenSet() const { return m_jsonPathHasBeenSet; }

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline void SetJsonPath(const Aws::String& value) { m_jsonPathHasBeenSet = true; m_jsonPath = value; }

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline void SetJsonPath(Aws::String&& value) { m_jsonPathHasBeenSet = true; m_jsonPath = std::move(value); }

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline void SetJsonPath(const char* value) { m_jsonPathHasBeenSet = true; m_jsonPath.assign(value); }

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline Record& WithJsonPath(const Aws::String& value) { SetJsonPath(value); return *this;}

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline Record& WithJsonPath(Aws::String&& value) { SetJsonPath(std::move(value)); return *this;}

    /**
     * <p>The path, as a JSONPath expression, to the field in the record that contains
     * the data. If the field name is longer than 20 characters, it is truncated. If
     * the path is longer than 250 characters, it is truncated.</p>
     */
    inline Record& WithJsonPath(const char* value) { SetJsonPath(value); return *this;}


    /**
     * <p>The record index, starting from 0, for the record that contains the data.</p>
     */
    inline long long GetRecordIndex() const{ return m_recordIndex; }

    /**
     * <p>The record index, starting from 0, for the record that contains the data.</p>
     */
    inline bool RecordIndexHasBeenSet() const { return m_recordIndexHasBeenSet; }

    /**
     * <p>The record index, starting from 0, for the record that contains the data.</p>
     */
    inline void SetRecordIndex(long long value) { m_recordIndexHasBeenSet = true; m_recordIndex = value; }

    /**
     * <p>The record index, starting from 0, for the record that contains the data.</p>
     */
    inline Record& WithRecordIndex(long long value) { SetRecordIndex(value); return *this;}

  private:

    Aws::String m_jsonPath;
    bool m_jsonPathHasBeenSet = false;

    long long m_recordIndex;
    bool m_recordIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
