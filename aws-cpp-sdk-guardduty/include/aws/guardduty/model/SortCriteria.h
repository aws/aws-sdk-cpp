/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/OrderBy.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * Represents the criteria used for sorting findings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SortCriteria">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API SortCriteria
  {
  public:
    SortCriteria();
    SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline SortCriteria& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline SortCriteria& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}

    /**
     * Represents the finding attribute (for example, accountId) by which to sort
     * findings.
     */
    inline SortCriteria& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}


    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline const OrderBy& GetOrderBy() const{ return m_orderBy; }

    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline void SetOrderBy(const OrderBy& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline void SetOrderBy(OrderBy&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline SortCriteria& WithOrderBy(const OrderBy& value) { SetOrderBy(value); return *this;}

    /**
     * Order by which the sorted findings are to be displayed.
     */
    inline SortCriteria& WithOrderBy(OrderBy&& value) { SetOrderBy(std::move(value)); return *this;}

  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet;

    OrderBy m_orderBy;
    bool m_orderByHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
