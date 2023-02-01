/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/OrderBy.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>The criteria used to sort.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/SortCriteria">AWS
   * API Reference</a></p>
   */
  class SortCriteria
  {
  public:
    AWS_ACCESSANALYZER_API SortCriteria();
    AWS_ACCESSANALYZER_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline SortCriteria& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline SortCriteria& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute to sort on.</p>
     */
    inline SortCriteria& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline SortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * <p>The sort order, ascending or descending.</p>
     */
    inline SortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
