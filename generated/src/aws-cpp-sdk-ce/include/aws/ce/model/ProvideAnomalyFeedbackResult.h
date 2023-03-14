/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{
  class ProvideAnomalyFeedbackResult
  {
  public:
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult();
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyId = value; }

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyId = std::move(value); }

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline void SetAnomalyId(const char* value) { m_anomalyId.assign(value); }

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline ProvideAnomalyFeedbackResult& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline ProvideAnomalyFeedbackResult& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the modified cost anomaly. </p>
     */
    inline ProvideAnomalyFeedbackResult& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ProvideAnomalyFeedbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ProvideAnomalyFeedbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ProvideAnomalyFeedbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_anomalyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
