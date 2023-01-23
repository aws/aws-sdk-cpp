/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p> Processing options for the CSV file being imported. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CsvOptions">AWS
   * API Reference</a></p>
   */
  class CsvOptions
  {
  public:
    AWS_DYNAMODB_API CsvOptions();
    AWS_DYNAMODB_API CsvOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CsvOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline CsvOptions& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline CsvOptions& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline CsvOptions& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderList() const{ return m_headerList; }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline void SetHeaderList(const Aws::Vector<Aws::String>& value) { m_headerListHasBeenSet = true; m_headerList = value; }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline void SetHeaderList(Aws::Vector<Aws::String>&& value) { m_headerListHasBeenSet = true; m_headerList = std::move(value); }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline CsvOptions& WithHeaderList(const Aws::Vector<Aws::String>& value) { SetHeaderList(value); return *this;}

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline CsvOptions& WithHeaderList(Aws::Vector<Aws::String>&& value) { SetHeaderList(std::move(value)); return *this;}

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline CsvOptions& AddHeaderList(const Aws::String& value) { m_headerListHasBeenSet = true; m_headerList.push_back(value); return *this; }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline CsvOptions& AddHeaderList(Aws::String&& value) { m_headerListHasBeenSet = true; m_headerList.push_back(std::move(value)); return *this; }

    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline CsvOptions& AddHeaderList(const char* value) { m_headerListHasBeenSet = true; m_headerList.push_back(value); return *this; }

  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::Vector<Aws::String> m_headerList;
    bool m_headerListHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
