﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ListJobsSortAttributeName.h>
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
   * <p>Specifies criteria for sorting the results of a request for information about
   * classification jobs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ListJobsSortCriteria">AWS
   * API Reference</a></p>
   */
  class ListJobsSortCriteria
  {
  public:
    AWS_MACIE2_API ListJobsSortCriteria() = default;
    AWS_MACIE2_API ListJobsSortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ListJobsSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The property to sort the results by.</p>
     */
    inline ListJobsSortAttributeName GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(ListJobsSortAttributeName value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline ListJobsSortCriteria& WithAttributeName(ListJobsSortAttributeName value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order to apply to the results, based on the value for the property
     * specified by the attributeName property. Valid values are: ASC, sort the results
     * in ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline OrderBy GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(OrderBy value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline ListJobsSortCriteria& WithOrderBy(OrderBy value) { SetOrderBy(value); return *this;}
    ///@}
  private:

    ListJobsSortAttributeName m_attributeName{ListJobsSortAttributeName::NOT_SET};
    bool m_attributeNameHasBeenSet = false;

    OrderBy m_orderBy{OrderBy::NOT_SET};
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
