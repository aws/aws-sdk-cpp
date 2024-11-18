/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/DatasetStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteDatasetResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteDatasetResult();
    AWS_IOTSITEWISE_API DeleteDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the dataset. This contains the state and any error messages.
     * State is <code>DELETING</code> after a successfull call to this API, and any
     * associated error message.</p>
     */
    inline const DatasetStatus& GetDatasetStatus() const{ return m_datasetStatus; }
    inline void SetDatasetStatus(const DatasetStatus& value) { m_datasetStatus = value; }
    inline void SetDatasetStatus(DatasetStatus&& value) { m_datasetStatus = std::move(value); }
    inline DeleteDatasetResult& WithDatasetStatus(const DatasetStatus& value) { SetDatasetStatus(value); return *this;}
    inline DeleteDatasetResult& WithDatasetStatus(DatasetStatus&& value) { SetDatasetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DatasetStatus m_datasetStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
