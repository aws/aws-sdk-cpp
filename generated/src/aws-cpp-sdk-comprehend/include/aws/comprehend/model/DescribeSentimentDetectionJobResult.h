/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/SentimentDetectionJobProperties.h>
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
  class DescribeSentimentDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline const SentimentDetectionJobProperties& GetSentimentDetectionJobProperties() const { return m_sentimentDetectionJobProperties; }
    template<typename SentimentDetectionJobPropertiesT = SentimentDetectionJobProperties>
    void SetSentimentDetectionJobProperties(SentimentDetectionJobPropertiesT&& value) { m_sentimentDetectionJobPropertiesHasBeenSet = true; m_sentimentDetectionJobProperties = std::forward<SentimentDetectionJobPropertiesT>(value); }
    template<typename SentimentDetectionJobPropertiesT = SentimentDetectionJobProperties>
    DescribeSentimentDetectionJobResult& WithSentimentDetectionJobProperties(SentimentDetectionJobPropertiesT&& value) { SetSentimentDetectionJobProperties(std::forward<SentimentDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSentimentDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SentimentDetectionJobProperties m_sentimentDetectionJobProperties;
    bool m_sentimentDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
