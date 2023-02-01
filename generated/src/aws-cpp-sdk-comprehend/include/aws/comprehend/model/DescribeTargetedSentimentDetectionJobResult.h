/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/TargetedSentimentDetectionJobProperties.h>
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
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult();
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeTargetedSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline const TargetedSentimentDetectionJobProperties& GetTargetedSentimentDetectionJobProperties() const{ return m_targetedSentimentDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline void SetTargetedSentimentDetectionJobProperties(const TargetedSentimentDetectionJobProperties& value) { m_targetedSentimentDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline void SetTargetedSentimentDetectionJobProperties(TargetedSentimentDetectionJobProperties&& value) { m_targetedSentimentDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline DescribeTargetedSentimentDetectionJobResult& WithTargetedSentimentDetectionJobProperties(const TargetedSentimentDetectionJobProperties& value) { SetTargetedSentimentDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a targeted sentiment
     * detection job.</p>
     */
    inline DescribeTargetedSentimentDetectionJobResult& WithTargetedSentimentDetectionJobProperties(TargetedSentimentDetectionJobProperties&& value) { SetTargetedSentimentDetectionJobProperties(std::move(value)); return *this;}

  private:

    TargetedSentimentDetectionJobProperties m_targetedSentimentDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
