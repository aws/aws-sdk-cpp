﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SearchResourcesSortAttributeName.h>
#include <aws/macie2/model/OrderBy.h>
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
   * <p>Specifies criteria for sorting the results of a query for information about
   * Amazon Web Services resources that Amazon Macie monitors and
   * analyzes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesSortCriteria">AWS
   * API Reference</a></p>
   */
  class SearchResourcesSortCriteria
  {
  public:
    AWS_MACIE2_API SearchResourcesSortCriteria();
    AWS_MACIE2_API SearchResourcesSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property to sort the results by.</p>
     */
    inline const SearchResourcesSortAttributeName& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const SearchResourcesSortAttributeName& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(SearchResourcesSortAttributeName&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline SearchResourcesSortCriteria& WithAttributeName(const SearchResourcesSortAttributeName& value) { SetAttributeName(value); return *this;}
    inline SearchResourcesSortCriteria& WithAttributeName(SearchResourcesSortAttributeName&& value) { SetAttributeName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }
    inline SearchResourcesSortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}
    inline SearchResourcesSortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}
    ///@}
  private:

    SearchResourcesSortAttributeName m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
