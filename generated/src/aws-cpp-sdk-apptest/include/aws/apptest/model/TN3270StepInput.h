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
    AWS_APPTEST_API TN3270StepInput();
    AWS_APPTEST_API TN3270StepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API TN3270StepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the TN3270 step input.</p>
     */
    inline const MainframeResourceSummary& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const MainframeResourceSummary& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(MainframeResourceSummary&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline TN3270StepInput& WithResource(const MainframeResourceSummary& value) { SetResource(value); return *this;}
    inline TN3270StepInput& WithResource(MainframeResourceSummary&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The script of the TN3270 step input.</p>
     */
    inline const ScriptSummary& GetScript() const{ return m_script; }
    inline bool ScriptHasBeenSet() const { return m_scriptHasBeenSet; }
    inline void SetScript(const ScriptSummary& value) { m_scriptHasBeenSet = true; m_script = value; }
    inline void SetScript(ScriptSummary&& value) { m_scriptHasBeenSet = true; m_script = std::move(value); }
    inline TN3270StepInput& WithScript(const ScriptSummary& value) { SetScript(value); return *this;}
    inline TN3270StepInput& WithScript(ScriptSummary&& value) { SetScript(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The export data set names of the TN3270 step input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const{ return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    inline void SetExportDataSetNames(const Aws::Vector<Aws::String>& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = value; }
    inline void SetExportDataSetNames(Aws::Vector<Aws::String>&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::move(value); }
    inline TN3270StepInput& WithExportDataSetNames(const Aws::Vector<Aws::String>& value) { SetExportDataSetNames(value); return *this;}
    inline TN3270StepInput& WithExportDataSetNames(Aws::Vector<Aws::String>&& value) { SetExportDataSetNames(std::move(value)); return *this;}
    inline TN3270StepInput& AddExportDataSetNames(const Aws::String& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    inline TN3270StepInput& AddExportDataSetNames(Aws::String&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(std::move(value)); return *this; }
    inline TN3270StepInput& AddExportDataSetNames(const char* value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the TN3270 step input.</p>
     */
    inline const MainframeActionProperties& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const MainframeActionProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(MainframeActionProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline TN3270StepInput& WithProperties(const MainframeActionProperties& value) { SetProperties(value); return *this;}
    inline TN3270StepInput& WithProperties(MainframeActionProperties&& value) { SetProperties(std::move(value)); return *this;}
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
