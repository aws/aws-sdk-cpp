/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/model/MainframeResourceSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apptest/model/MainframeActionProperties.h>
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
   * <p>Defines a batch step input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/BatchStepInput">AWS
   * API Reference</a></p>
   */
  class BatchStepInput
  {
  public:
    AWS_APPTEST_API BatchStepInput() = default;
    AWS_APPTEST_API BatchStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API BatchStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the batch step input.</p>
     */
    inline const MainframeResourceSummary& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = MainframeResourceSummary>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = MainframeResourceSummary>
    BatchStepInput& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job name of the batch step input.</p>
     */
    inline const Aws::String& GetBatchJobName() const { return m_batchJobName; }
    inline bool BatchJobNameHasBeenSet() const { return m_batchJobNameHasBeenSet; }
    template<typename BatchJobNameT = Aws::String>
    void SetBatchJobName(BatchJobNameT&& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = std::forward<BatchJobNameT>(value); }
    template<typename BatchJobNameT = Aws::String>
    BatchStepInput& WithBatchJobName(BatchJobNameT&& value) { SetBatchJobName(std::forward<BatchJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job parameters of the batch step input.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBatchJobParameters() const { return m_batchJobParameters; }
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }
    template<typename BatchJobParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetBatchJobParameters(BatchJobParametersT&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::forward<BatchJobParametersT>(value); }
    template<typename BatchJobParametersT = Aws::Map<Aws::String, Aws::String>>
    BatchStepInput& WithBatchJobParameters(BatchJobParametersT&& value) { SetBatchJobParameters(std::forward<BatchJobParametersT>(value)); return *this;}
    template<typename BatchJobParametersKeyT = Aws::String, typename BatchJobParametersValueT = Aws::String>
    BatchStepInput& AddBatchJobParameters(BatchJobParametersKeyT&& key, BatchJobParametersValueT&& value) {
      m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::forward<BatchJobParametersKeyT>(key), std::forward<BatchJobParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The export data set names of the batch step input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const { return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    void SetExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::forward<ExportDataSetNamesT>(value); }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    BatchStepInput& WithExportDataSetNames(ExportDataSetNamesT&& value) { SetExportDataSetNames(std::forward<ExportDataSetNamesT>(value)); return *this;}
    template<typename ExportDataSetNamesT = Aws::String>
    BatchStepInput& AddExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.emplace_back(std::forward<ExportDataSetNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the batch step input.</p>
     */
    inline const MainframeActionProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = MainframeActionProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = MainframeActionProperties>
    BatchStepInput& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    MainframeResourceSummary m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_batchJobName;
    bool m_batchJobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_batchJobParameters;
    bool m_batchJobParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportDataSetNames;
    bool m_exportDataSetNamesHasBeenSet = false;

    MainframeActionProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
