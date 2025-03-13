/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/GroupKey.h>
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
   * <p>a structure that contains information on the count of resources within a
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Counts">AWS
   * API Reference</a></p>
   */
  class Counts
  {
  public:
    AWS_INSPECTOR2_API Counts() = default;
    AWS_INSPECTOR2_API Counts(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Counts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of resources.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Counts& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key associated with this group</p>
     */
    inline GroupKey GetGroupKey() const { return m_groupKey; }
    inline bool GroupKeyHasBeenSet() const { return m_groupKeyHasBeenSet; }
    inline void SetGroupKey(GroupKey value) { m_groupKeyHasBeenSet = true; m_groupKey = value; }
    inline Counts& WithGroupKey(GroupKey value) { SetGroupKey(value); return *this;}
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    GroupKey m_groupKey{GroupKey::NOT_SET};
    bool m_groupKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
