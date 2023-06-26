/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DetectAnomalyResult.h>
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
  class DetectAnomaliesResult
  {
  public:
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult();
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API DetectAnomaliesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline const DetectAnomalyResult& GetDetectAnomalyResult() const{ return m_detectAnomalyResult; }

    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline void SetDetectAnomalyResult(const DetectAnomalyResult& value) { m_detectAnomalyResult = value; }

    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline void SetDetectAnomalyResult(DetectAnomalyResult&& value) { m_detectAnomalyResult = std::move(value); }

    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline DetectAnomaliesResult& WithDetectAnomalyResult(const DetectAnomalyResult& value) { SetDetectAnomalyResult(value); return *this;}

    /**
     * <p>The results of the <code>DetectAnomalies</code> operation.</p>
     */
    inline DetectAnomaliesResult& WithDetectAnomalyResult(DetectAnomalyResult&& value) { SetDetectAnomalyResult(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectAnomaliesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectAnomaliesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectAnomaliesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DetectAnomalyResult m_detectAnomalyResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
