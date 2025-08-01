/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The Amazon Route 53 health check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Route53HealthCheck">AWS
   * API Reference</a></p>
   */
  class Route53HealthCheck
  {
  public:
    AWS_ARCREGIONSWITCH_API Route53HealthCheck() = default;
    AWS_ARCREGIONSWITCH_API Route53HealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Route53HealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Route 53 health check hosted zone ID.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    Route53HealthCheck& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 record name.</p>
     */
    inline const Aws::String& GetRecordName() const { return m_recordName; }
    inline bool RecordNameHasBeenSet() const { return m_recordNameHasBeenSet; }
    template<typename RecordNameT = Aws::String>
    void SetRecordName(RecordNameT&& value) { m_recordNameHasBeenSet = true; m_recordName = std::forward<RecordNameT>(value); }
    template<typename RecordNameT = Aws::String>
    Route53HealthCheck& WithRecordName(RecordNameT&& value) { SetRecordName(std::forward<RecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 health check ID.</p>
     */
    inline const Aws::String& GetHealthCheckId() const { return m_healthCheckId; }
    inline bool HealthCheckIdHasBeenSet() const { return m_healthCheckIdHasBeenSet; }
    template<typename HealthCheckIdT = Aws::String>
    void SetHealthCheckId(HealthCheckIdT&& value) { m_healthCheckIdHasBeenSet = true; m_healthCheckId = std::forward<HealthCheckIdT>(value); }
    template<typename HealthCheckIdT = Aws::String>
    Route53HealthCheck& WithHealthCheckId(HealthCheckIdT&& value) { SetHealthCheckId(std::forward<HealthCheckIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Route 53 Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Route53HealthCheck& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_recordName;
    bool m_recordNameHasBeenSet = false;

    Aws::String m_healthCheckId;
    bool m_healthCheckIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
