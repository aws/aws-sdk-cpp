/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/DatasetStatus.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ImportDatasetResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ImportDatasetResult();
    AWS_LOOKOUTEQUIPMENT_API ImportDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ImportDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the created machine learning dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }
    inline ImportDatasetResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline ImportDatasetResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline ImportDatasetResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset that was imported.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }
    inline ImportDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline ImportDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline ImportDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>ImportDataset</code> operation.</p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DatasetStatus& value) { m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_status = std::move(value); }
    inline ImportDatasetResult& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline ImportDatasetResult& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the job of importing the dataset.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline ImportDatasetResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ImportDatasetResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ImportDatasetResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_datasetName;

    Aws::String m_datasetArn;

    DatasetStatus m_status;

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
