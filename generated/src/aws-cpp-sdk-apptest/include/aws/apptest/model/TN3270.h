/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/Script.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the TN3270 protocol.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TN3270">AWS API
   * Reference</a></p>
   */
  class TN3270
  {
  public:
    AWS_APPTEST_API TN3270() = default;
    AWS_APPTEST_API TN3270(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The script of the TN3270 protocol.</p>
     */
    inline const Script& GetScript() const { return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    template<typename ScriptT = Script>
    void SetScript(ScriptT&& value) { m_scriptHasBeenSet = true; m_script = std::forward<ScriptT>(value); }
    template<typename ScriptT = Script>
    TN3270& WithScript(ScriptT&& value) { SetScript(std::forward<ScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set names of the TN3270 protocol.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const { return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    void SetExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::forward<ExportDataSetNamesT>(value); }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    TN3270& WithExportDataSetNames(ExportDataSetNamesT&& value) { SetExportDataSetNames(std::forward<ExportDataSetNamesT>(value)); return *this;}
    template<typename ExportDataSetNamesT = Aws::String>
    TN3270& AddExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.emplace_back(std::forward<ExportDataSetNamesT>(value)); return *this; }
    ///@}
  private:

    Script m_script;
    bool m_scriptHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportDataSetNames;
    bool m_exportDataSetNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
