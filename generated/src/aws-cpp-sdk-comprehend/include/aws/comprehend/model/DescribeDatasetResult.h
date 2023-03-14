/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/DatasetProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_COMPREHEND_API DescribeDatasetResult();
    AWS_COMPREHEND_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dataset properties.</p>
     */
    inline const DatasetProperties& GetDatasetProperties() const{ return m_datasetProperties; }

    /**
     * <p>The dataset properties.</p>
     */
    inline void SetDatasetProperties(const DatasetProperties& value) { m_datasetProperties = value; }

    /**
     * <p>The dataset properties.</p>
     */
    inline void SetDatasetProperties(DatasetProperties&& value) { m_datasetProperties = std::move(value); }

    /**
     * <p>The dataset properties.</p>
     */
    inline DescribeDatasetResult& WithDatasetProperties(const DatasetProperties& value) { SetDatasetProperties(value); return *this;}

    /**
     * <p>The dataset properties.</p>
     */
    inline DescribeDatasetResult& WithDatasetProperties(DatasetProperties&& value) { SetDatasetProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatasetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatasetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatasetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetProperties m_datasetProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
