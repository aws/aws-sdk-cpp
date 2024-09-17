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
    AWS_CONTROLTOWER_API EnabledControlFilter();
    AWS_CONTROLTOWER_API EnabledControlFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnabledControlFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set of <code>controlIdentifier</code> returned by the filter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetControlIdentifiers() const{ return m_controlIdentifiers; }
    inline bool ControlIdentifiersHasBeenSet() const { return m_controlIdentifiersHasBeenSet; }
    inline void SetControlIdentifiers(const Aws::Vector<Aws::String>& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = value; }
    inline void SetControlIdentifiers(Aws::Vector<Aws::String>&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers = std::move(value); }
    inline EnabledControlFilter& WithControlIdentifiers(const Aws::Vector<Aws::String>& value) { SetControlIdentifiers(value); return *this;}
    inline EnabledControlFilter& WithControlIdentifiers(Aws::Vector<Aws::String>&& value) { SetControlIdentifiers(std::move(value)); return *this;}
    inline EnabledControlFilter& AddControlIdentifiers(const Aws::String& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(value); return *this; }
    inline EnabledControlFilter& AddControlIdentifiers(Aws::String&& value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(std::move(value)); return *this; }
    inline EnabledControlFilter& AddControlIdentifiers(const char* value) { m_controlIdentifiersHasBeenSet = true; m_controlIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>DriftStatus</code> items.</p>
     */
    inline const Aws::Vector<DriftStatus>& GetDriftStatuses() const{ return m_driftStatuses; }
    inline bool DriftStatusesHasBeenSet() const { return m_driftStatusesHasBeenSet; }
    inline void SetDriftStatuses(const Aws::Vector<DriftStatus>& value) { m_driftStatusesHasBeenSet = true; m_driftStatuses = value; }
    inline void SetDriftStatuses(Aws::Vector<DriftStatus>&& value) { m_driftStatusesHasBeenSet = true; m_driftStatuses = std::move(value); }
    inline EnabledControlFilter& WithDriftStatuses(const Aws::Vector<DriftStatus>& value) { SetDriftStatuses(value); return *this;}
    inline EnabledControlFilter& WithDriftStatuses(Aws::Vector<DriftStatus>&& value) { SetDriftStatuses(std::move(value)); return *this;}
    inline EnabledControlFilter& AddDriftStatuses(const DriftStatus& value) { m_driftStatusesHasBeenSet = true; m_driftStatuses.push_back(value); return *this; }
    inline EnabledControlFilter& AddDriftStatuses(DriftStatus&& value) { m_driftStatusesHasBeenSet = true; m_driftStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>EnablementStatus</code> items.</p>
     */
    inline const Aws::Vector<EnablementStatus>& GetStatuses() const{ return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    inline void SetStatuses(const Aws::Vector<EnablementStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }
    inline void SetStatuses(Aws::Vector<EnablementStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }
    inline EnabledControlFilter& WithStatuses(const Aws::Vector<EnablementStatus>& value) { SetStatuses(value); return *this;}
    inline EnabledControlFilter& WithStatuses(Aws::Vector<EnablementStatus>&& value) { SetStatuses(std::move(value)); return *this;}
    inline EnabledControlFilter& AddStatuses(const EnablementStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    inline EnabledControlFilter& AddStatuses(EnablementStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }
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
