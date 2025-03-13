/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Defines a batch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/Batch">AWS API
   * Reference</a></p>
   */
  class Batch
  {
  public:
    AWS_APPTEST_API Batch() = default;
    AWS_APPTEST_API Batch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Batch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job name of the batch.</p>
     */
    inline const Aws::String& GetBatchJobName() const { return m_batchJobName; }
    inline bool BatchJobNameHasBeenSet() const { return m_batchJobNameHasBeenSet; }
    template<typename BatchJobNameT = Aws::String>
    void SetBatchJobName(BatchJobNameT&& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = std::forward<BatchJobNameT>(value); }
    template<typename BatchJobNameT = Aws::String>
    Batch& WithBatchJobName(BatchJobNameT&& value) { SetBatchJobName(std::forward<BatchJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job parameters of the batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBatchJobParameters() const { return m_batchJobParameters; }
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }
    template<typename BatchJobParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetBatchJobParameters(BatchJobParametersT&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::forward<BatchJobParametersT>(value); }
    template<typename BatchJobParametersT = Aws::Map<Aws::String, Aws::String>>
    Batch& WithBatchJobParameters(BatchJobParametersT&& value) { SetBatchJobParameters(std::forward<BatchJobParametersT>(value)); return *this;}
    template<typename BatchJobParametersKeyT = Aws::String, typename BatchJobParametersValueT = Aws::String>
    Batch& AddBatchJobParameters(BatchJobParametersKeyT&& key, BatchJobParametersValueT&& value) {
      m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::forward<BatchJobParametersKeyT>(key), std::forward<BatchJobParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The export data set names of the batch.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const { return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    void SetExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::forward<ExportDataSetNamesT>(value); }
    template<typename ExportDataSetNamesT = Aws::Vector<Aws::String>>
    Batch& WithExportDataSetNames(ExportDataSetNamesT&& value) { SetExportDataSetNames(std::forward<ExportDataSetNamesT>(value)); return *this;}
    template<typename ExportDataSetNamesT = Aws::String>
    Batch& AddExportDataSetNames(ExportDataSetNamesT&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.emplace_back(std::forward<ExportDataSetNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_batchJobName;
    bool m_batchJobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_batchJobParameters;
    bool m_batchJobParametersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportDataSetNames;
    bool m_exportDataSetNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
