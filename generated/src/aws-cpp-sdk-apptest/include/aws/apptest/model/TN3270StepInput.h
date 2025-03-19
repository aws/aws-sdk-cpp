/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/MainframeResourceSummary.h>
#include <aws/apptest/model/ScriptSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/MainframeActionProperties.h>
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
   * <p>Specifies a TN3270 step input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/TN3270StepInput">AWS
   * API Reference</a></p>
   */
  class TN3270StepInput
  {
  public:
    AWS_APPTEST_API TN3270StepInput() = default;
    AWS_APPTEST_API TN3270StepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270StepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the TN3270 step input.</p>
     */
    inline const MainframeResourceSummary& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = MainframeResourceSummary>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = MainframeResourceSummary>
    TN3270StepInput& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script of the TN3270 step input.</p>
     */
    inline const ScriptSummary& GetScript() const { return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    template<typename ScriptT = ScriptSummary>
    void SetScript(ScriptT&& value) { m_scriptHasBeenSet = true; m_script = std::forward<ScriptT>(value); }
    template<typename ScriptT = ScriptSummary>
    TN3270StepInput& WithScript(ScriptT&& value) { SetScript(std::forward<ScriptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export data set names of the TN3270 step input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const { return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    void SetExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::forward<ExportDataSetNamesT>(value); }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    TN3270StepInput& WithExportDataSetNames(ExportDataSetNamesT&& value) { SetExportDataSetNames(std::forward<ExportDataSetNamesT>(value)); return *this;}
    template<typename ExportDataSetNamesT = Aws::String>
    TN3270StepInput& AddExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.emplace_back(std::forward<ExportDataSetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the TN3270 step input.</p>
     */
    inline const MainframeActionProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = MainframeActionProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = MainframeActionProperties>
    TN3270StepInput& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    MainframeResourceSummary m_resource;
    bool m_resourceHasBeenSet = false;

    ScriptSummary m_script;
    bool m_scriptHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportDataSetNames;
    bool m_exportDataSetNamesHasBeenSet = false;

    MainframeActionProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
