/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Recommender.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeRecommenderResult
  {
  public:
    AWS_PERSONALIZE_API DescribeRecommenderResult();
    AWS_PERSONALIZE_API DescribeRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The properties of the recommender.</p>
     */
    inline const Recommender& GetRecommender() const{ return m_recommender; }

    /**
     * <p>The properties of the recommender.</p>
     */
    inline void SetRecommender(const Recommender& value) { m_recommender = value; }

    /**
     * <p>The properties of the recommender.</p>
     */
    inline void SetRecommender(Recommender&& value) { m_recommender = std::move(value); }

    /**
     * <p>The properties of the recommender.</p>
     */
    inline DescribeRecommenderResult& WithRecommender(const Recommender& value) { SetRecommender(value); return *this;}

    /**
     * <p>The properties of the recommender.</p>
     */
    inline DescribeRecommenderResult& WithRecommender(Recommender&& value) { SetRecommender(std::move(value)); return *this;}

  private:

    Recommender m_recommender;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
