/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/SortOrder.h>
#include <aws/inspector2/model/AmiSortBy.h>
#include <aws/inspector2/model/StringFilter.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The details that define an aggregation based on Amazon machine images
   * (AMIs).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/AmiAggregation">AWS
   * API Reference</a></p>
   */
  class AmiAggregation
  {
  public:
    AWS_INSPECTOR2_API AmiAggregation() = default;
    AWS_INSPECTOR2_API AmiAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AmiAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAmis() const { return m_amis; }
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }
    template<typename AmisT = Aws::Vector<StringFilter>>
    void SetAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis = std::forward<AmisT>(value); }
    template<typename AmisT = Aws::Vector<StringFilter>>
    AmiAggregation& WithAmis(AmisT&& value) { SetAmis(std::forward<AmisT>(value)); return *this;}
    template<typename AmisT = StringFilter>
    AmiAggregation& AddAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis.emplace_back(std::forward<AmisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The order to sort results by.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline AmiAggregation& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to sort results by.</p>
     */
    inline AmiSortBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(AmiSortBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline AmiAggregation& WithSortBy(AmiSortBy value) { SetSortBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<StringFilter> m_amis;
    bool m_amisHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    AmiSortBy m_sortBy{AmiSortBy::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
