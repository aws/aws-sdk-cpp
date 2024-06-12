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
    AWS_APPTEST_API BatchStepInput();
    AWS_APPTEST_API BatchStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API BatchStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource of the batch step input.</p>
     */
    inline const MainframeResourceSummary& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const MainframeResourceSummary& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(MainframeResourceSummary&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline BatchStepInput& WithResource(const MainframeResourceSummary& value) { SetResource(value); return *this;}
    inline BatchStepInput& WithResource(MainframeResourceSummary&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job name of the batch step input.</p>
     */
    inline const Aws::String& GetBatchJobName() const{ return m_batchJobName; }
    inline bool BatchJobNameHasBeenSet() const { return m_batchJobNameHasBeenSet; }
    inline void SetBatchJobName(const Aws::String& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = value; }
    inline void SetBatchJobName(Aws::String&& value) { m_batchJobNameHasBeenSet = true; m_batchJobName = std::move(value); }
    inline void SetBatchJobName(const char* value) { m_batchJobNameHasBeenSet = true; m_batchJobName.assign(value); }
    inline BatchStepInput& WithBatchJobName(const Aws::String& value) { SetBatchJobName(value); return *this;}
    inline BatchStepInput& WithBatchJobName(Aws::String&& value) { SetBatchJobName(std::move(value)); return *this;}
    inline BatchStepInput& WithBatchJobName(const char* value) { SetBatchJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch job parameters of the batch step input.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBatchJobParameters() const{ return m_batchJobParameters; }
    inline bool BatchJobParametersHasBeenSet() const { return m_batchJobParametersHasBeenSet; }
    inline void SetBatchJobParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = value; }
    inline void SetBatchJobParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters = std::move(value); }
    inline BatchStepInput& WithBatchJobParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetBatchJobParameters(value); return *this;}
    inline BatchStepInput& WithBatchJobParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetBatchJobParameters(std::move(value)); return *this;}
    inline BatchStepInput& AddBatchJobParameters(const Aws::String& key, const Aws::String& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, value); return *this; }
    inline BatchStepInput& AddBatchJobParameters(Aws::String&& key, const Aws::String& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), value); return *this; }
    inline BatchStepInput& AddBatchJobParameters(const Aws::String& key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, std::move(value)); return *this; }
    inline BatchStepInput& AddBatchJobParameters(Aws::String&& key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchStepInput& AddBatchJobParameters(const char* key, Aws::String&& value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, std::move(value)); return *this; }
    inline BatchStepInput& AddBatchJobParameters(Aws::String&& key, const char* value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(std::move(key), value); return *this; }
    inline BatchStepInput& AddBatchJobParameters(const char* key, const char* value) { m_batchJobParametersHasBeenSet = true; m_batchJobParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The export data set names of the batch step input.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportDataSetNames() const{ return m_exportDataSetNames; }
    inline bool ExportDataSetNamesHasBeenSet() const { return m_exportDataSetNamesHasBeenSet; }
    inline void SetExportDataSetNames(const Aws::Vector<Aws::String>& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = value; }
    inline void SetExportDataSetNames(Aws::Vector<Aws::String>&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames = std::move(value); }
    inline BatchStepInput& WithExportDataSetNames(const Aws::Vector<Aws::String>& value) { SetExportDataSetNames(value); return *this;}
    inline BatchStepInput& WithExportDataSetNames(Aws::Vector<Aws::String>&& value) { SetExportDataSetNames(std::move(value)); return *this;}
    inline BatchStepInput& AddExportDataSetNames(const Aws::String& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    inline BatchStepInput& AddExportDataSetNames(Aws::String&& value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(std::move(value)); return *this; }
    inline BatchStepInput& AddExportDataSetNames(const char* value) { m_exportDataSetNamesHasBeenSet = true; m_exportDataSetNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The properties of the batch step input.</p>
     */
    inline const MainframeActionProperties& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const MainframeActionProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(MainframeActionProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline BatchStepInput& WithProperties(const MainframeActionProperties& value) { SetProperties(value); return *this;}
    inline BatchStepInput& WithProperties(MainframeActionProperties&& value) { SetProperties(std::move(value)); return *this;}
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
