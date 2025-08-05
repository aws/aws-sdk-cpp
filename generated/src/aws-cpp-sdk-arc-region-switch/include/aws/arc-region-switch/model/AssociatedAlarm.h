/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/AlarmType.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>An Amazon CloudWatch alarm associated with a Region switch plan. These alarms
   * can be used to trigger automatic execution of the plan.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/AssociatedAlarm">AWS
   * API Reference</a></p>
   */
  class AssociatedAlarm
  {
  public:
    AWS_ARCREGIONSWITCH_API AssociatedAlarm() = default;
    AWS_ARCREGIONSWITCH_API AssociatedAlarm(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API AssociatedAlarm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The cross account role for the configuration.</p>
     */
    inline const Aws::String& GetCrossAccountRole() const { return m_crossAccountRole; }
    inline bool CrossAccountRoleHasBeenSet() const { return m_crossAccountRoleHasBeenSet; }
    template<typename CrossAccountRoleT = Aws::String>
    void SetCrossAccountRole(CrossAccountRoleT&& value) { m_crossAccountRoleHasBeenSet = true; m_crossAccountRole = std::forward<CrossAccountRoleT>(value); }
    template<typename CrossAccountRoleT = Aws::String>
    AssociatedAlarm& WithCrossAccountRole(CrossAccountRoleT&& value) { SetCrossAccountRole(std::forward<CrossAccountRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external ID (secret key) for the configuration.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    AssociatedAlarm& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource identifier for alarms that you associate with a plan.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const { return m_resourceIdentifier; }
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }
    template<typename ResourceIdentifierT = Aws::String>
    void SetResourceIdentifier(ResourceIdentifierT&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::forward<ResourceIdentifierT>(value); }
    template<typename ResourceIdentifierT = Aws::String>
    AssociatedAlarm& WithResourceIdentifier(ResourceIdentifierT&& value) { SetResourceIdentifier(std::forward<ResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alarm type for an associated alarm. An associated CloudWatch alarm can be
     * an application health alarm or a trigger alarm.</p>
     */
    inline AlarmType GetAlarmType() const { return m_alarmType; }
    inline bool AlarmTypeHasBeenSet() const { return m_alarmTypeHasBeenSet; }
    inline void SetAlarmType(AlarmType value) { m_alarmTypeHasBeenSet = true; m_alarmType = value; }
    inline AssociatedAlarm& WithAlarmType(AlarmType value) { SetAlarmType(value); return *this;}
    ///@}
  private:

    Aws::String m_crossAccountRole;
    bool m_crossAccountRoleHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;

    AlarmType m_alarmType{AlarmType::NOT_SET};
    bool m_alarmTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
