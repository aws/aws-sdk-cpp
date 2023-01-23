/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/AmiSortBy.h>
#include <aws/inspector2/model/SortOrder.h>
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
    AWS_INSPECTOR2_API AmiAggregation();
    AWS_INSPECTOR2_API AmiAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API AmiAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline const Aws::Vector<StringFilter>& GetAmis() const{ return m_amis; }

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline void SetAmis(const Aws::Vector<StringFilter>& value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline void SetAmis(Aws::Vector<StringFilter>&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline AmiAggregation& WithAmis(const Aws::Vector<StringFilter>& value) { SetAmis(value); return *this;}

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline AmiAggregation& WithAmis(Aws::Vector<StringFilter>&& value) { SetAmis(std::move(value)); return *this;}

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline AmiAggregation& AddAmis(const StringFilter& value) { m_amisHasBeenSet = true; m_amis.push_back(value); return *this; }

    /**
     * <p>The IDs of AMIs to aggregate findings for.</p>
     */
    inline AmiAggregation& AddAmis(StringFilter&& value) { m_amisHasBeenSet = true; m_amis.push_back(std::move(value)); return *this; }


    /**
     * <p>The value to sort results by.</p>
     */
    inline const AmiSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(const AmiSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The value to sort results by.</p>
     */
    inline void SetSortBy(AmiSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The value to sort results by.</p>
     */
    inline AmiAggregation& WithSortBy(const AmiSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The value to sort results by.</p>
     */
    inline AmiAggregation& WithSortBy(AmiSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The order to sort results by.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order to sort results by.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order to sort results by.</p>
     */
    inline AmiAggregation& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order to sort results by.</p>
     */
    inline AmiAggregation& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<StringFilter> m_amis;
    bool m_amisHasBeenSet = false;

    AmiSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
