/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TopicsDetectionJobProperties.h>
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
  class DescribeTopicsDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult() = default;
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeTopicsDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of properties for the requested job.</p>
     */
    inline const TopicsDetectionJobProperties& GetTopicsDetectionJobProperties() const { return m_topicsDetectionJobProperties; }
    template<typename TopicsDetectionJobPropertiesT = TopicsDetectionJobProperties>
    void SetTopicsDetectionJobProperties(TopicsDetectionJobPropertiesT&& value) { m_topicsDetectionJobPropertiesHasBeenSet = true; m_topicsDetectionJobProperties = std::forward<TopicsDetectionJobPropertiesT>(value); }
    template<typename TopicsDetectionJobPropertiesT = TopicsDetectionJobProperties>
    DescribeTopicsDetectionJobResult& WithTopicsDetectionJobProperties(TopicsDetectionJobPropertiesT&& value) { SetTopicsDetectionJobProperties(std::forward<TopicsDetectionJobPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTopicsDetectionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TopicsDetectionJobProperties m_topicsDetectionJobProperties;
    bool m_topicsDetectionJobPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
