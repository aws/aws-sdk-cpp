/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/DriftStatus.h>
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
   * <p>A structure that returns a set of control identifiers, the control status for
   * each control in the set, and the drift status for each control in the
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlFilter">AWS
   * API Reference</a></p>
   */
  class EnabledControlFilter
  {
  public:
    AWS_CONTROLTOWER_API EnabledControlFilter() = default;
    AWS_CONTROLTOWER_API EnabledControlFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of <code>controlIdentifier</code> returned by the filter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetControlIdentifiers() const { return m_controlIdentifiers; }
    inline bool ControlIdentifiersHasBeenSet() const { return m_controlIdentifiersHasBeenSet; }
    template<typename ControlIdentifiersT = Aws::Vector<Aws::String>>
    void SetControlIdentifiers(ControlIdentifiersT&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = std::forward<ControlIdentifiersT>(value); }
    template<typename ControlIdentifiersT = Aws::Vector<Aws::String>>
    EnabledControlFilter& WithControlIdentifiers(ControlIdentifiersT&& value) { SetControlIdentifiers(std::forward<ControlIdentifiersT>(value)); return *this;}
    template<typename ControlIdentifiersT = Aws::String>
    EnabledControlFilter& AddControlIdentifiers(ControlIdentifiersT&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.emplace_back(std::forward<ControlIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DriftStatus</code> items.</p>
     */
    inline const Aws::Vector<DriftStatus>& GetDriftStatuses() const { return m_driftStatuses; }
    inline bool DriftStatusesHasBeenSet() const { return m_driftStatusesHasBeenSet; }
    template<typename DriftStatusesT = Aws::Vector<DriftStatus>>
    void SetDriftStatuses(DriftStatusesT&& value) { m_driftStatusesHasBeenSet = true; m_driftStatuses = std::forward<DriftStatusesT>(value); }
    template<typename DriftStatusesT = Aws::Vector<DriftStatus>>
    EnabledControlFilter& WithDriftStatuses(DriftStatusesT&& value) { SetDriftStatuses(std::forward<DriftStatusesT>(value)); return *this;}
    inline EnabledControlFilter& AddDriftStatuses(DriftStatus value) { m_driftStatusesHasBeenSet = true; m_driftStatuses.push_back(value); return *this; }
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
    EnabledControlFilter& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline EnabledControlFilter& AddStatuses(EnablementStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_controlIdentifiers;
    bool m_controlIdentifiersHasBeenSet = false;

    Aws::Vector<DriftStatus> m_driftStatuses;
    bool m_driftStatusesHasBeenSet = false;

    Aws::Vector<EnablementStatus> m_statuses;
    bool m_statusesHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
