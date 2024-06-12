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
    AWS_APPTEST_API Batch();
    AWS_APPTEST_API Batch(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Batch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job name of the batch.</p>
     */
    inline const Aws::String& GetBatchJobName() const{ return m_batchJobName; }
    inline bool BatchJobNameHasBeenSet() const { return m_batchJobNameHasBeenSet; }
    inline void SetBatchJobName(const Aws::String& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = value; }
    inline void SetBatchJobName(Aws::String&& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = std::move(value); }
    inline void SetBatchJobName(const char* value) { m_batchJobNameHasBeenSet = true; m_batchJobName.assign(value); }
    inline Batch& WithBatchJobName(const Aws::String& value) { SetBatchJobName(value); return *this;}
    inline Batch& WithBatchJobName(Aws::String&& value) { SetBatchJobName(std::move(value)); return *this;}
    inline Batch& WithBatchJobName(const char* value) { SetBatchJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job parameters of the batch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBatchJobParameters() const{ return m_batchJobParameters; }
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }
    inline void SetBatchJobParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = value; }
    inline void SetBatchJobParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::move(value); }
    inline Batch& WithBatchJobParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetBatchJobParameters(value); return *this;}
    inline Batch& WithBatchJobParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetBatchJobParameters(std::move(value)); return *this;}
    inline Batch& AddBatchJobParameters(const Aws::String& key, const Aws::String& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, value); return *this; }
    inline Batch& AddBatchJobParameters(Aws::String&& key, const Aws::String& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), value); return *this; }
    inline Batch& AddBatchJobParameters(const Aws::String& key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, std::move(value)); return *this; }
    inline Batch& AddBatchJobParameters(Aws::String&& key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline Batch& AddBatchJobParameters(const char* key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, std::move(value)); return *this; }
    inline Batch& AddBatchJobParameters(Aws::String&& key, const char* value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), value); return *this; }
    inline Batch& AddBatchJobParameters(const char* key, const char* value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The export data set names of the batch.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const{ return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    inline void SetExportDataSetNames(const Aws::Vector<Aws::String>& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = value; }
    inline void SetExportDataSetNames(Aws::Vector<Aws::String>&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::move(value); }
    inline Batch& WithExportDataSetNames(const Aws::Vector<Aws::String>& value) { SetExportDataSetNames(value); return *this;}
    inline Batch& WithExportDataSetNames(Aws::Vector<Aws::String>&& value) { SetExportDataSetNames(std::move(value)); return *this;}
    inline Batch& AddExportDataSetNames(const Aws::String& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    inline Batch& AddExportDataSetNames(Aws::String&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(std::move(value)); return *this; }
    inline Batch& AddExportDataSetNames(const char* value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
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
