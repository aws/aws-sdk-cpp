/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/DifferentialPrivacyPreviewAggregation.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Information about the number of aggregation functions that the member who can
   * query can run given the epsilon and noise parameters.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyPrivacyImpact">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyPrivacyImpact
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyImpact();
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyImpact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPrivacyImpact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline const Aws::Vector<DifferentialPrivacyPreviewAggregation>& GetAggregations() const{ return m_aggregations; }

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline void SetAggregations(const Aws::Vector<DifferentialPrivacyPreviewAggregation>& value) { m_aggregationsHasBeenSet = true; m_aggregations = value; }

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline void SetAggregations(Aws::Vector<DifferentialPrivacyPreviewAggregation>&& value) { m_aggregationsHasBeenSet = true; m_aggregations = std::move(value); }

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline DifferentialPrivacyPrivacyImpact& WithAggregations(const Aws::Vector<DifferentialPrivacyPreviewAggregation>& value) { SetAggregations(value); return *this;}

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline DifferentialPrivacyPrivacyImpact& WithAggregations(Aws::Vector<DifferentialPrivacyPreviewAggregation>&& value) { SetAggregations(std::move(value)); return *this;}

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline DifferentialPrivacyPrivacyImpact& AddAggregations(const DifferentialPrivacyPreviewAggregation& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(value); return *this; }

    /**
     * <p>The number of aggregation functions that you can perform.</p>
     */
    inline DifferentialPrivacyPrivacyImpact& AddAggregations(DifferentialPrivacyPreviewAggregation&& value) { m_aggregationsHasBeenSet = true; m_aggregations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DifferentialPrivacyPreviewAggregation> m_aggregations;
    bool m_aggregationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
