/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnabledBaselineDriftStatus.h>
#include <aws/controltower/model/EnablementStatus.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>A filter applied on the <code>ListEnabledBaseline</code> operation. Allowed
   * filters are <code>baselineIdentifiers</code> and <code>targetIdentifiers</code>.
   * The filter can be applied for either, or both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledBaselineFilter">AWS
   * API Reference</a></p>
   */
  class EnabledBaselineFilter
  {
  public:
    AWS_CONTROLTOWER_API EnabledBaselineFilter() = default;
    AWS_CONTROLTOWER_API EnabledBaselineFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledBaselineFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifiers for the <code>Baseline</code> objects returned as part of the
     * filter operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaselineIdentifiers() const { return m_baselineIdentifiers; }
    inline bool BaselineIdentifiersHasBeenSet() const { return m_baselineIdentifiersHasBeenSet; }
    template<typename BaselineIdentifiersT = Aws::Vector<Aws::String>>
    void SetBaselineIdentifiers(BaselineIdentifiersT&& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers = std::forward<BaselineIdentifiersT>(value); }
    template<typename BaselineIdentifiersT = Aws::Vector<Aws::String>>
    EnabledBaselineFilter& WithBaselineIdentifiers(BaselineIdentifiersT&& value) { SetBaselineIdentifiers(std::forward<BaselineIdentifiersT>(value)); return *this;}
    template<typename BaselineIdentifiersT = Aws::String>
    EnabledBaselineFilter& AddBaselineIdentifiers(BaselineIdentifiersT&& value) { m_baselineIdentifiersHasBeenSet = true; m_baselineIdentifiers.emplace_back(std::forward<BaselineIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnabledBaselineDriftStatus</code> items for enabled
     * baselines.</p>
     */
    inline const Aws::Vector<EnabledBaselineDriftStatus>& GetInheritanceDriftStatuses() const { return m_inheritanceDriftStatuses; }
    inline bool InheritanceDriftStatusesHasBeenSet() const { return m_inheritanceDriftStatusesHasBeenSet; }
    template<typename InheritanceDriftStatusesT = Aws::Vector<EnabledBaselineDriftStatus>>
    void SetInheritanceDriftStatuses(InheritanceDriftStatusesT&& value) { m_inheritanceDriftStatusesHasBeenSet = true; m_inheritanceDriftStatuses = std::forward<InheritanceDriftStatusesT>(value); }
    template<typename InheritanceDriftStatusesT = Aws::Vector<EnabledBaselineDriftStatus>>
    EnabledBaselineFilter& WithInheritanceDriftStatuses(InheritanceDriftStatusesT&& value) { SetInheritanceDriftStatuses(std::forward<InheritanceDriftStatusesT>(value)); return *this;}
    inline EnabledBaselineFilter& AddInheritanceDriftStatuses(EnabledBaselineDriftStatus value) { m_inheritanceDriftStatusesHasBeenSet = true; m_inheritanceDriftStatuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional filter that sets up a list of <code>parentIdentifiers</code> to
     * filter the results of the <code>ListEnabledBaseline</code> output.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParentIdentifiers() const { return m_parentIdentifiers; }
    inline bool ParentIdentifiersHasBeenSet() const { return m_parentIdentifiersHasBeenSet; }
    template<typename ParentIdentifiersT = Aws::Vector<Aws::String>>
    void SetParentIdentifiers(ParentIdentifiersT&& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers = std::forward<ParentIdentifiersT>(value); }
    template<typename ParentIdentifiersT = Aws::Vector<Aws::String>>
    EnabledBaselineFilter& WithParentIdentifiers(ParentIdentifiersT&& value) { SetParentIdentifiers(std::forward<ParentIdentifiersT>(value)); return *this;}
    template<typename ParentIdentifiersT = Aws::String>
    EnabledBaselineFilter& AddParentIdentifiers(ParentIdentifiersT&& value) { m_parentIdentifiersHasBeenSet = true; m_parentIdentifiers.emplace_back(std::forward<ParentIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnablementStatus</code> items.</p>
     */
    inline const Aws::Vector<EnablementStatus>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Vector<EnablementStatus>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<EnablementStatus>>
    EnabledBaselineFilter& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline EnabledBaselineFilter& AddStatuses(EnablementStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifiers for the targets of the <code>Baseline</code> filter
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdentifiers() const { return m_targetIdentifiers; }
    inline bool TargetIdentifiersHasBeenSet() const { return m_targetIdentifiersHasBeenSet; }
    template<typename TargetIdentifiersT = Aws::Vector<Aws::String>>
    void SetTargetIdentifiers(TargetIdentifiersT&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = std::forward<TargetIdentifiersT>(value); }
    template<typename TargetIdentifiersT = Aws::Vector<Aws::String>>
    EnabledBaselineFilter& WithTargetIdentifiers(TargetIdentifiersT&& value) { SetTargetIdentifiers(std::forward<TargetIdentifiersT>(value)); return *this;}
    template<typename TargetIdentifiersT = Aws::String>
    EnabledBaselineFilter& AddTargetIdentifiers(TargetIdentifiersT&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.emplace_back(std::forward<TargetIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_baselineIdentifiers;
    bool m_baselineIdentifiersHasBeenSet = false;

    Aws::Vector<EnabledBaselineDriftStatus> m_inheritanceDriftStatuses;
    bool m_inheritanceDriftStatusesHasBeenSet = false;

    Aws::Vector<Aws::String> m_parentIdentifiers;
    bool m_parentIdentifiersHasBeenSet = false;

    Aws::Vector<EnablementStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIdentifiers;
    bool m_targetIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
