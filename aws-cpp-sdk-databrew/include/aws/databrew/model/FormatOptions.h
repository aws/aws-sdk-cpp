/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/JsonOptions.h>
#include <aws/databrew/model/ExcelOptions.h>
#include <aws/databrew/model/CsvOptions.h>
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
   * <p>Represents a set of options that define the structure of either
   * comma-separated value (CSV), Excel, or JSON input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/FormatOptions">AWS
   * API Reference</a></p>
   */
  class FormatOptions
  {
  public:
    AWS_GLUEDATABREW_API FormatOptions();
    AWS_GLUEDATABREW_API FormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API FormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline const JsonOptions& GetJson() const{ return m_json; }

    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }

    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline void SetJson(const JsonOptions& value) { m_jsonHasBeenSet = true; m_json = value; }

    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline void SetJson(JsonOptions&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }

    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithJson(const JsonOptions& value) { SetJson(value); return *this;}

    /**
     * <p>Options that define how JSON input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithJson(JsonOptions&& value) { SetJson(std::move(value)); return *this;}


    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline const ExcelOptions& GetExcel() const{ return m_excel; }

    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline bool ExcelHasBeenSet() const { return m_excelHasBeenSet; }

    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline void SetExcel(const ExcelOptions& value) { m_excelHasBeenSet = true; m_excel = value; }

    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline void SetExcel(ExcelOptions&& value) { m_excelHasBeenSet = true; m_excel = std::move(value); }

    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithExcel(const ExcelOptions& value) { SetExcel(value); return *this;}

    /**
     * <p>Options that define how Excel input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithExcel(ExcelOptions&& value) { SetExcel(std::move(value)); return *this;}


    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline const CsvOptions& GetCsv() const{ return m_csv; }

    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }

    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline void SetCsv(const CsvOptions& value) { m_csvHasBeenSet = true; m_csv = value; }

    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline void SetCsv(CsvOptions&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }

    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithCsv(const CsvOptions& value) { SetCsv(value); return *this;}

    /**
     * <p>Options that define how CSV input is to be interpreted by DataBrew.</p>
     */
    inline FormatOptions& WithCsv(CsvOptions&& value) { SetCsv(std::move(value)); return *this;}

  private:

    JsonOptions m_json;
    bool m_jsonHasBeenSet = false;

    ExcelOptions m_excel;
    bool m_excelHasBeenSet = false;

    CsvOptions m_csv;
    bool m_csvHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
