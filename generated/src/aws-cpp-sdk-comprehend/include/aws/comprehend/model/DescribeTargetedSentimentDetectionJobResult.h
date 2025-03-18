/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TargetedSentimentDetectionJobProperties.h>
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
  class DescribeTargetedSentimentDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline const TargetedSentimentDetectionJobProperties& GetTargetedSentimentDetectionJobProperties() const { return m_targetedSentimentDetectionJobProperties; }
    template<typename TargetedSentimentDetectionJobPropertiesT = TargetedSentimentDetectionJobProperties>
    void SetTargetedSentimentDetectionJobProperties(TargetedSentimentDetectionJobPropertiesT&& value) { m_targetedSentimentDetectionJobPropertiesHasBeenSet = true; m_targetedSentimentDetectionJobProperties = std::forward<TargetedSentimentDetectionJobPropertiesT>(value); }
    template<typename TargetedSentimentDetectionJobPropertiesT = TargetedSentimentDetectionJobProperties>
    DescribeTargetedSentimentDetectionJobResult& WithTargetedSentimentDetectionJobProperties(TargetedSentimentDetectionJobPropertiesT&& value) { SetTargetedSentimentDetectionJobProperties(std::forward<TargetedSentimentDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTargetedSentimentDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TargetedSentimentDetectionJobProperties m_targetedSentimentDetectionJobProperties;
    bool m_targetedSentimentDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
