/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DatasetMetadata.h>
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
namespace LookoutforVision
{
namespace Model
{
  class CreateDatasetResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateDatasetResult();
    AWS_LOOKOUTFORVISION_API CreateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the dataset.</p>
     */
    inline const DatasetMetadata& GetDatasetMetadata() const{ return m_datasetMetadata; }

    /**
     * <p>Information about the dataset.</p>
     */
    inline void SetDatasetMetadata(const DatasetMetadata& value) { m_datasetMetadata = value; }

    /**
     * <p>Information about the dataset.</p>
     */
    inline void SetDatasetMetadata(DatasetMetadata&& value) { m_datasetMetadata = std::move(value); }

    /**
     * <p>Information about the dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetMetadata(const DatasetMetadata& value) { SetDatasetMetadata(value); return *this;}

    /**
     * <p>Information about the dataset.</p>
     */
    inline CreateDatasetResult& WithDatasetMetadata(DatasetMetadata&& value) { SetDatasetMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetMetadata m_datasetMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
