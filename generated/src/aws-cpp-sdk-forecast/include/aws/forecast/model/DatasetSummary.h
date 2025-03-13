/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DatasetType.h>
#include <aws/forecast/model/Domain.h>
#include <aws/core/utils/DateTime.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the dataset properties used in the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_ListDatasets.html">ListDatasets</a>
   * operation. To get the complete set of properties, call the <a
   * href="https://docs.aws.amazon.com/forecast/latest/dg/API_DescribeDataset.html">DescribeDataset</a>
   * operation, and provide the <code>DatasetArn</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/DatasetSummary">AWS
   * API Reference</a></p>
   */
  class DatasetSummary
  {
  public:
    AWS_FORECASTSERVICE_API DatasetSummary() = default;
    AWS_FORECASTSERVICE_API DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DatasetSummary& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DatasetSummary& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset type.</p>
     */
    inline DatasetType GetDatasetType() const { return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(DatasetType value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline DatasetSummary& WithDatasetType(DatasetType value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline Domain GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(Domain value) { m_domainHasBeenSet = true; m_domain = value; }
    inline DatasetSummary& WithDomain(Domain value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DatasetSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>ListDatasets</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DatasetSummary& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetType m_datasetType{DatasetType::NOT_SET};
    bool m_datasetTypeHasBeenSet = false;

    Domain m_domain{Domain::NOT_SET};
    bool m_domainHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
