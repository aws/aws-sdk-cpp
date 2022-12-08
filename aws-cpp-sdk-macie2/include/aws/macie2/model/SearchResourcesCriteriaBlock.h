/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SearchResourcesCriteria.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies property- and tag-based conditions that define filter criteria for
   * including or excluding Amazon Web Services resources from the query
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesCriteriaBlock">AWS
   * API Reference</a></p>
   */
  class SearchResourcesCriteriaBlock
  {
  public:
    AWS_MACIE2_API SearchResourcesCriteriaBlock();
    AWS_MACIE2_API SearchResourcesCriteriaBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesCriteriaBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline const Aws::Vector<SearchResourcesCriteria>& GetAnd() const{ return m_and; }

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline bool AndHasBeenSet() const { return m_andHasBeenSet; }

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(const Aws::Vector<SearchResourcesCriteria>& value) { m_andHasBeenSet = true; m_and = value; }

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline void SetAnd(Aws::Vector<SearchResourcesCriteria>&& value) { m_andHasBeenSet = true; m_and = std::move(value); }

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline SearchResourcesCriteriaBlock& WithAnd(const Aws::Vector<SearchResourcesCriteria>& value) { SetAnd(value); return *this;}

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline SearchResourcesCriteriaBlock& WithAnd(Aws::Vector<SearchResourcesCriteria>&& value) { SetAnd(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline SearchResourcesCriteriaBlock& AddAnd(const SearchResourcesCriteria& value) { m_andHasBeenSet = true; m_and.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each property- or tag-based condition that
     * includes or excludes resources from the query results. If you specify more than
     * one condition, Amazon Macie uses AND logic to join the conditions.</p>
     */
    inline SearchResourcesCriteriaBlock& AddAnd(SearchResourcesCriteria&& value) { m_andHasBeenSet = true; m_and.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SearchResourcesCriteria> m_and;
    bool m_andHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
