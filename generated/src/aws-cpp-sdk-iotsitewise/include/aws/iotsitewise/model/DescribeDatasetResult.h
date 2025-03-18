/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/DatasetSource.h>
#include <aws/iotsitewise/model/DatasetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTSiteWise
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeDatasetResult() = default;
    AWS_IOTSITEWISE_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const { return m_datasetId; }
    template<typename DatasetIdT = Aws::String>
    void SetDatasetId(DatasetIdT&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::forward<DatasetIdT>(value); }
    template<typename DatasetIdT = Aws::String>
    DescribeDatasetResult& WithDatasetId(DatasetIdT&& value) { SetDatasetId(std::forward<DatasetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">ARN</a>
     * of the dataset. The format is
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dataset/${DatasetId}</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDatasetResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeDatasetResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the dataset, and its functionality.</p>
     */
    inline const Aws::String& GetDatasetDescription() const { return m_datasetDescription; }
    template<typename DatasetDescriptionT = Aws::String>
    void SetDatasetDescription(DatasetDescriptionT&& value) { m_datasetDescriptionHasBeenSet = true; m_datasetDescription = std::forward<DatasetDescriptionT>(value); }
    template<typename DatasetDescriptionT = Aws::String>
    DescribeDatasetResult& WithDatasetDescription(DatasetDescriptionT&& value) { SetDatasetDescription(std::forward<DatasetDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the dataset.</p>
     */
    inline const DatasetSource& GetDatasetSource() const { return m_datasetSource; }
    template<typename DatasetSourceT = DatasetSource>
    void SetDatasetSource(DatasetSourceT&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::forward<DatasetSourceT>(value); }
    template<typename DatasetSourceT = DatasetSource>
    DescribeDatasetResult& WithDatasetSource(DatasetSourceT&& value) { SetDatasetSource(std::forward<DatasetSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset. This contains the state and any error messages.
     * State is <code>CREATING</code> after a successfull call to this API, and any
     * associated error message. The state is <code>ACTIVE</code> when ready to
     * use.</p>
     */
    inline const DatasetStatus& GetDatasetStatus() const { return m_datasetStatus; }
    template<typename DatasetStatusT = DatasetStatus>
    void SetDatasetStatus(DatasetStatusT&& value) { m_datasetStatusHasBeenSet = true; m_datasetStatus = std::forward<DatasetStatusT>(value); }
    template<typename DatasetStatusT = DatasetStatus>
    DescribeDatasetResult& WithDatasetStatus(DatasetStatusT&& value) { SetDatasetStatus(std::forward<DatasetStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset creation date, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDatasetCreationDate() const { return m_datasetCreationDate; }
    template<typename DatasetCreationDateT = Aws::Utils::DateTime>
    void SetDatasetCreationDate(DatasetCreationDateT&& value) { m_datasetCreationDateHasBeenSet = true; m_datasetCreationDate = std::forward<DatasetCreationDateT>(value); }
    template<typename DatasetCreationDateT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithDatasetCreationDate(DatasetCreationDateT&& value) { SetDatasetCreationDate(std::forward<DatasetCreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the dataset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDatasetLastUpdateDate() const { return m_datasetLastUpdateDate; }
    template<typename DatasetLastUpdateDateT = Aws::Utils::DateTime>
    void SetDatasetLastUpdateDate(DatasetLastUpdateDateT&& value) { m_datasetLastUpdateDateHasBeenSet = true; m_datasetLastUpdateDate = std::forward<DatasetLastUpdateDateT>(value); }
    template<typename DatasetLastUpdateDateT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithDatasetLastUpdateDate(DatasetLastUpdateDateT&& value) { SetDatasetLastUpdateDate(std::forward<DatasetLastUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dataset.</p>
     */
    inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
    template<typename DatasetVersionT = Aws::String>
    void SetDatasetVersion(DatasetVersionT&& value) { m_datasetVersionHasBeenSet = true; m_datasetVersion = std::forward<DatasetVersionT>(value); }
    template<typename DatasetVersionT = Aws::String>
    DescribeDatasetResult& WithDatasetVersion(DatasetVersionT&& value) { SetDatasetVersion(std::forward<DatasetVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetDescription;
    bool m_datasetDescriptionHasBeenSet = false;

    DatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;

    DatasetStatus m_datasetStatus;
    bool m_datasetStatusHasBeenSet = false;

    Aws::Utils::DateTime m_datasetCreationDate{};
    bool m_datasetCreationDateHasBeenSet = false;

    Aws::Utils::DateTime m_datasetLastUpdateDate{};
    bool m_datasetLastUpdateDateHasBeenSet = false;

    Aws::String m_datasetVersion;
    bool m_datasetVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
