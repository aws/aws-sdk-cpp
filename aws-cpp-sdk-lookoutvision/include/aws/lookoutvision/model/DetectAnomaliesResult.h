/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/model/DetectAnomalyResult.h>
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

  private:

    DetectAnomalyResult m_detectAnomalyResult;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
