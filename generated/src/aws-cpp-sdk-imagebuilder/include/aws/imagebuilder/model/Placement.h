/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/TenancyType.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>By default, EC2 instances run on shared tenancy hardware. This means that
   * multiple Amazon Web Services accounts might share the same physical hardware.
   * When you use dedicated hardware, the physical server that hosts your instances
   * is dedicated to your Amazon Web Services account. Instance placement settings
   * contain the details for the physical hardware where instances that Image Builder
   * launches during image creation will run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/Placement">AWS
   * API Reference</a></p>
   */
  class Placement
  {
  public:
    AWS_IMAGEBUILDER_API Placement() = default;
    AWS_IMAGEBUILDER_API Placement(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Placement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Availability Zone where your build and test instances will launch.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Placement& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tenancy of the instance. An instance with a tenancy of
     * <code>dedicated</code> runs on single-tenant hardware. An instance with a
     * tenancy of <code>host</code> runs on a Dedicated Host.</p> <p>If tenancy is set
     * to <code>host</code>, then you can optionally specify one target for placement –
     * either host ID or host resource group ARN. If automatic placement is enabled for
     * your host, and you don't specify any placement target, Amazon EC2 will try to
     * find an available host for your build and test instances.</p>
     */
    inline TenancyType GetTenancy() const { return m_tenancy; }
    inline bool TenancyHasBeenSet() const { return m_tenancyHasBeenSet; }
    inline void SetTenancy(TenancyType value) { m_tenancyHasBeenSet = true; m_tenancy = value; }
    inline Placement& WithTenancy(TenancyType value) { SetTenancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Dedicated Host on which build and test instances run. This only
     * applies if <code>tenancy</code> is <code>host</code>. If you specify the host
     * ID, you must not specify the resource group ARN. If you specify both, Image
     * Builder returns an error.</p>
     */
    inline const Aws::String& GetHostId() const { return m_hostId; }
    inline bool HostIdHasBeenSet() const { return m_hostIdHasBeenSet; }
    template<typename HostIdT = Aws::String>
    void SetHostId(HostIdT&& value) { m_hostIdHasBeenSet = true; m_hostId = std::forward<HostIdT>(value); }
    template<typename HostIdT = Aws::String>
    Placement& WithHostId(HostIdT&& value) { SetHostId(std::forward<HostIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host resource group in which to launch
     * build and test instances. This only applies if <code>tenancy</code> is
     * <code>host</code>. If you specify the resource group ARN, you must not specify
     * the host ID. If you specify both, Image Builder returns an error.</p>
     */
    inline const Aws::String& GetHostResourceGroupArn() const { return m_hostResourceGroupArn; }
    inline bool HostResourceGroupArnHasBeenSet() const { return m_hostResourceGroupArnHasBeenSet; }
    template<typename HostResourceGroupArnT = Aws::String>
    void SetHostResourceGroupArn(HostResourceGroupArnT&& value) { m_hostResourceGroupArnHasBeenSet = true; m_hostResourceGroupArn = std::forward<HostResourceGroupArnT>(value); }
    template<typename HostResourceGroupArnT = Aws::String>
    Placement& WithHostResourceGroupArn(HostResourceGroupArnT&& value) { SetHostResourceGroupArn(std::forward<HostResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    TenancyType m_tenancy{TenancyType::NOT_SET};
    bool m_tenancyHasBeenSet = false;

    Aws::String m_hostId;
    bool m_hostIdHasBeenSet = false;

    Aws::String m_hostResourceGroupArn;
    bool m_hostResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
