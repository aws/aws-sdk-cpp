/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/DatasetStatus.h>
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
  class UpdateDatasetResult
  {
  public:
    AWS_IOTSITEWISE_API UpdateDatasetResult();
    AWS_IOTSITEWISE_API UpdateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }
    inline void SetDatasetId(const Aws::String& value) { m_datasetId = value; }
    inline void SetDatasetId(Aws::String&& value) { m_datasetId = std::move(value); }
    inline void SetDatasetId(const char* value) { m_datasetId.assign(value); }
    inline UpdateDatasetResult& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}
    inline UpdateDatasetResult& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}
    inline UpdateDatasetResult& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}
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
    inline UpdateDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline UpdateDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline UpdateDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the dataset. This contains the state and any error messages.
     * State is <code>UPDATING</code> after a successfull call to this API, and any
     * associated error message. The state is <code>ACTIVE</code> when ready to
     * use.</p>
     */
    inline const DatasetStatus& GetDatasetStatus() const{ return m_datasetStatus; }
    inline void SetDatasetStatus(const DatasetStatus& value) { m_datasetStatus = value; }
    inline void SetDatasetStatus(DatasetStatus&& value) { m_datasetStatus = std::move(value); }
    inline UpdateDatasetResult& WithDatasetStatus(const DatasetStatus& value) { SetDatasetStatus(value); return *this;}
    inline UpdateDatasetResult& WithDatasetStatus(DatasetStatus&& value) { SetDatasetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetId;

    Aws::String m_datasetArn;

    DatasetStatus m_datasetStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
