﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/CsvOutputOptions.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a set of options that define the structure of comma-separated
   * (CSV) job output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/OutputFormatOptions">AWS
   * API Reference</a></p>
   */
  class OutputFormatOptions
  {
  public:
    AWS_GLUEDATABREW_API OutputFormatOptions() = default;
    AWS_GLUEDATABREW_API OutputFormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API OutputFormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a set of options that define the structure of comma-separated
     * value (CSV) job output.</p>
     */
    inline const CsvOutputOptions& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = CsvOutputOptions>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = CsvOutputOptions>
    OutputFormatOptions& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}
  private:

    CsvOutputOptions m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
