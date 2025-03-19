/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/model/CSVOutput.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>Describes how the select output is serialized.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/OutputSerialization">AWS
   * API Reference</a></p>
   */
  class OutputSerialization
  {
  public:
    AWS_GLACIER_API OutputSerialization() = default;
    AWS_GLACIER_API OutputSerialization(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API OutputSerialization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the serialization of CSV-encoded query results.</p>
     */
    inline const CSVOutput& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = CSVOutput>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = CSVOutput>
    OutputSerialization& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}
  private:

    CSVOutput m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
