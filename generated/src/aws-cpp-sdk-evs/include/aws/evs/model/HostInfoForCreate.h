/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/model/InstanceType.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>An object that represents a host.</p>  <p>You cannot use
   * <code>dedicatedHostId</code> and <code>placementGroupId</code> together in the
   * same <code>HostInfoForCreate</code>object. This results in a
   * <code>ValidationException</code> response.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/HostInfoForCreate">AWS
   * API Reference</a></p>
   */
  class HostInfoForCreate
  {
  public:
    AWS_EVS_API HostInfoForCreate() = default;
    AWS_EVS_API HostInfoForCreate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API HostInfoForCreate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS hostname of the host. DNS hostnames for hosts must be unique across
     * Amazon EVS environments and within VCF.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    HostInfoForCreate& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSH key that is used to access the host.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    HostInfoForCreate& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance type that represents the host.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline HostInfoForCreate& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the placement group where the host is placed.</p>
     */
    inline const Aws::String& GetPlacementGroupId() const { return m_placementGroupId; }
    inline bool PlacementGroupIdHasBeenSet() const { return m_placementGroupIdHasBeenSet; }
    template<typename PlacementGroupIdT = Aws::String>
    void SetPlacementGroupId(PlacementGroupIdT&& value) { m_placementGroupIdHasBeenSet = true; m_placementGroupId = std::forward<PlacementGroupIdT>(value); }
    template<typename PlacementGroupIdT = Aws::String>
    HostInfoForCreate& WithPlacementGroupId(PlacementGroupIdT&& value) { SetPlacementGroupId(std::forward<PlacementGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the Amazon EC2 Dedicated Host.</p>
     */
    inline const Aws::String& GetDedicatedHostId() const { return m_dedicatedHostId; }
    inline bool DedicatedHostIdHasBeenSet() const { return m_dedicatedHostIdHasBeenSet; }
    template<typename DedicatedHostIdT = Aws::String>
    void SetDedicatedHostId(DedicatedHostIdT&& value) { m_dedicatedHostIdHasBeenSet = true; m_dedicatedHostId = std::forward<DedicatedHostIdT>(value); }
    template<typename DedicatedHostIdT = Aws::String>
    HostInfoForCreate& WithDedicatedHostId(DedicatedHostIdT&& value) { SetDedicatedHostId(std::forward<DedicatedHostIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_placementGroupId;
    bool m_placementGroupIdHasBeenSet = false;

    Aws::String m_dedicatedHostId;
    bool m_dedicatedHostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
