/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/ModelMetadata.h>
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
  class CreateModelResult
  {
  public:
    AWS_LOOKOUTFORVISION_API CreateModelResult();
    AWS_LOOKOUTFORVISION_API CreateModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API CreateModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline const ModelMetadata& GetModelMetadata() const{ return m_modelMetadata; }

    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline void SetModelMetadata(const ModelMetadata& value) { m_modelMetadata = value; }

    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline void SetModelMetadata(ModelMetadata&& value) { m_modelMetadata = std::move(value); }

    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline CreateModelResult& WithModelMetadata(const ModelMetadata& value) { SetModelMetadata(value); return *this;}

    /**
     * <p>The response from a call to <code>CreateModel</code>.</p>
     */
    inline CreateModelResult& WithModelMetadata(ModelMetadata&& value) { SetModelMetadata(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ModelMetadata m_modelMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
