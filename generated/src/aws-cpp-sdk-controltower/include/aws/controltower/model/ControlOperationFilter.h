﻿/**
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
   * <p>A filter object that lets you call <code>ListCOntrolOperations</code> with a
   * specific filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ControlOperationFilter">AWS
   * API Reference</a></p>
   */
  class ControlOperationFilter
  {
  public:
    AWS_CONTROLTOWER_API ControlOperationFilter();
    AWS_CONTROLTOWER_API ControlOperationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API ControlOperationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of <code>controlIdentifier</code> returned by the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetControlIdentifiers() const{ return m_controlIdentifiers; }
    inline bool ControlIdentifiersHasBeenSet() const { return m_controlIdentifiersHasBeenSet; }
    inline void SetControlIdentifiers(const Aws::Vector<Aws::String>& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = value; }
    inline void SetControlIdentifiers(Aws::Vector<Aws::String>&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = std::move(value); }
    inline ControlOperationFilter& WithControlIdentifiers(const Aws::Vector<Aws::String>& value) { SetControlIdentifiers(value); return *this;}
    inline ControlOperationFilter& WithControlIdentifiers(Aws::Vector<Aws::String>&& value) { SetControlIdentifiers(std::move(value)); return *this;}
    inline ControlOperationFilter& AddControlIdentifiers(const Aws::String& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(value); return *this; }
    inline ControlOperationFilter& AddControlIdentifiers(Aws::String&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(std::move(value)); return *this; }
    inline ControlOperationFilter& AddControlIdentifiers(const char* value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of <code>ControlOperation</code> objects returned by the filter.</p>
     */
    inline const Aws::Vector<ControlOperationType>& GetControlOperationTypes() const{ return m_controlOperationTypes; }
    inline bool ControlOperationTypesHasBeenSet() const { return m_controlOperationTypesHasBeenSet; }
    inline void SetControlOperationTypes(const Aws::Vector<ControlOperationType>& value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes = value; }
    inline void SetControlOperationTypes(Aws::Vector<ControlOperationType>&& value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes = std::move(value); }
    inline ControlOperationFilter& WithControlOperationTypes(const Aws::Vector<ControlOperationType>& value) { SetControlOperationTypes(value); return *this;}
    inline ControlOperationFilter& WithControlOperationTypes(Aws::Vector<ControlOperationType>&& value) { SetControlOperationTypes(std::move(value)); return *this;}
    inline ControlOperationFilter& AddControlOperationTypes(const ControlOperationType& value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes.push_back(value); return *this; }
    inline ControlOperationFilter& AddControlOperationTypes(ControlOperationType&& value) { m_controlOperationTypesHasBeenSet = true; m_controlOperationTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set <code>controlIdentifier</code> of enabled controls selected by the
     * filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledControlIdentifiers() const{ return m_enabledControlIdentifiers; }
    inline bool EnabledControlIdentifiersHasBeenSet() const { return m_enabledControlIdentifiersHasBeenSet; }
    inline void SetEnabledControlIdentifiers(const Aws::Vector<Aws::String>& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers = value; }
    inline void SetEnabledControlIdentifiers(Aws::Vector<Aws::String>&& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers = std::move(value); }
    inline ControlOperationFilter& WithEnabledControlIdentifiers(const Aws::Vector<Aws::String>& value) { SetEnabledControlIdentifiers(value); return *this;}
    inline ControlOperationFilter& WithEnabledControlIdentifiers(Aws::Vector<Aws::String>&& value) { SetEnabledControlIdentifiers(std::move(value)); return *this;}
    inline ControlOperationFilter& AddEnabledControlIdentifiers(const Aws::String& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers.push_back(value); return *this; }
    inline ControlOperationFilter& AddEnabledControlIdentifiers(Aws::String&& value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers.push_back(std::move(value)); return *this; }
    inline ControlOperationFilter& AddEnabledControlIdentifiers(const char* value) { m_enabledControlIdentifiersHasBeenSet = true; m_enabledControlIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Lists the status of control operations.</p>
     */
    inline const Aws::Vector<ControlOperationStatus>& GetStatuses() const{ return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    inline void SetStatuses(const Aws::Vector<ControlOperationStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }
    inline void SetStatuses(Aws::Vector<ControlOperationStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }
    inline ControlOperationFilter& WithStatuses(const Aws::Vector<ControlOperationStatus>& value) { SetStatuses(value); return *this;}
    inline ControlOperationFilter& WithStatuses(Aws::Vector<ControlOperationStatus>&& value) { SetStatuses(std::move(value)); return *this;}
    inline ControlOperationFilter& AddStatuses(const ControlOperationStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    inline ControlOperationFilter& AddStatuses(ControlOperationStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The set of <code>targetIdentifier</code> objects returned by the filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIdentifiers() const{ return m_targetIdentifiers; }
    inline bool TargetIdentifiersHasBeenSet() const { return m_targetIdentifiersHasBeenSet; }
    inline void SetTargetIdentifiers(const Aws::Vector<Aws::String>& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = value; }
    inline void SetTargetIdentifiers(Aws::Vector<Aws::String>&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers = std::move(value); }
    inline ControlOperationFilter& WithTargetIdentifiers(const Aws::Vector<Aws::String>& value) { SetTargetIdentifiers(value); return *this;}
    inline ControlOperationFilter& WithTargetIdentifiers(Aws::Vector<Aws::String>&& value) { SetTargetIdentifiers(std::move(value)); return *this;}
    inline ControlOperationFilter& AddTargetIdentifiers(const Aws::String& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(value); return *this; }
    inline ControlOperationFilter& AddTargetIdentifiers(Aws::String&& value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(std::move(value)); return *this; }
    inline ControlOperationFilter& AddTargetIdentifiers(const char* value) { m_targetIdentifiersHasBeenSet = true; m_targetIdentifiers.push_back(value); return *this; }
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
