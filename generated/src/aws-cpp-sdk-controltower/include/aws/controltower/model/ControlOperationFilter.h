/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/ControlOperationType.h>
#include <aws/controltower/model/ControlOperationStatus.h>
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
   * <p>A filter object that lets you call <code>ListControlOperations</code> with a
   * specific filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ControlOperationFilter">AWS
   * API Reference</a></p>
   */
  class ControlOperationFilter
  {
  public:
    AWS_CONTROLTOWER_API ControlOperationFilter() = default;
    AWS_CONTROLTOWER_API ControlOperationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of <code>controlIdentifier</code> returned by the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControlIdentifiers() const { return m_controlIdentifiers; }
    inline bool ControlIdentifiersHasBeenSet() const { return m_controlIdentifiersHasBeenSet; }
    template<typename ControlIdentifiersT = Aws::Vector<Aws::String>>
    void SetControlIdentifiers(ControlIdentifiersT&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = std::forward<ControlIdentifiersT>(value); }
    template<typename ControlIdentifiersT = Aws::Vector<Aws::String>>
    ControlOperationFilter& WithControlIdentifiers(ControlIdentifiersT&& value) { SetControlIdentifiers(std::forward<ControlIdentifiersT>(value)); return *this;}
    template<typename ControlIdentifiersT = Aws::String>
    ControlOperationFilter& AddControlIdentifiers(ControlIdentifiersT&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.emplace_back(std::forward<ControlIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of <code>ControlOperation</code> objects returned by the filter.</p>
     */
    inline const Aws::Vector<ControlOperationType>& GetControlOperationTypes() const { return m_controlOperationTypes; }
    inline bool ControlOperationTypesHasBeenSet() const { return m_controlOperationTypesHasBeenSet; }
    template<typename ControlOperationTypesT = Aws::Vector<ControlOperationType>>
    void SetControlOperationTypes(ControlOperationTypesT&& value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes = std::forward<ControlOperationTypesT>(value); }
    template<typename ControlOperationTypesT = Aws::Vector<ControlOperationType>>
    ControlOperationFilter& WithControlOperationTypes(ControlOperationTypesT&& value) { SetControlOperationTypes(std::forward<ControlOperationTypesT>(value)); return *this;}
    inline ControlOperationFilter& AddControlOperationTypes(ControlOperationType value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set <code>controlIdentifier</code> of enabled controls selected by the
     * filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledControlIdentifiers() const { return m_enabledControlIdentifiers; }
    inline bool EnabledControlIdentifiersHasBeenSet() const { return m_enabledControlIdentifiersHasBeenSet; }
    template<typename EnabledControlIdentifiersT = Aws::Vector<Aws::String>>
    void SetEnabledControlIdentifiers(EnabledControlIdentifiersT&& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers = std::forward<EnabledControlIdentifiersT>(value); }
    template<typename EnabledControlIdentifiersT = Aws::Vector<Aws::String>>
    ControlOperationFilter& WithEnabledControlIdentifiers(EnabledControlIdentifiersT&& value) { SetEnabledControlIdentifiers(std::forward<EnabledControlIdentifiersT>(value)); return *this;}
    template<typename EnabledControlIdentifiersT = Aws::String>
    ControlOperationFilter& AddEnabledControlIdentifiers(EnabledControlIdentifiersT&& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers.emplace_back(std::forward<EnabledControlIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the status of control operations.</p>
     */
    inline const Aws::Vector<ControlOperationStatus>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Vector<ControlOperationStatus>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<ControlOperationStatus>>
    ControlOperationFilter& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline ControlOperationFilter& AddStatuses(ControlOperationStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of <code>targetIdentifier</code> objects returned by the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdentifiers() const { return m_targetIdentifiers; }
    inline bool TargetIdentifiersHasBeenSet() const { return m_targetIdentifiersHasBeenSet; }
    template<typename TargetIdentifiersT = Aws::Vector<Aws::String>>
    void SetTargetIdentifiers(TargetIdentifiersT&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = std::forward<TargetIdentifiersT>(value); }
    template<typename TargetIdentifiersT = Aws::Vector<Aws::String>>
    ControlOperationFilter& WithTargetIdentifiers(TargetIdentifiersT&& value) { SetTargetIdentifiers(std::forward<TargetIdentifiersT>(value)); return *this;}
    template<typename TargetIdentifiersT = Aws::String>
    ControlOperationFilter& AddTargetIdentifiers(TargetIdentifiersT&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.emplace_back(std::forward<TargetIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_controlIdentifiers;
    bool m_controlIdentifiersHasBeenSet = false;

    Aws::Vector<ControlOperationType> m_controlOperationTypes;
    bool m_controlOperationTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_enabledControlIdentifiers;
    bool m_enabledControlIdentifiersHasBeenSet = false;

    Aws::Vector<ControlOperationStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetIdentifiers;
    bool m_targetIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
