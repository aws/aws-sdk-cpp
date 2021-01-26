/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/JsonOptions.h>
#include <aws/databrew/model/ExcelOptions.h>
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
   * <p>Options that define how Microsoft Excel input is to be interpreted by
   * DataBrew.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/FormatOptions">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API FormatOptions
  {
  public:
    FormatOptions();
    FormatOptions(Aws::Utils::Json::JsonView jsonValue);
    FormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    JsonOptions m_json;
    bool m_jsonHasBeenSet;

    ExcelOptions m_excel;
    bool m_excelHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
