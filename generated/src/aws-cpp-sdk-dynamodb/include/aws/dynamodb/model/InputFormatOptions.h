/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/CsvOptions.h>
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
   * <p> The format options for the data that was imported into the target table.
   * There is one value, CsvOption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/InputFormatOptions">AWS
   * API Reference</a></p>
   */
  class InputFormatOptions
  {
  public:
    AWS_DYNAMODB_API InputFormatOptions() = default;
    AWS_DYNAMODB_API InputFormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API InputFormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The options for imported source files in CSV format. The values are
     * Delimiter and HeaderList. </p>
     */
    inline const CsvOptions& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = CsvOptions>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = CsvOptions>
    InputFormatOptions& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}
  private:

    CsvOptions m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
