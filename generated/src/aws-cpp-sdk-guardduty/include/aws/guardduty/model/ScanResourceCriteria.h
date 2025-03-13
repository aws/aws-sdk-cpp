/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/guardduty/model/ScanCriterionKey.h>
#include <aws/guardduty/model/ScanCondition.h>
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
   * <p>Contains information about criteria used to filter resources before
   * triggering malware scan.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanResourceCriteria">AWS
   * API Reference</a></p>
   */
  class ScanResourceCriteria
  {
  public:
    AWS_GUARDDUTY_API ScanResourceCriteria() = default;
    AWS_GUARDDUTY_API ScanResourceCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanResourceCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents condition that when matched will allow a malware scan for a
     * certain resource.</p>
     */
    inline const Aws::Map<ScanCriterionKey, ScanCondition>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Map<ScanCriterionKey, ScanCondition>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Map<ScanCriterionKey, ScanCondition>>
    ScanResourceCriteria& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    inline ScanResourceCriteria& AddInclude(ScanCriterionKey key, ScanCondition value) {
      m_includeHasBeenSet = true; m_include.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents condition that when matched will prevent a malware scan for a
     * certain resource.</p>
     */
    inline const Aws::Map<ScanCriterionKey, ScanCondition>& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = Aws::Map<ScanCriterionKey, ScanCondition>>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = Aws::Map<ScanCriterionKey, ScanCondition>>
    ScanResourceCriteria& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    inline ScanResourceCriteria& AddExclude(ScanCriterionKey key, ScanCondition value) {
      m_excludeHasBeenSet = true; m_exclude.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<ScanCriterionKey, ScanCondition> m_include;
    bool m_includeHasBeenSet = false;

    Aws::Map<ScanCriterionKey, ScanCondition> m_exclude;
    bool m_excludeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
