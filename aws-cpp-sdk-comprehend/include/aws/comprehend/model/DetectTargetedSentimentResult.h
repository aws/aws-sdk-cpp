/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/TargetedSentimentEntity.h>
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
  class DetectTargetedSentimentResult
  {
  public:
    AWS_COMPREHEND_API DetectTargetedSentimentResult();
    AWS_COMPREHEND_API DetectTargetedSentimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectTargetedSentimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline const Aws::Vector<TargetedSentimentEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline void SetEntities(const Aws::Vector<TargetedSentimentEntity>& value) { m_entities = value; }

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline void SetEntities(Aws::Vector<TargetedSentimentEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline DetectTargetedSentimentResult& WithEntities(const Aws::Vector<TargetedSentimentEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline DetectTargetedSentimentResult& WithEntities(Aws::Vector<TargetedSentimentEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline DetectTargetedSentimentResult& AddEntities(const TargetedSentimentEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>Targeted sentiment analysis for each of the entities identified in the input
     * text.</p>
     */
    inline DetectTargetedSentimentResult& AddEntities(TargetedSentimentEntity&& value) { m_entities.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TargetedSentimentEntity> m_entities;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
