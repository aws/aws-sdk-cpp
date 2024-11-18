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
    AWS_IOTSITEWISE_API DescribeDatasetResult();
    AWS_IOTSITEWISE_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }
    inline DescribeDatasetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline DescribeDatasetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">ARN</a>
     * of the dataset. The format is
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:dataset/${DatasetId}</code>.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }
    inline DescribeDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DescribeDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }
    inline DescribeDatasetResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DescribeDatasetResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description about the dataset, and its functionality.</p>
     */
    inline const Aws::String& GetDatasetDescription() const{ return m_datasetDescription; }
    inline void SetDatasetDescription(const Aws::String& value) { m_datasetDescription = value; }
    inline void SetDatasetDescription(Aws::String&& value) { m_datasetDescription = std::move(value); }
    inline void SetDatasetDescription(const char* value) { m_datasetDescription.assign(value); }
    inline DescribeDatasetResult& WithDatasetDescription(const Aws::String& value) { SetDatasetDescription(value); return *this;}
    inline DescribeDatasetResult& WithDatasetDescription(Aws::String&& value) { SetDatasetDescription(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithDatasetDescription(const char* value) { SetDatasetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the dataset.</p>
     */
    inline const DatasetSource& GetDatasetSource() const{ return m_datasetSource; }
    inline void SetDatasetSource(const DatasetSource& value) { m_datasetSource = value; }
    inline void SetDatasetSource(DatasetSource&& value) { m_datasetSource = std::move(value); }
    inline DescribeDatasetResult& WithDatasetSource(const DatasetSource& value) { SetDatasetSource(value); return *this;}
    inline DescribeDatasetResult& WithDatasetSource(DatasetSource&& value) { SetDatasetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset. This contains the state and any error messages.
     * State is <code>CREATING</code> after a successfull call to this API, and any
     * associated error message. The state is <code>ACTIVE</code> when ready to
     * use.</p>
     */
    inline const DatasetStatus& GetDatasetStatus() const{ return m_datasetStatus; }
    inline void SetDatasetStatus(const DatasetStatus& value) { m_datasetStatus = value; }
    inline void SetDatasetStatus(DatasetStatus&& value) { m_datasetStatus = std::move(value); }
    inline DescribeDatasetResult& WithDatasetStatus(const DatasetStatus& value) { SetDatasetStatus(value); return *this;}
    inline DescribeDatasetResult& WithDatasetStatus(DatasetStatus&& value) { SetDatasetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset creation date, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDatasetCreationDate() const{ return m_datasetCreationDate; }
    inline void SetDatasetCreationDate(const Aws::Utils::DateTime& value) { m_datasetCreationDate = value; }
    inline void SetDatasetCreationDate(Aws::Utils::DateTime&& value) { m_datasetCreationDate = std::move(value); }
    inline DescribeDatasetResult& WithDatasetCreationDate(const Aws::Utils::DateTime& value) { SetDatasetCreationDate(value); return *this;}
    inline DescribeDatasetResult& WithDatasetCreationDate(Aws::Utils::DateTime&& value) { SetDatasetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the dataset was last updated, in Unix epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetDatasetLastUpdateDate() const{ return m_datasetLastUpdateDate; }
    inline void SetDatasetLastUpdateDate(const Aws::Utils::DateTime& value) { m_datasetLastUpdateDate = value; }
    inline void SetDatasetLastUpdateDate(Aws::Utils::DateTime&& value) { m_datasetLastUpdateDate = std::move(value); }
    inline DescribeDatasetResult& WithDatasetLastUpdateDate(const Aws::Utils::DateTime& value) { SetDatasetLastUpdateDate(value); return *this;}
    inline DescribeDatasetResult& WithDatasetLastUpdateDate(Aws::Utils::DateTime&& value) { SetDatasetLastUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dataset.</p>
     */
    inline const Aws::String& GetDatasetVersion() const{ return m_datasetVersion; }
    inline void SetDatasetVersion(const Aws::String& value) { m_datasetVersion = value; }
    inline void SetDatasetVersion(Aws::String&& value) { m_datasetVersion = std::move(value); }
    inline void SetDatasetVersion(const char* value) { m_datasetVersion.assign(value); }
    inline DescribeDatasetResult& WithDatasetVersion(const Aws::String& value) { SetDatasetVersion(value); return *this;}
    inline DescribeDatasetResult& WithDatasetVersion(Aws::String&& value) { SetDatasetVersion(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithDatasetVersion(const char* value) { SetDatasetVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;

    Aws::String m_datasetArn;

    Aws::String m_datasetName;

    Aws::String m_datasetDescription;

    DatasetSource m_datasetSource;

    DatasetStatus m_datasetStatus;

    Aws::Utils::DateTime m_datasetCreationDate;

    Aws::Utils::DateTime m_datasetLastUpdateDate;

    Aws::String m_datasetVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
