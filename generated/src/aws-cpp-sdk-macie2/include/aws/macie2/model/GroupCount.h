/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides a group of results for a query that retrieved aggregated statistical
   * data about findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/GroupCount">AWS
   * API Reference</a></p>
   */
  class GroupCount
  {
  public:
    AWS_MACIE2_API GroupCount() = default;
    AWS_MACIE2_API GroupCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API GroupCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of findings in the group of query results.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline GroupCount& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property that defines the group in the query results, as
     * specified by the groupBy property in the query request.</p>
     */
    inline const Aws::String& GetGroupKey() const { return m_groupKey; }
    inline bool GroupKeyHasBeenSet() const { return m_groupKeyHasBeenSet; }
    template<typename GroupKeyT = Aws::String>
    void SetGroupKey(GroupKeyT&& value) { m_groupKeyHasBeenSet = true; m_groupKey = std::forward<GroupKeyT>(value); }
    template<typename GroupKeyT = Aws::String>
    GroupCount& WithGroupKey(GroupKeyT&& value) { SetGroupKey(std::forward<GroupKeyT>(value)); return *this;}
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_groupKey;
    bool m_groupKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
