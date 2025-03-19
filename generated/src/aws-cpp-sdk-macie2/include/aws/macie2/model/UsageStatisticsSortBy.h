/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/UsageStatisticsSortKey.h>
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
   * <p>Specifies criteria for sorting the results of a query for Amazon Macie
   * account quotas and usage data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageStatisticsSortBy">AWS
   * API Reference</a></p>
   */
  class UsageStatisticsSortBy
  {
  public:
    AWS_MACIE2_API UsageStatisticsSortBy() = default;
    AWS_MACIE2_API UsageStatisticsSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UsageStatisticsSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field to sort the results by.</p>
     */
    inline UsageStatisticsSortKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(UsageStatisticsSortKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline UsageStatisticsSortBy& WithKey(UsageStatisticsSortKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order to apply to the results, based on the value for the field
     * specified by the key property. Valid values are: ASC, sort the results in
     * ascending order; and, DESC, sort the results in descending order.</p>
     */
    inline OrderBy GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    inline void SetOrderBy(OrderBy value) { m_orderByHasBeenSet = true; m_orderBy = value; }
    inline UsageStatisticsSortBy& WithOrderBy(OrderBy value) { SetOrderBy(value); return *this;}
    ///@}
  private:

    UsageStatisticsSortKey m_key{UsageStatisticsSortKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    OrderBy m_orderBy{OrderBy::NOT_SET};
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
