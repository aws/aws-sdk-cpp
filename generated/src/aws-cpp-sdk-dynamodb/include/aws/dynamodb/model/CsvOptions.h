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
    AWS_DYNAMODB_API CsvOptions() = default;
    AWS_DYNAMODB_API CsvOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CsvOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The delimiter used for separating items in the CSV file being imported. </p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    CsvOptions& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> List of the headers used to specify a common header for all source CSV files
     * being imported. If this field is specified then the first line of each CSV file
     * is treated as data instead of the header. If this field is not specified the the
     * first line of each CSV file is treated as the header. </p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderList() const { return m_headerList; }
    inline bool HeaderListHasBeenSet() const { return m_headerListHasBeenSet; }
    template<typename HeaderListT = Aws::Vector<Aws::String>>
    void SetHeaderList(HeaderListT&& value) { m_headerListHasBeenSet = true; m_headerList = std::forward<HeaderListT>(value); }
    template<typename HeaderListT = Aws::Vector<Aws::String>>
    CsvOptions& WithHeaderList(HeaderListT&& value) { SetHeaderList(std::forward<HeaderListT>(value)); return *this;}
    template<typename HeaderListT = Aws::String>
    CsvOptions& AddHeaderList(HeaderListT&& value) { m_headerListHasBeenSet = true; m_headerList.emplace_back(std::forward<HeaderListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::Vector<Aws::String> m_headerList;
    bool m_headerListHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
