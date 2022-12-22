/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/SentimentDetectionJobProperties.h>
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
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult();
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline const SentimentDetectionJobProperties& GetSentimentDetectionJobProperties() const{ return m_sentimentDetectionJobProperties; }

    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline void SetSentimentDetectionJobProperties(const SentimentDetectionJobProperties& value) { m_sentimentDetectionJobProperties = value; }

    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline void SetSentimentDetectionJobProperties(SentimentDetectionJobProperties&& value) { m_sentimentDetectionJobProperties = std::move(value); }

    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline DescribeSentimentDetectionJobResult& WithSentimentDetectionJobProperties(const SentimentDetectionJobProperties& value) { SetSentimentDetectionJobProperties(value); return *this;}

    /**
     * <p>An object that contains the properties associated with a sentiment detection
     * job.</p>
     */
    inline DescribeSentimentDetectionJobResult& WithSentimentDetectionJobProperties(SentimentDetectionJobProperties&& value) { SetSentimentDetectionJobProperties(std::move(value)); return *this;}

  private:

    SentimentDetectionJobProperties m_sentimentDetectionJobProperties;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
