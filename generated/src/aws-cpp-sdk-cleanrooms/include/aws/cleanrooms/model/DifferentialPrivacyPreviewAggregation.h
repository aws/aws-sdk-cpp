/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/DifferentialPrivacyAggregationType.h>
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
   * <p>Provides an estimate of the number of aggregation functions that the member
   * who can query can run given the epsilon and noise parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/DifferentialPrivacyPreviewAggregation">AWS
   * API Reference</a></p>
   */
  class DifferentialPrivacyPreviewAggregation
  {
  public:
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewAggregation() = default;
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API DifferentialPrivacyPreviewAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of aggregation function.</p>
     */
    inline DifferentialPrivacyAggregationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DifferentialPrivacyAggregationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DifferentialPrivacyPreviewAggregation& WithType(DifferentialPrivacyAggregationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of aggregations that the member who can query can run
     * given the epsilon and noise parameters.</p>
     */
    inline int GetMaxCount() const { return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline DifferentialPrivacyPreviewAggregation& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}
  private:

    DifferentialPrivacyAggregationType m_type{DifferentialPrivacyAggregationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_maxCount{0};
    bool m_maxCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
