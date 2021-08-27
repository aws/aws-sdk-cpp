/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/compute-optimizer/model/RecommendationSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/Summary.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>A summary of a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendationSummary">AWS
   * API Reference</a></p>
   */
  class AWS_COMPUTEOPTIMIZER_API RecommendationSummary
  {
  public:
    RecommendationSummary();
    RecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    RecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline const Aws::Vector<Summary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline bool SummariesHasBeenSet() const { return m_summariesHasBeenSet; }

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline void SetSummaries(const Aws::Vector<Summary>& value) { m_summariesHasBeenSet = true; m_summaries = value; }

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline void SetSummaries(Aws::Vector<Summary>&& value) { m_summariesHasBeenSet = true; m_summaries = std::move(value); }

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline RecommendationSummary& WithSummaries(const Aws::Vector<Summary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline RecommendationSummary& WithSummaries(Aws::Vector<Summary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline RecommendationSummary& AddSummaries(const Summary& value) { m_summariesHasBeenSet = true; m_summaries.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe a recommendation summary.</p>
     */
    inline RecommendationSummary& AddSummaries(Summary&& value) { m_summariesHasBeenSet = true; m_summaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline const RecommendationSourceType& GetRecommendationResourceType() const{ return m_recommendationResourceType; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline bool RecommendationResourceTypeHasBeenSet() const { return m_recommendationResourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetRecommendationResourceType(const RecommendationSourceType& value) { m_recommendationResourceTypeHasBeenSet = true; m_recommendationResourceType = value; }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline void SetRecommendationResourceType(RecommendationSourceType&& value) { m_recommendationResourceTypeHasBeenSet = true; m_recommendationResourceType = std::move(value); }

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline RecommendationSummary& WithRecommendationResourceType(const RecommendationSourceType& value) { SetRecommendationResourceType(value); return *this;}

    /**
     * <p>The resource type of the recommendation.</p>
     */
    inline RecommendationSummary& WithRecommendationResourceType(RecommendationSourceType&& value) { SetRecommendationResourceType(std::move(value)); return *this;}


    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline RecommendationSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline RecommendationSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the recommendation summary.</p>
     */
    inline RecommendationSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::Vector<Summary> m_summaries;
    bool m_summariesHasBeenSet;

    RecommendationSourceType m_recommendationResourceType;
    bool m_recommendationResourceTypeHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
