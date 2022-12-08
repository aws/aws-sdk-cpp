/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/QueryRecommendationTriggerData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>A union type containing information related to the trigger.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/RecommendationTriggerData">AWS
   * API Reference</a></p>
   */
  class RecommendationTriggerData
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API RecommendationTriggerData();
    AWS_CONNECTWISDOMSERVICE_API RecommendationTriggerData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API RecommendationTriggerData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline const QueryRecommendationTriggerData& GetQuery() const{ return m_query; }

    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline void SetQuery(const QueryRecommendationTriggerData& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline void SetQuery(QueryRecommendationTriggerData&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline RecommendationTriggerData& WithQuery(const QueryRecommendationTriggerData& value) { SetQuery(value); return *this;}

    /**
     * <p>Data associated with the QUERY RecommendationTriggerType.</p>
     */
    inline RecommendationTriggerData& WithQuery(QueryRecommendationTriggerData&& value) { SetQuery(std::move(value)); return *this;}

  private:

    QueryRecommendationTriggerData m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
