/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SearchResourcesSimpleCriterion.h>
#include <aws/macie2/model/SearchResourcesTagCriterion.h>
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
   * <p>Specifies a property- or tag-based filter condition for including or
   * excluding Amazon Web Services resources from the query results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesCriteria">AWS
   * API Reference</a></p>
   */
  class SearchResourcesCriteria
  {
  public:
    AWS_MACIE2_API SearchResourcesCriteria();
    AWS_MACIE2_API SearchResourcesCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline const SearchResourcesSimpleCriterion& GetSimpleCriterion() const{ return m_simpleCriterion; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline bool SimpleCriterionHasBeenSet() const { return m_simpleCriterionHasBeenSet; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline void SetSimpleCriterion(const SearchResourcesSimpleCriterion& value) { m_simpleCriterionHasBeenSet = true; m_simpleCriterion = value; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline void SetSimpleCriterion(SearchResourcesSimpleCriterion&& value) { m_simpleCriterionHasBeenSet = true; m_simpleCriterion = std::move(value); }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline SearchResourcesCriteria& WithSimpleCriterion(const SearchResourcesSimpleCriterion& value) { SetSimpleCriterion(value); return *this;}

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding resources from the results.</p>
     */
    inline SearchResourcesCriteria& WithSimpleCriterion(SearchResourcesSimpleCriterion&& value) { SetSimpleCriterion(std::move(value)); return *this;}


    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline const SearchResourcesTagCriterion& GetTagCriterion() const{ return m_tagCriterion; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline bool TagCriterionHasBeenSet() const { return m_tagCriterionHasBeenSet; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline void SetTagCriterion(const SearchResourcesTagCriterion& value) { m_tagCriterionHasBeenSet = true; m_tagCriterion = value; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline void SetTagCriterion(SearchResourcesTagCriterion&& value) { m_tagCriterionHasBeenSet = true; m_tagCriterion = std::move(value); }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline SearchResourcesCriteria& WithTagCriterion(const SearchResourcesTagCriterion& value) { SetTagCriterion(value); return *this;}

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding resources from the
     * results.</p>
     */
    inline SearchResourcesCriteria& WithTagCriterion(SearchResourcesTagCriterion&& value) { SetTagCriterion(std::move(value)); return *this;}

  private:

    SearchResourcesSimpleCriterion m_simpleCriterion;
    bool m_simpleCriterionHasBeenSet = false;

    SearchResourcesTagCriterion m_tagCriterion;
    bool m_tagCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
