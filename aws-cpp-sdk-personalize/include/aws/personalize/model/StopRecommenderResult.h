/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class StopRecommenderResult
  {
  public:
    AWS_PERSONALIZE_API StopRecommenderResult();
    AWS_PERSONALIZE_API StopRecommenderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API StopRecommenderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline const Aws::String& GetRecommenderArn() const{ return m_recommenderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline void SetRecommenderArn(const Aws::String& value) { m_recommenderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline void SetRecommenderArn(Aws::String&& value) { m_recommenderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline void SetRecommenderArn(const char* value) { m_recommenderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline StopRecommenderResult& WithRecommenderArn(const Aws::String& value) { SetRecommenderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline StopRecommenderResult& WithRecommenderArn(Aws::String&& value) { SetRecommenderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommender you stopped.</p>
     */
    inline StopRecommenderResult& WithRecommenderArn(const char* value) { SetRecommenderArn(value); return *this;}

  private:

    Aws::String m_recommenderArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
