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
    AWS_APPTEST_API TN3270();
    AWS_APPTEST_API TN3270(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The script of the TN3270 protocol.</p>
     */
    inline const Script& GetScript() const{ return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    inline void SetScript(const Script& value) { m_scriptHasBeenSet = true; m_script = value; }
    inline void SetScript(Script&& value) { m_scriptHasBeenSet = true; m_script = std::move(value); }
    inline TN3270& WithScript(const Script& value) { SetScript(value); return *this;}
    inline TN3270& WithScript(Script&& value) { SetScript(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data set names of the TN3270 protocol.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const{ return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    inline void SetExportDataSetNames(const Aws::Vector<Aws::String>& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = value; }
    inline void SetExportDataSetNames(Aws::Vector<Aws::String>&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::move(value); }
    inline TN3270& WithExportDataSetNames(const Aws::Vector<Aws::String>& value) { SetExportDataSetNames(value); return *this;}
    inline TN3270& WithExportDataSetNames(Aws::Vector<Aws::String>&& value) { SetExportDataSetNames(std::move(value)); return *this;}
    inline TN3270& AddExportDataSetNames(const Aws::String& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    inline TN3270& AddExportDataSetNames(Aws::String&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(std::move(value)); return *this; }
    inline TN3270& AddExportDataSetNames(const char* value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
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
